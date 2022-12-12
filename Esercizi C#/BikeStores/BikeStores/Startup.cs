using Microsoft.Owin;
using Owin;

[assembly: OwinStartupAttribute(typeof(BikeStores.Startup))]
namespace BikeStores
{
    public partial class Startup
    {
        public void Configuration(IAppBuilder app)
        {
            ConfigureAuth(app);
        }
    }
}
