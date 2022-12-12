package controller;

import jakarta.servlet.ServletException;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;
import java.io.IOException;
import java.io.InputStreamReader;
import java.net.URL;
import java.net.URLConnection;
import java.util.Scanner;

/**
 * Servlet implementation class Router
 */

@WebServlet("/")
public class Router extends HttpServlet {
	private static final long serialVersionUID = 1L;

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		
		if (request.getParameter("gioco") != null) {
			
			String gioco = request.getParameter("gioco");
			StringBuilder html = new StringBuilder();
			
			switch (gioco) {
				case "tris":
					try {
			            URL mySite = new URL("https://it.wikipedia.org/wiki/Tic_Tac_Toe#:~:text=Tic%20Tac%20Toe%20Da%20Wikipedia%2C%20l%27enciclopedia%20libera.%20Le,tutto%20al%20femminile%20originario%20della%20regione%20della%20Ruhr.");
			            URLConnection yc = mySite.openConnection();
			            Scanner in = new Scanner(new InputStreamReader(yc.getInputStream()));
			            while (in.hasNext()) {
			                html.append(in.next());
			            }
			            in.close();
			        } catch (Exception e) {
			            e.printStackTrace();
			        }
					response.setContentType("text/html");
					response.getWriter().append(html.toString());
					
					break;
	
				default:
					request.getRequestDispatcher("/wordle").forward(request, response);
					break;
			}
			
		} else		
			request.getRequestDispatcher("/wordle").forward(request, response);
		
//		response.getWriter().append("Funziona!");
	}

}
