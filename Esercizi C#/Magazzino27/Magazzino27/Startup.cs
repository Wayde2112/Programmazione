using Microsoft.Owin;
using Owin;

[assembly: OwinStartupAttribute(typeof(Magazzino27.Startup))]
namespace Magazzino27
{
    public partial class Startup {
        public void Configuration(IAppBuilder app) {
            ConfigureAuth(app);
        }
    }
}
