using GamCollection.Models;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Mvc;

namespace GamCollection.Controllers
{
    public class AutoriController : Controller
    {
        private CollezioniContext db = new CollezioniContext();
        // GET: Autori
        public ActionResult Index()
        {
            var autori = db.Autori.ToList();
            return View(autori);
        }
    }
}