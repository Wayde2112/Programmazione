using Microsoft.Owin;
using Owin;

[assembly: OwinStartupAttribute(typeof(PrestitiBiblioteca.Startup))]
namespace PrestitiBiblioteca
{
    public partial class Startup
    {
        public void Configuration(IAppBuilder app)
        {
            ConfigureAuth(app);
        }
    }
}
