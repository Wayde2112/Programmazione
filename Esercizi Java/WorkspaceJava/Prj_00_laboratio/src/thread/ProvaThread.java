package thread;

public class ProvaThread {

	public static void main(String[] args) {
		
		MioThread mt1 = new MioThread();
		
		mt1.start();
		
		System.out.println("Sono la classe ProvaThread");
		
		Runnable r1 = () -> {
			
				try {
					Thread.sleep(1000);
				} catch (InterruptedException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				}
				System.out.println("Sono il thread r1");
				
			};
		
			new Thread(r1).start();
			
			Runnable r2 = () -> System.out.println("Sono il runnable r2");
			
			new Thread(r2). start();
			
			

	}

}

