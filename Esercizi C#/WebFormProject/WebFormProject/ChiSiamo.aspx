<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="ChiSiamo.aspx.cs" Inherits="WebFormProject.ChiSiamo" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
<meta http-equiv="Content-Type" content="text/html; charset=utf-8"/>
    <title>Chi Siamo</title>
    <link href="Style.css" rel="stylesheet" />
</head>
<body>
    <form id="form1" runat="server">
        <div>
           <uc1:NavBar runat="server" id="NavBar" />
            <h1>Chi siamo</h1>

            <p>
                Testo di "Chi siamo"
            </p>

            <asp:Image ID="Image1" runat="server" ImageUrl/>

        </div>
    </form>
</body>
</html>
