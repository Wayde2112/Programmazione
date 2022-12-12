<%@ Control Language="C#" AutoEventWireup="true" CodeBehind="NavBar.ascx.cs" Inherits="WebFormProject.WebUserControl1" %>

<div>
    <asp:HyperLink ID="lnkHome" runat="server" NavigateUrl="~/Default.aspx">Home</asp:HyperLink>
        &nbsp;&nbsp | &nbsp;&nbsp
    <asp:HyperLink ID="lnkChiSiamo" runat="server" NavigateUrl="~/ChiSiamo.aspx">Chi Siamo</asp:HyperLink>
        &nbsp;&nbsp | &nbsp;&nbsp
    <asp:HyperLink ID="lnkDoveSiamo" runat="server" NavigateUrl="~/DoveSiamo.aspx">Dove Siamo</asp:HyperLink>
        &nbsp;&nbsp | &nbsp;&nbsp
    <asp:HyperLink ID="lnkCatalogo" runat="server" NavigateUrl="~/Catalogo.aspx">Catalogo</asp:HyperLink>
        &nbsp;&nbsp | &nbsp;&nbsp
    <asp:HyperLink ID="lnkContatti" runat="server" NavigateUrl="~/Contatti.aspx">Contatti</asp:HyperLink>
        &nbsp;&nbsp | &nbsp;&nbsp
</div>
