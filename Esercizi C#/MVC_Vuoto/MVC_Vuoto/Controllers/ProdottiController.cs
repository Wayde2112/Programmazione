using Microsoft.AspNetCore.Mvc;
using MVC_Vuoto.Models;

namespace MVC_Vuoto.Controllers
{
    public class ProdottiController : Controller
    {
        public IActionResult Index()
        {
            return View();
        }
        public IActionResult FormProdotto()
        {
            return View();
        }
        public IActionResult RecuperoProdotti(ProdottoViewModel prodotto)
        {
            return View(prodotto);
        }
    }

}

