#pragma once
#include "Vehiculo.h"
#include "Librerias.h"

class Motocicleta :
    public Vehiculo
{
    static float preciodia;
    int casco;
    float precioOpcional;
    //ponemos precio base como atributo?
public:
    Motocicleta(string numeroPatente, string color, int numeroChasis,
        int numeroPoliza, int capacidad, int casco, float precioOpcional);
    ~Motocicleta();
    void PasosMantenimiento();
    float CalcularTarifa();
    string tostring();

};

