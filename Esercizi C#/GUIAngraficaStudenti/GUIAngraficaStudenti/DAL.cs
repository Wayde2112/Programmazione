using System;
using System.Collections.Generic;
using System.Configuration;
using System.Data;
using System.Data.SqlClient;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace GUIAngraficaStudenti
{
    class DAL
    {
        // Accesso al DB
        private SqlConnectionStringBuilder connection;

        public DAL()
        {
            // Parametri di accesso al DB
            connection = new SqlConnectionStringBuilder();
            //connection.DataSource = "localhost"; // Nome istanza
            connection.DataSource = ConfigurationManager.AppSettings.Get("db_host"); // Nome istanza
            //connection.UserID = "cloud";
            connection.UserID = ConfigurationManager.AppSettings.Get("db_user");
            //connection.Password = "Its-2022";
            connection.Password = ConfigurationManager.AppSettings.Get("db_password");
            //connection.InitialCatalog = "AnagraficaStudenti";
            connection.InitialCatalog = ConfigurationManager.AppSettings.Get("db_name");
        }

        // Elenco studenti
        public List<Studente> Elenco()
        {
            var lista = new List<Studente>();

            using (SqlConnection sqlConnection = new SqlConnection())
            {
                // Accesso al DB MS SQL Server
                sqlConnection.ConnectionString = connection.ConnectionString;
                sqlConnection.Open(); // Attiva la connessione al DB
                Console.WriteLine("Accesso al DB SQL Server effettuato con successo!");

                // Operazione verso il DB
                using (SqlCommand sqlCommand = new SqlCommand())
                {

                    string sql = "Select * from Studente";
                    sqlCommand.Connection = sqlConnection; // Connessione per il dialogo con SQL Server
                    sqlCommand.CommandText = sql;
                    sqlCommand.CommandType = CommandType.Text; // Testo della query

                    using (SqlDataReader sdr = sqlCommand.ExecuteReader())
                    {

                        while (sdr.Read())
                            lista.Add(new Studente
                            {
                                Matricola = sdr.GetInt32("Matricola"),
                                Nome = sdr.GetString("Nome"),
                                Cognome = sdr.GetString("Cognome"),
                                Email = sdr.GetString("Email"),
                                Classe = sdr.GetString("Classe")
                            });
                    }
                }
            }

            return lista;
        }

        public Studente Dettaglio(int matricola)
        {
            Studente s = null;

            using (SqlConnection sqlConnection = new SqlConnection())
            {
                // Accesso al DB MS SQL Server
                sqlConnection.ConnectionString = connection.ConnectionString;
                sqlConnection.Open(); // Attiva la connessione al DB

                // Operazione verso il DB
                using (SqlCommand sqlCommand = new SqlCommand())
                {

                    string sql = "Select * " +
                                 "from Studente" +
                                 "where Matricola = @Matricola";
                    sqlCommand.Connection = sqlConnection; // Connessione per il dialogo con SQL Server
                    sqlCommand.CommandText = sql;
                    sqlCommand.CommandType = CommandType.Text; // Testo della query

                    sqlCommand.Parameters.Add("@Matricola", SqlDbType.Int).Value = matricola;
                    sqlCommand.CreateParameter();

                    using (SqlDataReader sdr = sqlCommand.ExecuteReader())
                    {
                        while (sdr.Read())
                            s = new Studente
                            {
                                Matricola = sdr.GetInt32("Matricola"),
                                Nome = sdr.GetString("Nome"),
                                Cognome = sdr.GetString("Cognome"),
                                Email = sdr.GetString("Email"),
                                Classe = sdr.GetString("Classe")
                            };
                    }
                }
            }
            return s;
        }

        // Nuovo Studente
        public bool Nuovo(Studente studente)
        {
            int rows = 0;

            // Inserire un nuovo Studente
            using (SqlConnection sqlConnection = new SqlConnection())
            {

                sqlConnection.ConnectionString = connection.ConnectionString;
                sqlConnection.Open(); // Attiva la connessione al DB

                // Operazione verso il DB
                using (SqlCommand sqlCommand = new SqlCommand())
                {
                    string sql = "Insert into Studente(Matricola, Nome, Cognome, Email, Classe) " +
                                 "values(@Matricola, @Nome, @Cognome, @Email, @Classe)";
                    sqlCommand.Connection = sqlConnection; // Connessione per il dialogo con SQL Server
                    sqlCommand.CommandText = sql;
                    sqlCommand.CommandType = CommandType.Text; // Testo della query

                    sqlCommand.Parameters.Add("@Matrcola", SqlDbType.Int).Value = studente.Matricola;
                    sqlCommand.Parameters.Add("@Nome", SqlDbType.NVarChar, 50).Value = studente.Nome;
                    sqlCommand.Parameters.Add("@Cognome", SqlDbType.NVarChar, 50).Value = studente.Cognome;
                    sqlCommand.Parameters.Add("@Email", SqlDbType.NVarChar, 50).Value = studente.Email;
                    sqlCommand.Parameters.Add("@Classe", SqlDbType.NVarChar, 50).Value = studente.Classe;
                    sqlCommand.CreateParameter();

                    rows = sqlCommand.ExecuteNonQuery();
                }
            }
            return rows == 1;
        }

        // Modifica Studente
        public bool Modifica(Studente studente)
        {
            int rows = 0;

            // Modificare uno studente
            using (SqlConnection sqlConnection = new SqlConnection())
            {
                sqlConnection.ConnectionString = connection.ConnectionString;
                sqlConnection.Open(); // Attiva la connessione al DB

                // Operazione verso il DB
                using (SqlCommand sqlCommand = new SqlCommand())
                {
                    string sql = "Update Studente " +
                                 "set nome = @Nome, cognome = @Cognome, email = @Email, classe = @Classe" +
                                 "where matricola = @Matricola";
                    sqlCommand.Connection = sqlConnection; // Connessione per il dialogo con SQL Server
                    sqlCommand.CommandText = sql;
                    sqlCommand.CommandType = CommandType.Text; // Testo della query

                    // Gestione parametri
                    sqlCommand.Parameters.Add("@Matrcola", SqlDbType.Int).Value = studente.Matricola;
                    sqlCommand.Parameters.Add("@Nome", SqlDbType.NVarChar, 50).Value = studente.Nome;
                    sqlCommand.Parameters.Add("@Cognome", SqlDbType.NVarChar, 50).Value = studente.Cognome;
                    sqlCommand.Parameters.Add("@Email", SqlDbType.NVarChar, 50).Value = studente.Email;
                    sqlCommand.Parameters.Add("@Classe", SqlDbType.NVarChar, 50).Value = studente.Classe;
                    sqlCommand.CreateParameter();

                    // Esecuzione della query
                    rows = sqlCommand.ExecuteNonQuery();
                }
            }
            return rows == 1;
        }

        // Elimina Studente
        public bool Elimina(int matricola)
        {
            int rows = 0;

            // Elimina uno studente
            using (SqlConnection sqlConnection = new SqlConnection())
            {
                sqlConnection.ConnectionString = connection.ConnectionString;
                sqlConnection.Open(); // Attiva la connessione al DB

                // Operazione verso il DB
                using (SqlCommand sqlCommand = new SqlCommand())
                {
                    string sql = "Delete from Studente " +
                                 "where matricola = @Matricola";
                    sqlCommand.Connection = sqlConnection; // Connessione per il dialogo con SQL Server
                    sqlCommand.CommandText = sql;
                    sqlCommand.CommandType = CommandType.Text; // Testo della query

                    // Gestione parametri
                    sqlCommand.Parameters.Add("@Matricola", SqlDbType.Int).Value = matricola;
                    sqlCommand.CreateParameter();

                    // Esecuzione della query
                    rows = sqlCommand.ExecuteNonQuery();
                }
            }
            return rows == 1;
        }

        // Cerca Studente per classe

        // Cerca per matricola
    }
}
