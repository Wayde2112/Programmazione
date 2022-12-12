using Microsoft.Owin;
using Owin;

[assembly: OwinStartupAttribute(typeof(EF_AnagraficaStudenti.Startup))]
namespace EF_AnagraficaStudenti
{
    public partial class Startup
    {
        public void Configuration(IAppBuilder app)
        {
            ConfigureAuth(app);
        }
    }
}
