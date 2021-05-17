#pragma once
#include "Vehiculo.h"
#include "Librerias.h"

class Trafic :
    public Vehiculo
{
    int silladeseguridad;
    int asientorebatible;
    float precioSillaSeg;
    float precioAsiento;

public:
    virtual void PasosMantenimiento();
    float CalcularTarifa();
};

