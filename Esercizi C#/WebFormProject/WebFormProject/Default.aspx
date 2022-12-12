<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Default.aspx.cs" Inherits="WebFormProject.WebForm1" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
<meta http-equiv="Content-Type" content="text/html; charset=utf-8"/>
    <title>My Web Form Application</title>
    <link href="Style.css" rel="stylesheet" />
</head>
<body>
    <form id="form1" runat="server">
        <div>

            <uc1:NavBar runat="server" id="NavBar" />

            Benvenuto nella mia prima applicazione web form in ASP.NET
            <br />
            <br />
            <asp:Label ID="lblTitolo" runat="server" Text="Titolo della pagina" />
            
            <br />
            <br />
            <asp:Label ID="lbltesto" runat="server" Text="Inserisci una frase"></asp:Label>
            <asp:TextBox ID="txtBoxFrase" runat="server"></asp:TextBox>
            <asp:Button ID="send" runat="server" Text="Invia" OnClick="send_Click" OnClientClick="var flag = this.value; alert('Hai cliccato sul pulsante ' + ' Invia');" />
            <br />
            <br />
            <asp:Label ID="lblRisultato" runat="server"></asp:Label>
        </div>
    </form>
</body>
</html>
