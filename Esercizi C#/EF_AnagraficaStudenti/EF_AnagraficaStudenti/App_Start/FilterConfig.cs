﻿using System.Web;
using System.Web.Mvc;

namespace EF_AnagraficaStudenti
{
    public class FilterConfig
    {
        public static void RegisterGlobalFilters(GlobalFilterCollection filters)
        {
            filters.Add(new HandleErrorAttribute());
        }
    }
}