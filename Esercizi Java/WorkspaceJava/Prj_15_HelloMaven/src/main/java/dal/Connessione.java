package dal;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class Connessione {
	
	private final static String DB_NAME = "scienziati_java";
	private final static String HOST = "jbdc:mysql://localhost:3306/" + DB_NAME;
	private final static String USER = "root";
	private final static String PASS = "";
	
	private static Connection conn;
	
	public static Connection getConn() {
		if (conn == null) {
			connetti();
		}
		return conn;
	}
	
	private static void connetti() {
		
		try {
			Class.forName("conn.mysql.cj.jdbc.Driver");
		} catch (ClassNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		try {
			conn = DriverManager.getConnection(HOST, USER, PASS);
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
	}

}
