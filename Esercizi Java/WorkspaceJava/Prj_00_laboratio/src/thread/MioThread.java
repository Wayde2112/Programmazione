package thread;

public class MioThread extends Thread {

	@Override
	public void run() {
		
		for (int i = 0; i < 5; i++) {
			System.out.println("Sono il thread custom");
			System.out.println("Esecuzione n. " + i);			
		}
		
		try {
			sleep(500);
		} catch (InterruptedException e) {
			e.printStackTrace();
		}
	}
	
	
	

}
