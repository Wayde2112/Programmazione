/*
    Si vuole creare un elenco di libri.

    Di un libro si conoscono i seguenti dati: isbn
                                              autore
                                              editore
                                              numero di pagine
                                              anno di pubblicazione
                                              prezzo

    Di un autore si conosce il nome e cognome,
                               data di nascita,
                               luogo di nascita, 
                               data di morte, 

    Di un editore di consosce la rag sociale,
                              l'indirizzo, 
                              una email, 
                              un sito web, 
                              il telefono

    Si ricorda che l'indirizzo è composto da via
                                             cap
                                             città
                                             provincia
*/

using System;

namespace Biblioteca
{
    class Program
    {
        static void Main(string[] args)
        {
            DateTime data1 = new DateTime(1956, 3, 25);
            DateTime data2 = new DateTime(2021, 10, 13);

            var a1 = new Autore { Nome = "Antonio",
                Cognome = "Ginostra",
                DataNascita = data1,
                LuogoNascita = "Genova",
                DataMorte = data2,
                LuogoMorte = "Ventimiglia" };

            var a2 = new Autore() { Nome = "Laura", 
                Cognome = "Mingolla", 
                DataNascita = new DateTime(1976, 5, 3), 
                LuogoNascita = "Torino" };

            Autore[] autori = { a1, a2 };

            var e1 = new Editore { RagioneSociale = "Publica Testi Srl" };
            var e2 = new Editore { RagioneSociale = "Hoepli", 
                Email = "info@hoepli.it", 
                SitoWeb = "https://www.hoepli.it/", 
                Telefono = "+39 02864871", 
                Indirizzo = new Indirizzo { Via = "Via dei Platani, 10", 
                    Cap = "12125", 
                    Citta = "Milano", 
                    Provincia = "MI" } };

            var l1 = new Libro { Isbn = "978-99999-56-123", 
                Titolo = "Linguaggio C# 10", 
                Autori = autori, 
                Editore = e1, 
                Prezzo = 16.99, 
                Pagine = 200, 
                AnnoPubblicazione = 2020 };

            l1.StampaDettaglio();
        }
    }
    
}
