#pragma once
#include "cListaT.h"
#include "Alquiler.h";
#include "Motocicleta.h"
//template<class T>
class cListaDeriv :
    public cListaT<Alquiler>
{
    cListaDeriv();
    ~cListaDeriv();
    template<class T>
    T** OrdenarAlquileres();
};
