using System;
using System.Collections.Generic;
using System.Data;
using System.Data.Entity;
using System.Linq;
using System.Net;
using System.Web;
using System.Web.Mvc;
using PrestitiBiblioteca.Models;

namespace PrestitiBiblioteca.Controllers
{
    public class PrestitiController : Controller
    {
        private PrestitiBibliotecaEntities1 db = new PrestitiBibliotecaEntities1();

        // GET: Prestiti
        public ActionResult Index()
        {
            var prestito = db.Prestito.Include(p => p.Libro).Include(p => p.Studente);
            return View(prestito.ToList());
        }

        // GET: Prestiti/Details/5
        public ActionResult Details(int? id)
        {
            if (id == null)
            {
                return new HttpStatusCodeResult(HttpStatusCode.BadRequest);
            }
            Prestito prestito = db.Prestito.Find(id);
            if (prestito == null)
            {
                return HttpNotFound();
            }
            return View(prestito);
        }

        [Authorize]
        // GET: Prestiti/Create
        public ActionResult Create()
        {
            ViewBag.IdLibro = new SelectList(db.Libro, "Codice", "Autore");
            ViewBag.Matricola = new SelectList(db.Studente, "Matricola", "Nome");
            return View();
        }

        // POST: Prestiti/Create
        // Per la protezione da attacchi di overposting, abilitare le proprietà a cui eseguire il binding. 
        // Per altri dettagli, vedere https://go.microsoft.com/fwlink/?LinkId=317598.
        [HttpPost]
        [ValidateAntiForgeryToken]
        public ActionResult Create([Bind(Include = "IdLibro,Matricola,DataPrestito,DataScadenza,DataRestituzione")] Prestito prestito)
        {
            if (ModelState.IsValid)
            {
                // Modifiche 
                prestito.DataPrestito = DateTime.Now;
                prestito.DataScadenza = DateTime.Now.AddDays(30);
                db.Prestito.Add(prestito);
                db.SaveChanges();
                return RedirectToAction("Index");
            }

            ViewBag.IdLibro = new SelectList(db.Libro, "Codice", "Autore", prestito.IdLibro);
            ViewBag.Matricola = new SelectList(db.Studente, "Matricola", "Nome", prestito.Matricola);
            return View(prestito);
        }

        [Authorize]
        // GET: Prestiti/Edit/5
        public ActionResult Edit(int? id)
        {
            if (id == null)
            {
                return new HttpStatusCodeResult(HttpStatusCode.BadRequest);
            }
            Prestito prestito = db.Prestito.Find(id);
            if (prestito == null)
            {
                return HttpNotFound();
            }
            ViewBag.IdLibro = new SelectList(db.Libro, "Codice", "Autore", prestito.IdLibro);
            ViewBag.Matricola = new SelectList(db.Studente, "Matricola", "Nome", prestito.Matricola);
            return View(prestito);
        }

        // POST: Prestiti/Edit/5
        // Per la protezione da attacchi di overposting, abilitare le proprietà a cui eseguire il binding. 
        // Per altri dettagli, vedere https://go.microsoft.com/fwlink/?LinkId=317598.
        [Authorize]
        [HttpPost]
        [ValidateAntiForgeryToken]
        public ActionResult Edit([Bind(Include = "IdLibro,Matricola,DataPrestito,DataScadenza,DataRestituzione")] Prestito prestito)
        {
            if (ModelState.IsValid)
            {
                db.Entry(prestito).State = EntityState.Modified;
                db.SaveChanges();
                return RedirectToAction("Index");
            }
            ViewBag.IdLibro = new SelectList(db.Libro, "Codice", "Autore", prestito.IdLibro);
            ViewBag.Matricola = new SelectList(db.Studente, "Matricola", "Nome", prestito.Matricola);
            return View(prestito);
        }

        [Authorize]
        // GET: Prestiti/Delete/5
        public ActionResult Delete(int? id)
        {
            if (id == null)
            {
                return new HttpStatusCodeResult(HttpStatusCode.BadRequest);
            }
            Prestito prestito = db.Prestito.Find(id);
            if (prestito == null)
            {
                return HttpNotFound();
            }
            return View(prestito);
        }

        [Authorize]
        // POST: Prestiti/Delete/5
        [HttpPost, ActionName("Delete")]
        [ValidateAntiForgeryToken]
        public ActionResult DeleteConfirmed(int id)
        {
            Prestito prestito = db.Prestito.Find(id);
            db.Prestito.Remove(prestito);
            db.SaveChanges();
            return RedirectToAction("Index");
        }

        protected override void Dispose(bool disposing)
        {
            if (disposing)
            {
                db.Dispose();
            }
            base.Dispose(disposing);
        }
    }
}
