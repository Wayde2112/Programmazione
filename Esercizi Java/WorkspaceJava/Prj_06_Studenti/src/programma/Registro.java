package programma;

public class Registro {
	
	Studente[] studenti;

    public Registro(Studente[] studenti) {
        this.studenti = studenti;
    }

    public int getNumeroStudenti() {
        return this.studenti.length;
    }

    public int faiAppello() {
        int i = 0;
        for (Studente studente : studenti) {
            System.out.println(studente);
        }
        return i;
    }
}
