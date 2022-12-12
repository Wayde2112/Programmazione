package interfacce;

public class ProvaLambda {

//	class Prova implements Contratto2 {
//		
//		@Override
//		public void esegui3() {
//			// TODO Auto-generated method stub
//			
//		}
//		
//	}
	
	public static void main(String[] args) {
		
		Contratto2 c = () -> System.out.println("Ciao");

	}

}
