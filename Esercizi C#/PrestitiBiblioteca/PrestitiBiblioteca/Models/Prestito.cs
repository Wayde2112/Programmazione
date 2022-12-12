//------------------------------------------------------------------------------
// <auto-generated>
//     Codice generato da un modello.
//
//     Le modifiche manuali a questo file potrebbero causare un comportamento imprevisto dell'applicazione.
//     Se il codice viene rigenerato, le modifiche manuali al file verranno sovrascritte.
// </auto-generated>
//------------------------------------------------------------------------------

namespace PrestitiBiblioteca.Models
{
    using System;
    using System.Collections.Generic;
    using System.ComponentModel.DataAnnotations;

    public partial class Prestito
    {
        [Display(Name = "Titolo libro")]
        public int IdLibro { get; set; }

        [Display(Name = "Matricola Studente")]
        public int Matricola { get; set; }
        public System.DateTime DataPrestito { get; set; }

        [DisplayFormat(DataFormatString = "{0:dd/MM/yyyy")]
        public Nullable<System.DateTime> DataScadenza { get; set; }
        public Nullable<System.DateTime> DataRestituzione { get; set; }
    
        public virtual Libro Libro { get; set; }
        public virtual Studente Studente { get; set; }
    }
}