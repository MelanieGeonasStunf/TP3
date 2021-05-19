#include "Automovil.h"

Automovil::Automovil(int numeroPatente, string color, int numeroChasis, int numeroPoliza, 
    tm FechaUltMantenimiento, float precioDia, int capacidadint,
    int silladeseguridad, float precioSillaSeg):Vehiculo(numeroPatente, color, numeroChasis, numeroPoliza,
        FechaUltMantenimiento, precioDia, capacidad)
{
    this->silladeseguridad = silladeseguridad;
    this->precioSillaSeg = precioSillaSeg;
}
Automovil::~Automovil()
{
}

void Automovil::PasosMantenimiento()
{
}

float Automovil::CalcularTarifa()
{
    float precioAuto = precioDia;
    for (int i = 0; i < silladeseguridad; i++)
    {
        precioAuto = precioSillaSeg + precioAuto;
    }
    return precioAuto;
}
