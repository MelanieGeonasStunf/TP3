#pragma once
#include "Vehiculo.h"
#include "Librerias.h"

class Trafic :
    public Vehiculo
{
    static float preciodia;
    int silladeseguridad;
    int asientorebatible;
    float precioSillaSeg;
    float precioAsiento;

public:
    Trafic(string numeroPatente, string color, int numeroChasis, int numeroPoliza,int capacidad, 
        int silladeseguridad,int asientorebatible,float precioSillaSeg,float precioAsiento);
    ~Trafic();
    virtual void PasosMantenimiento();
    float CalcularTarifa(int dias);
    string tostring();

};

