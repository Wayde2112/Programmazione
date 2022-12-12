using System;
using System.Collections.Generic;
using System.Data;
using System.Data.SqlClient;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AccessoDatabase
{
    class DAL
    {
        // Data Access Layer

        /*
            Creo metodi per fare operazione verso il DB
        */
        private SqlConnectionStringBuilder connection;

        public DAL()
        {
            // Parametri di accesso al DB
            connection = new SqlConnectionStringBuilder();
            connection.DataSource = "localhost"; // Nome istanza
            connection.UserID = "cloud";
            connection.Password = "Its-2022";
            connection.InitialCatalog = "Istat";
        }

        public List<RipartizioneGeografica> Elenco()
        {
            var lista = new List<RipartizioneGeografica>();

            using (SqlConnection sqlConnection = new SqlConnection())
            {
                // Accesso al DB MS SQL Server
                sqlConnection.ConnectionString = connection.ConnectionString;
                sqlConnection.Open(); // Attiva la connessione al DB
                Console.WriteLine("Accesso al DB SQL Server effettuato con successo!");

                // Operazione verso il DB
                using (SqlCommand sqlCommand = new SqlCommand())
                {

                    string sql = "Select * from RipartizioneGeografica";
                    sqlCommand.Connection = sqlConnection; // Connessione per il dialogo con SQL Server
                    sqlCommand.CommandText = sql;
                    sqlCommand.CommandType = CommandType.Text; // Testo della query

                    using (SqlDataReader sdr = sqlCommand.ExecuteReader())
                    {

                        while (sdr.Read())
                            lista.Add(new RipartizioneGeografica { Id = sdr.GetInt32(0), Denominazione = sdr.GetString(1)});

                    }

                }

            }

            return lista;

            Console.ReadLine();
        }
        public RipartizioneGeografica Dettaglio(int id)
        {
            RipartizioneGeografica rg = null;

            using (SqlConnection sqlConnection = new SqlConnection())
            {
                // Accesso al DB MS SQL Server
                sqlConnection.ConnectionString = connection.ConnectionString;
                sqlConnection.Open(); // Attiva la connessione al DB

                // Operazione verso il DB
                using (SqlCommand sqlCommand = new SqlCommand())
                {

                    string sql = "Select * " +
                                 "from RipartizioneGeografica" +
                                 "where id = @Id";
                    sqlCommand.Connection = sqlConnection; // Connessione per il dialogo con SQL Server
                    sqlCommand.CommandText = sql;
                    sqlCommand.CommandType = CommandType.Text; // Testo della query

                    sqlCommand.Parameters.Add("@Id", SqlDbType.Int).Value = id;
                    sqlCommand.CreateParameter();

                    using (SqlDataReader sdr = sqlCommand.ExecuteReader())
                    {

                        while (sdr.Read())
                            rg = new RipartizioneGeografica { Id = sdr.GetInt32(0), Denominazione = sdr.GetString(1) };

                    }

                }

            }

            return rg;
        }

        public bool NuovaRipartizioneGeografica(int id, string denominazione)
        {
            int rows = 0;
            // Inserire una nuova Ripartizione Geografica
            using (SqlConnection sqlConnection = new SqlConnection())
            {

                sqlConnection.ConnectionString = connection.ConnectionString;
                sqlConnection.Open(); // Attiva la connessione al DB

                // Operazione verso il DB
                using (SqlCommand sqlCommand = new SqlCommand())
                {

                    string sql = "Insert into RipartizioneGeografica(Id, Denominazione) " +
                                 "values(@Id, @Denominazione)";
                    sqlCommand.Connection = sqlConnection; // Connessione per il dialogo con SQL Server
                    sqlCommand.CommandText = sql;
                    sqlCommand.CommandType = CommandType.Text; // Testo della query

                    rows = sqlCommand.ExecuteNonQuery();

                }

            }
            
            return rows == 1;
        }

        public bool ModificaRipartizioneGeografica(int id, string denominazione)
        {
            int rows = 0;
            // Inserire una nuova Ripartizione Geografica
            using (SqlConnection sqlConnection = new SqlConnection())
            {

                sqlConnection.ConnectionString = connection.ConnectionString;
                sqlConnection.Open(); // Attiva la connessione al DB

                // Operazione verso il DB
                using (SqlCommand sqlCommand = new SqlCommand())
                {

                    string sql = "Update RipartizioneGeografica " +
                                 "set denominazione = @Denominazione " +
                                 "where id = @Id";
                    sqlCommand.Connection = sqlConnection; // Connessione per il dialogo con SQL Server
                    sqlCommand.CommandText = sql;
                    sqlCommand.CommandType = CommandType.Text; // Testo della query

                    // Gestione parametri
                    sqlCommand.Parameters.Add("@Denominazione", SqlDbType.VarChar, 50).Value = denominazione;
                    sqlCommand.Parameters.Add("@Id", SqlDbType.Int).Value = id;
                    sqlCommand.CreateParameter();

                    // Esecuzione della query
                    rows = sqlCommand.ExecuteNonQuery();

                }

            }

            return rows == 1;
        }

        public bool EliminaRipartizioneGeografica(int id)
        {
            int rows = 0;
            // Inserire una nuova Ripartizione Geografica
            using (SqlConnection sqlConnection = new SqlConnection())
            {

                sqlConnection.ConnectionString = connection.ConnectionString;
                sqlConnection.Open(); // Attiva la connessione al DB

                // Operazione verso il DB
                using (SqlCommand sqlCommand = new SqlCommand())
                {

                    string sql = "Delete from RipartizioneGeografica " +
                                 "where id = @Id";
                    sqlCommand.Connection = sqlConnection; // Connessione per il dialogo con SQL Server
                    sqlCommand.CommandText = sql;
                    sqlCommand.CommandType = CommandType.Text; // Testo della query

                    // Gestione parametri
                    sqlCommand.Parameters.Add("@Id", SqlDbType.Int).Value = id;
                    sqlCommand.CreateParameter();

                    // Esecuzione della query
                    rows = sqlCommand.ExecuteNonQuery();

                }

            }

            return rows == 1;
        }
    }
}
