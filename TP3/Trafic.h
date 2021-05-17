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
    Trafic(int numeroPatente, string color, int numeroChasis, int numeroPoliza, tm FechaUltMantenimiento, float precioDia, int capacidad);

    virtual void PasosMantenimiento();
    float CalcularTarifa();
};

