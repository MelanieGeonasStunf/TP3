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
    Trafic(string numeroPatente, string color, int numeroChasis, int numeroPoliza, float precioDia, int capacidad, 
        int silladeseguridad,int asientorebatible,float precioSillaSeg,float precioAsiento);
    ~Trafic();
    virtual void PasosMantenimiento();
    float CalcularTarifa(int dias);
};

