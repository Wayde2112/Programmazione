<!DOCTYPE html>
<%@page import="database.Discoteca"%>
<%@page import="model.Canzone"%>
<html>

	<head>
		<meta charset="utf-8">
		<title>Musica</title>
		
		<style >
			h1 {color:red;}
		</style>
	</head>
	
	<body>
	
		<h1 id = "titolo">Juke Box</h1>
		
		<form method = "post" action = "">
			<input type = "text" name = "titolo" placeholder = "Titolo...">
			<input type = "text" name = "cantante" placeholder = "Cantante...">
			<input type = "submit" value = "Aggiungi canzone">
		</form>		
		
		<!-- Sriptlet -->
		<%
		
			if (request.getParameter ("titolo") != null && request.getParameter ("cantante") != null) {
				
				// Creo un oggetto di tipo canzone
				String titolo = request.getParameter("titolo");
				String cantante= request.getParameter("cantante");
				Canzone c = new Canzone(titolo, cantante);
				
				// Aggiungo la canzone c alla collezione (ArrayList)
				Discoteca.dischi.add(c);
				
			}
			
		%>
		
		<ul>
			<% for (Canzone canz : Discoteca.dischi){ %>
			<li>
				<%= canz %>
				<a target = "_blank" href = "https://www.google.com/search?q=<%= canz.titolo %>&tbm=vid">[Play]</a>
			</li>
			<% } %>
		</ul>
		
		<script>
			const titolo = document.getElementById("titolo")
			titolo.textContent = "Prova microfono"
		</script>
	
	</body>
	
</html>