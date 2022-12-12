package dal;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class Connessione {
	
	private final String HOST = "jdbc:mysql://localhost:3306/scienziati_java";
	private final String USER = "root";
	private final String PASS = "";
	
	private Connection conn;
	
	public void connetti() {
		
//		try {
//			Class.forName("com.mysql.cj.jdbc.driver");
//		} catch (ClassNotFoundException e1) {
//			// TODO Auto-generated catch block
//			e1.printStackTrace();
//		}
		
		try {
			this.conn = DriverManager.getConnection(HOST, USER, PASS);
		} catch (SQLException e) {
			System.err.println("Errore di connessione " + e.getMessage());
//			e.printStackTrace();
		}
	}
	
	public Connection getConn() {
		if (conn == null)
			connetti();
		return conn;
	}

}
