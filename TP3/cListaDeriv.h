#pragma once
#include "cListaT.h"
#include "Alquiler.h";
#include "Motocicleta.h"
class cListaDeriv :
    public cListaT<Alquiler>
{
    cListaDeriv();
    ~cListaDeriv();
    Alquiler** OrdenarAlquileres();




};
