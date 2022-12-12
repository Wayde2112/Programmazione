<%@ Page Title="Elenco Categorie" Language="C#" MasterPageFile="~/Site.Master" AutoEventWireup="true" CodeBehind="Categorie.aspx.cs" Inherits="Magazzino27.Categorie" %>
<asp:Content ID="Content1" ContentPlaceHolderID="MainContent" runat="server">
    <h2><%: Title %></h2>

    <asp:GridView ID="gvCategorie" runat="server" AllowPaging="True" AllowSorting="True" DataSourceID="sdsCategorie" PageSize="2" AutoGenerateColumns="False" CellPadding="4" DataKeyNames="Id" ForeColor="#333333" GridLines="None" Caption="GridView" CaptionAlign="Left">
        <AlternatingRowStyle BackColor="White" ForeColor="#284775" />
        <Columns>
            <asp:BoundField DataField="Id" HeaderText="Id" InsertVisible="False" ReadOnly="True" SortExpression="Id" />
            <asp:BoundField DataField="Nome" HeaderText="Nome" SortExpression="Nome" />
            <asp:BoundField DataField="Descrizione" HeaderText="Descrizione" SortExpression="Descrizione" />
            <asp:BoundField DataField="Immagine" HeaderText="Immagine" SortExpression="Immagine" />
        </Columns>
        <EditRowStyle BackColor="#999999" />
        <FooterStyle BackColor="#5D7B9D" Font-Bold="True" ForeColor="White" />
        <HeaderStyle BackColor="#5D7B9D" Font-Bold="True" ForeColor="White" />
        <PagerStyle HorizontalAlign="Center" BackColor="#284775" ForeColor="White" />
        <RowStyle BackColor="#F7F6F3" ForeColor="#333333" />
        <SelectedRowStyle BackColor="#E2DED6" Font-Bold="True" ForeColor="#333333" />
        <SortedAscendingCellStyle BackColor="#E9E7E2" />
        <SortedAscendingHeaderStyle BackColor="#506C8C" />
        <SortedDescendingCellStyle BackColor="#FFFDF8" />
        <SortedDescendingHeaderStyle BackColor="#6F8DAE" />
    </asp:GridView>

    <br />

    <asp:DataList ID="dlCategorie" runat="server" CellPadding="4" DataKeyField="Id" DataSourceID="sdsCategorie" ForeColor="#333333" RepeatLayout="Flow" Caption="DataList" CaptionAlign="Top">
        <AlternatingItemStyle BackColor="White" ForeColor="#284775" />
        <FooterStyle BackColor="#5D7B9D" Font-Bold="True" ForeColor="White" />
        <HeaderStyle BackColor="#5D7B9D" Font-Bold="True" ForeColor="White" />
        <ItemStyle BackColor="#F7F6F3" ForeColor="#333333" />
        <ItemTemplate>
            Id:
            <asp:Label ID="IdLabel" runat="server" Text='<%# Eval("Id") %>' />
            <br />
            Nome:
            <asp:Label ID="NomeLabel" runat="server" Text='<%# Eval("Nome") %>' />
            <br />
            Descrizione:
            <asp:Label ID="DescrizioneLabel" runat="server" Text='<%# Eval("Descrizione") %>' />
            <br />
            Immagine:
            <asp:Label ID="ImmagineLabel" runat="server" Text='<%# Eval("Immagine") %>' />
            <br />
            <br />
        </ItemTemplate>
        <SelectedItemStyle BackColor="#E2DED6" Font-Bold="True" ForeColor="#333333" />
    </asp:DataList>

    <br />

    <asp:ListView ID="lvCategorie" runat="server" DataKeyNames="Id" DataSourceID="sdsCategorie" GroupItemCount="3">
        <AlternatingItemTemplate>
            <td runat="server" style="background-color:#FFF8DC;">Id:
                <asp:Label ID="IdLabel" runat="server" Text='<%# Eval("Id") %>' />
                <br />Nome:
                <asp:Label ID="NomeLabel" runat="server" Text='<%# Eval("Nome") %>' />
                <br />Descrizione:
                <asp:Label ID="DescrizioneLabel" runat="server" Text='<%# Eval("Descrizione") %>' />
                <br />Immagine:
                <asp:Label ID="ImmagineLabel" runat="server" Text='<%# Eval("Immagine") %>' />
                <br /></td>
        </AlternatingItemTemplate>
        <EditItemTemplate>
            <td runat="server" style="background-color:#008A8C;color: #FFFFFF;">Id:
                <asp:Label ID="IdLabel1" runat="server" Text='<%# Eval("Id") %>' />
                <br />Nome:
                <asp:TextBox ID="NomeTextBox" runat="server" Text='<%# Bind("Nome") %>' />
                <br />Descrizione:
                <asp:TextBox ID="DescrizioneTextBox" runat="server" Text='<%# Bind("Descrizione") %>' />
                <br />Immagine:
                <asp:TextBox ID="ImmagineTextBox" runat="server" Text='<%# Bind("Immagine") %>' />
                <br />
                <asp:Button ID="UpdateButton" runat="server" CommandName="Update" Text="Aggiorna" />
                <br />
                <asp:Button ID="CancelButton" runat="server" CommandName="Cancel" Text="Annulla" />
                <br /></td>
        </EditItemTemplate>
        <EmptyDataTemplate>
            <table runat="server" style="background-color: #FFFFFF;border-collapse: collapse;border-color: #999999;border-style:none;border-width:1px;">
                <tr>
                    <td>Non è stato restituito alcun dato.</td>
                </tr>
            </table>
        </EmptyDataTemplate>
        <EmptyItemTemplate>
<td runat="server" />
        </EmptyItemTemplate>
        <GroupTemplate>
            <tr id="itemPlaceholderContainer" runat="server">
                <td id="itemPlaceholder" runat="server"></td>
            </tr>
        </GroupTemplate>
        <InsertItemTemplate>
            <td runat="server" style="">Nome:
                <asp:TextBox ID="NomeTextBox" runat="server" Text='<%# Bind("Nome") %>' />
                <br />Descrizione:
                <asp:TextBox ID="DescrizioneTextBox" runat="server" Text='<%# Bind("Descrizione") %>' />
                <br />Immagine:
                <asp:TextBox ID="ImmagineTextBox" runat="server" Text='<%# Bind("Immagine") %>' />
                <br />
                <asp:Button ID="InsertButton" runat="server" CommandName="Insert" Text="Inserisci" />
                <br />
                <asp:Button ID="CancelButton" runat="server" CommandName="Cancel" Text="Cancella" />
                <br /></td>
        </InsertItemTemplate>
        <ItemTemplate>
            <td runat="server" style="background-color:#DCDCDC;color: #000000;">Id:
                <asp:Label ID="IdLabel" runat="server" Text='<%# Eval("Id") %>' />
                <br />Nome:
                <asp:Label ID="NomeLabel" runat="server" Text='<%# Eval("Nome") %>' />
                <br />Descrizione:
                <asp:Label ID="DescrizioneLabel" runat="server" Text='<%# Eval("Descrizione") %>' />
                <br />Immagine:
                <asp:Label ID="ImmagineLabel" runat="server" Text='<%# Eval("Immagine") %>' />
                <br /></td>
        </ItemTemplate>
        <LayoutTemplate>
            <table runat="server">
                <tr runat="server">
                    <td runat="server">
                        <table id="groupPlaceholderContainer" runat="server" border="1" style="background-color: #FFFFFF;border-collapse: collapse;border-color: #999999;border-style:none;border-width:1px;font-family: Verdana, Arial, Helvetica, sans-serif;">
                            <tr id="groupPlaceholder" runat="server">
                            </tr>
                        </table>
                    </td>
                </tr>
                <tr runat="server">
                    <td runat="server" style="text-align: center;background-color: #CCCCCC;font-family: Verdana, Arial, Helvetica, sans-serif;color: #000000;">
                        <asp:DataPager ID="DataPager1" runat="server" PageSize="12">
                            <Fields>
                                <asp:NextPreviousPagerField ButtonType="Button" ShowFirstPageButton="True" ShowLastPageButton="True" />
                            </Fields>
                        </asp:DataPager>
                    </td>
                </tr>
            </table>
        </LayoutTemplate>
        <SelectedItemTemplate>
            <td runat="server" style="background-color:#008A8C;font-weight: bold;color: #FFFFFF;">Id:
                <asp:Label ID="IdLabel" runat="server" Text='<%# Eval("Id") %>' />
                <br />Nome:
                <asp:Label ID="NomeLabel" runat="server" Text='<%# Eval("Nome") %>' />
                <br />Descrizione:
                <asp:Label ID="DescrizioneLabel" runat="server" Text='<%# Eval("Descrizione") %>' />
                <br />Immagine:
                <asp:Label ID="ImmagineLabel" runat="server" Text='<%# Eval("Immagine") %>' />
                <br /></td>
        </SelectedItemTemplate>
    </asp:ListView>

    <br />
    <asp:DetailsView ID="dvCategorie" runat="server" Height="50px" Width="125px" AllowPaging="True" AutoGenerateRows="False" Caption="DetailsView" CellPadding="4" DataKeyNames="Id" DataSourceID="sdsCategorie" ForeColor="#333333" GridLines="None">
        <AlternatingRowStyle BackColor="White" ForeColor="#284775" />
        <CommandRowStyle BackColor="#E2DED6" Font-Bold="True" />
        <EditRowStyle BackColor="#999999" />
        <FieldHeaderStyle BackColor="#E9ECF1" Font-Bold="True" />
        <Fields>
            <asp:BoundField DataField="Id" HeaderText="Id" InsertVisible="False" ReadOnly="True" SortExpression="Id" />
            <asp:BoundField DataField="Nome" HeaderText="Nome" SortExpression="Nome" />
            <asp:BoundField DataField="Descrizione" HeaderText="Descrizione" SortExpression="Descrizione" />
            <asp:BoundField DataField="Immagine" HeaderText="Immagine" SortExpression="Immagine" />
        </Fields>
        <FooterStyle BackColor="#5D7B9D" Font-Bold="True" ForeColor="White" />
        <HeaderStyle BackColor="#5D7B9D" Font-Bold="True" ForeColor="White" />
        <PagerStyle BackColor="#284775" ForeColor="White" HorizontalAlign="Center" />
        <RowStyle BackColor="#F7F6F3" ForeColor="#333333" />
    </asp:DetailsView>

    <br />
    <asp:FormView ID="fvCategorie" runat="server" AllowPaging="True" Caption="FormView" CellPadding="4" DataKeyNames="Id" DataSourceID="sdsCategorie" ForeColor="#333333">
        <EditItemTemplate>
            Id:
            <asp:Label ID="IdLabel1" runat="server" Text='<%# Eval("Id") %>' />
            <br />
            Nome:
            <asp:TextBox ID="NomeTextBox" runat="server" Text='<%# Bind("Nome") %>' />
            <br />
            Descrizione:
            <asp:TextBox ID="DescrizioneTextBox" runat="server" Text='<%# Bind("Descrizione") %>' />
            <br />
            Immagine:
            <asp:TextBox ID="ImmagineTextBox" runat="server" Text='<%# Bind("Immagine") %>' />
            <br />
            <asp:LinkButton ID="UpdateButton" runat="server" CausesValidation="True" CommandName="Update" Text="Aggiorna" />
            &nbsp;<asp:LinkButton ID="UpdateCancelButton" runat="server" CausesValidation="False" CommandName="Cancel" Text="Annulla" />
        </EditItemTemplate>
        <EditRowStyle BackColor="#999999" />
        <FooterStyle BackColor="#5D7B9D" Font-Bold="True" ForeColor="White" />
        <HeaderStyle BackColor="#5D7B9D" Font-Bold="True" ForeColor="White" />
        <InsertItemTemplate>
            Nome:
            <asp:TextBox ID="NomeTextBox" runat="server" Text='<%# Bind("Nome") %>' />
            <br />
            Descrizione:
            <asp:TextBox ID="DescrizioneTextBox" runat="server" Text='<%# Bind("Descrizione") %>' />
            <br />
            Immagine:
            <asp:TextBox ID="ImmagineTextBox" runat="server" Text='<%# Bind("Immagine") %>' />
            <br />
            <asp:LinkButton ID="InsertButton" runat="server" CausesValidation="True" CommandName="Insert" Text="Inserisci" />
            &nbsp;<asp:LinkButton ID="InsertCancelButton" runat="server" CausesValidation="False" CommandName="Cancel" Text="Annulla" />
        </InsertItemTemplate>
        <ItemTemplate>
            Id:
            <asp:Label ID="IdLabel" runat="server" Text='<%# Eval("Id") %>' />
            <br />
            Nome:
            <asp:Label ID="NomeLabel" runat="server" Text='<%# Bind("Nome") %>' />
            <br />
            Descrizione:
            <asp:Label ID="DescrizioneLabel" runat="server" Text='<%# Bind("Descrizione") %>' />
            <br />
            Immagine:
            <asp:Label ID="ImmagineLabel" runat="server" Text='<%# Bind("Immagine") %>' />
            <br />
        </ItemTemplate>
        <PagerStyle BackColor="#284775" ForeColor="White" HorizontalAlign="Center" />
        <RowStyle BackColor="#F7F6F3" ForeColor="#333333" />
    </asp:FormView>

    <br />
    <asp:DropDownList ID="dblCategorie" runat="server" AutoPostBack="True" DataSourceID="sdsCategorie" DataTextField="Nome" DataValueField="Id">
    </asp:DropDownList>
    <br />
    <br />

    <asp:CheckBoxList ID="cblCategorie" runat="server" DataSourceID="sdsCategorie" DataTextField="Nome" DataValueField="Id">
    </asp:CheckBoxList>
    <br />

    <asp:RadioButtonList ID="rblCategorie" runat="server" DataSourceID="sdsCategorie" DataTextField="Nome" DataValueField="Id">
    </asp:RadioButtonList>

    <br />

    <asp:SqlDataSource ID="sdsCategorie" runat="server" 
        ConnectionString="<%$ ConnectionStrings:DefaultConnection %>" 
        SelectCommand="SELECT * FROM [Categoria] ORDER BY [Nome]"></asp:SqlDataSource>

</asp:Content>
