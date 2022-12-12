package recursor;

import java.util.stream.IntStream;

public class FizzBuzz {

	public static void main(String[] args) {
		
		for (int i = 0; i <= 100 ; i++) {
			
			if(i % 3 == 0 && i % 5 == 0) {
				
			}
			
		}

	}
	
	/*
	private static void generaNumeri(int n) {
		
		IntStream.rangeClosed(1, 100)
			.mapToObj(i -> i % 3 == 0 ? (i % 5 == 0 ? "FizzBuzz" : "Fizz") : (i % 5 == 0 ? "Buzz" : i))
			.forEach(System.out::println);
		
	}
	*/
}
