package gioco;

import java.text.NumberFormat;
import java.util.Locale;

public class Gioco {

    public String nome;
    public String genere;
    public double prezzo;

    // Metodo Costruttore (Non ha tipo di ritorno)
    public Gioco(String nome, String genere, double prezzo) {

        this.nome = nome;
        this.genere = genere;
        this.prezzo = prezzo;
    }

    @Override
    public String toString() {

        NumberFormat nf = NumberFormat.getCurrencyInstance(new Locale("it", "IT"));
        String costo = nf.format(prezzo);

        return "Gioco [nome=" + nome +
                ", genere=" + genere +
                ", costo=" + costo + "]";
    }

}
