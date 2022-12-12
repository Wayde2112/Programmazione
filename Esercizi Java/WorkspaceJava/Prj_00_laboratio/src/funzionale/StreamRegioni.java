package funzionale;

import java.util.List;

public class StreamRegioni {

	public static void main(String[] args) {
		
		Regione piemonte = new Regione("piemonte", List.of("torino", "cuneo", "asti"), 40000000);
		Regione lombardia = new Regione("lombardia", List.of("milnao", "como", "lecco"), 50000000);
		Regione lazio = new Regione("lazio", List.of("roma", "latina", "viterbo"), 60000000);

		List<Regione> regioni = List.of(piemonte, lombardia, lazio);
		
		List<Integer> list = regioni.stream().map(r -> r.popolazione).toList();

		Integer reduce = list.stream().reduce(0, (x, y) -> x + y);
		
		System.out.println(reduce);
		
		List<List<String>> list2 = regioni.stream().map(r -> r.comuni).toList();
		list2.stream().map(ls -> ls.get(0)).toList();
	}

}
