package controller;

import jakarta.servlet.ServletException;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;
import model.Film;

import java.io.IOException;
import java.util.Arrays;
import java.util.List;

import org.json.JSONArray;

/**
 * Servlet implementation class NegozioMVC
 */

@WebServlet("/api/film")

public class NegozioREST extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public NegozioREST() {
        super();
        System.out.println("Servlet NegozioMVC creata");
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		List<Film> listaFilm = FilmController.getAll();
		
		JSONArray listaFilmJSON = new JSONArray(listaFilm);
		
		response.getWriter().append(listaFilmJSON.toString());
		
		System.out.println("Sono il metodo doGet del controller REST");
	}
	

}
