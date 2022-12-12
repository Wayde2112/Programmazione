package patterns;

public class StudenteDemo {

	public static void main(String[] args) {
		
		Studente s1 = new Studente();
		s1.setnMat(1);
		s1.setNome("Pippo");
		
		StudenteView sv = new StudenteView();
		
		StudentiController ctrl = new StudentiController(s1, sv);
		ctrl.updateView();

	}

}
