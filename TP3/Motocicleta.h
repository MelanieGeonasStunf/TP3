#pragma once
#include "Vehiculo.h"
#include "Librerias.h"

class Motocicleta :
    public Vehiculo
{
    int casco;
    float precioOpcional;
    //ponemos precio base como atributo?
public:
    virtual void PasosMantenimiento();
    float CalcularTarifa();
};

