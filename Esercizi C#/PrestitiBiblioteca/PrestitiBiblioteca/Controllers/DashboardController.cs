using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Mvc;

namespace PrestitiBiblioteca.Controllers
{
    public class DashboardController : Controller
    {
        // GET: Dashboard
        // Administrator
        public ActionResult Index()
        {
            return View();
        }
        
        // Students
        public ActionResult Studente()
        {
            return View();
        }
    }
}