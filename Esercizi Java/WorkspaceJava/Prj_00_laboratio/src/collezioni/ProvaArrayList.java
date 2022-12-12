package collezioni;

import java.util.ArrayList;
import java.util.Iterator;

public class ProvaArrayList {

	public static void main(String[] args) {
		
		ArrayList<String> todoList = new ArrayList<>();
		
		todoList.add("latte");
		todoList.add("pane");
		todoList.add("vino");
		todoList.add("acqua");
		todoList.add("biscotti");
		
		System.out.println(todoList.size());
		
		todoList.remove(0);
		System.out.println(todoList.size());
		
		System.out.println(todoList.get(0));
		
		// Wrapper classes java.lang.Double -> double
		ArrayList<Integer> voti = new ArrayList<Integer>();
		
		voti.add(20);
		voti.add(22);
		voti.add(23);
		voti.add(24);
		
		double tot = 0;
		for (int voto : voti) {
			System.out.println(voto);
			tot += voto;
		}

		System.out.println(tot/voti.size());
	}

}
