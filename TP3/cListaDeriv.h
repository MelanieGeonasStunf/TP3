#pragma once
#include "cListaT.h"
#include "Alquiler.h";
#include "Automovil.h"
#include "Motocicleta.h"
#include "Camioneta.h"
#include "Trafic.h"
//template<class T>

class cListaDeriv :
    public cListaT<Alquiler>//puedo ver todo lo de alquiler!!
{

public:
    cListaDeriv();
    ~cListaDeriv();
   void ListarAlquileres(int vehiculoimprimir);
   int GananciaAuto();
   int GananciaMoto();
   int GananciaCamioneta();
   int GananciaTrafic();
   int GananciaTotal(int TarifaAuto, int TarifaMoto, int TarifaCam, int TarifaTrafic);
   //int CalcTarif();
};
