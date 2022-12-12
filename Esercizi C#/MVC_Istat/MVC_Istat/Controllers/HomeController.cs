using Microsoft.AspNetCore.Mvc;
using Microsoft.Extensions.Logging;
using MVC_Istat.Models;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Threading.Tasks;

namespace MVC_Istat.Controllers
{
    public class HomeController : Controller
    {
        private readonly ILogger<HomeController> _logger;

        public HomeController(ILogger<HomeController> logger)
        {
            _logger = logger;
        }

        public IActionResult Index()
        {
            return View();
        }

        public IActionResult ChiSiamo()
        {            
            return View();
        }

        public IActionResult DoveSiamo()
        {
            ViewBag.Titolo = "Dove Siamo nella pagina";
            ViewBag.Data = DateTime.Now;
            ViewData["Autore"] = "Pino dei Palazzi";
            return View();
        }

        public IActionResult Contatto() {

            var contatto = new ContattoViewModel
            {
                Messaggio = "Sezione Contatti: area Messaggio",
                Email = "info@mysite.net",
                Telefono = "0112154789"
            };

            return View(contatto);

        }

        public IActionResult Privacy()
        {
            return View();
        }

        [ResponseCache(Duration = 0, Location = ResponseCacheLocation.None, NoStore = true)]
        public IActionResult Error()
        {
            return View(new ErrorViewModel { RequestId = Activity.Current?.Id ?? HttpContext.TraceIdentifier });
        }

        public IActionResult FormContatto()
        {
            return View();
        }
    }
}
