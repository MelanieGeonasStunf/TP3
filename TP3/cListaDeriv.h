#pragma once
#include "cListaT.h"
template <class T>
class cListaDeriv :
    public cListaT<class T>
{
    cListaDeriv(unsigned int TAM) : cListaT<class T>(TAM)
    {};


};

