<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Contatti.aspx.cs" Inherits="WebFormProject.Contatti" %>

<%@ Register Src="~/NavBar.ascx" TagPrefix="uc1" TagName="NavBar" %>


<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
<meta http-equiv="Content-Type" content="text/html; charset=utf-8"/>
    <title>Contatti</title>
    <link href="Style.css" rel="stylesheet" />
</head>
<body>
    <form id="form1" runat="server">
        <div>
            <uc1:NavBar runat="server" id="NavBar" />
        </div>
    </form>
</body>
</html>
