#pragma once
#include "Vehiculo.h"
#include "Librerias.h"
class Motocicleta :
    public Vehiculo
{
    static float preciodia;

    //ponemos precio base como atributo?
public:
    Motocicleta(string numeroPatente, string color, int numeroChasis,
        int numeroPoliza, int capacidad);
    ~Motocicleta();

   // void setCascoyPrecio();

    string PasosMantenimiento();
    string tostring();
    float getprecioDia();
};

