#pragma once
#include "Vehiculo.h"
#include "Librerias.h"

class Trafic :
    protected Vehiculo
{
    int silladeseguridad;
    int asientorebatible;
    float precioSillaSeg;
    float precioAsiento;

public:
    Trafic(int numeroPatente, string color, int numeroChasis, int numeroPoliza, tm FechaUltMantenimiento, float precioDia, int capacidad, 
        int silladeseguridad,int asientorebatible,float precioSillaSeg,float precioAsiento);
    ~Trafic();
    virtual void PasosMantenimiento();
    float CalcularTarifa();
};

