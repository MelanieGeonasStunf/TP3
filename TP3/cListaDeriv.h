#pragma once
#include "cListaT.h"
#include "Alquiler.h";
#include "Automovil.h"
#include "Motocicleta.h"
#include "Camioneta.h"
#include "Trafic.h"
//template<class T>
class cListaDeriv :
    protected cListaT<Alquiler>
{
public:
    cListaDeriv(unsigned int TAM=NMAX);
    ~cListaDeriv();
   void OrdenarAlquileres(int vehiculoimprimir);
};
