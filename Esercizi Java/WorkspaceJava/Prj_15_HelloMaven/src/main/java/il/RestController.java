package il;

import java.io.IOException;

import org.json.JSONArray;

import jakarta.servlet.ServletException;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;
import services.ScienziatiService;

@WebServlet("/api/scienziati")
public class RestController extends HttpServlet {
	
	private static final long serialVersionUID = 1L;
	
	private ScienziatiService service;

	public RestController() {
		
		this.service = new ScienziatiService();
		
	}

	@Override
	protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
		
		JSONArray scienziatiJSON = new JSONArray(this.service.getAll());
		
		resp.setContentType("application/json");
		resp.getWriter().append(scienziatiJSON.toString());
		
	}
	
	
	
	

}
