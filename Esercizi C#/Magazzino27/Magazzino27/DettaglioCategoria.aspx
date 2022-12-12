<%@ Page Title="Dettaglio Categoria" Language="C#" MasterPageFile="~/Site.Master" AutoEventWireup="true" CodeBehind="DettaglioCategoria.aspx.cs" Inherits="Magazzino27.DettaglioCategoria" %>
<asp:Content ID="Content1" ContentPlaceHolderID="MainContent" runat="server">

    <h2><%: Title %></h2>

    <p>Visualizzo la categoria di cui ho recuperato l'id da querystring</p>

    <asp:DetailsView ID="dvDettaglioCategoria" runat="server" Height="50px" Width="125px" AutoGenerateRows="False" Caption="Dettaglio Categoria" CellPadding="4" DataKeyNames="Id" DataSourceID="sdsDettaglioCategoria" ForeColor="#333333" GridLines="None">
        <AlternatingRowStyle BackColor="White" ForeColor="#284775" />
        <CommandRowStyle BackColor="#E2DED6" Font-Bold="True" />
        <EditRowStyle BackColor="#999999" />
        <FieldHeaderStyle BackColor="#E9ECF1" Font-Bold="True" />
        <Fields>
            <asp:BoundField DataField="Id" HeaderText="Id" InsertVisible="False" ReadOnly="True" SortExpression="Id" Visible="False" />
            <asp:BoundField DataField="Immagine" HeaderText="Immagine" SortExpression="Immagine" />
            <asp:BoundField DataField="Nome" HeaderText="Nome" SortExpression="Nome" />
            <asp:BoundField DataField="Descrizione" HeaderText="Descrizione" SortExpression="Descrizione" />
        </Fields>
        <FooterStyle BackColor="#5D7B9D" Font-Bold="True" ForeColor="White" />
        <HeaderStyle BackColor="#5D7B9D" Font-Bold="True" ForeColor="White" />
        <PagerStyle BackColor="#284775" ForeColor="White" HorizontalAlign="Center" />
        <RowStyle BackColor="#F7F6F3" ForeColor="#333333" />
    </asp:DetailsView>

    <asp:SqlDataSource ID="sdsDettaglioCategoria" runat="server" 
        ConnectionString="<%$ ConnectionStrings:DefaultConnection %>" 
        SelectCommand="SELECT * FROM [Categoria] WHERE ([Id] = @Id)">
        <SelectParameters>
            <asp:QueryStringParameter DefaultValue="" Name="Id" QueryStringField="id" Type="Int32" />
        </SelectParameters>
    </asp:SqlDataSource>

</asp:Content>
