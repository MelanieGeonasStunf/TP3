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
    Motocicleta(int numeroPatente, string color, int numeroChasis, int numeroPoliza,
        tm FechaUltMantenimiento, float precioDia, int capacidad, int casco, float precioOpcional);
    ~Motocicleta();
    void PasosMantenimiento();
    float CalcularTarifa();
};
