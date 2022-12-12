package programma;

public class Studente {
	
	int nMatricola;
    String nome;
    String cognome;

    public Studente(int nMatricola, String nomeStudente, String cognomeStudente) {

        this.nMatricola = nMatricola;
        this.nome = nomeStudente;
        this.cognome = cognomeStudente;
    }

    public String stampa() {
        return "Studente :" + nome + "" + cognome;
    }
}
