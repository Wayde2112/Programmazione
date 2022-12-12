package funzionale;

import java.util.List;
import java.util.stream.IntStream;

public class StreamInteri {
	
	public static void main(String[] args) {
		
//		IntStream.of(22, 24, 26, 28, 30)
		IntStream.range(1, 101)
			.skip(30)
			.filter(i -> i > 10) // Predicate
			.filter(i -> i % 2 == 0) // Predicate
			.filter(i -> i % 3 == 0) // Predicate
			.forEach(n -> System.out.println(n)); // Consumer
		
		int[] array = IntStream.of(22, 24, 26, 28, 30)
				.filter(i -> i > 25) // Predicate
				.filter(i -> i < 30) // Predicate
				.toArray();
		
		System.out.println(array.length);
		
	}

}
