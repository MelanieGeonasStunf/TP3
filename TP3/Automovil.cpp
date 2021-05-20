#include "Automovil.h"

Automovil::Automovil(string numeroPatente, string color, int numeroChasis, 
		int numeroPoliza,float precioDia, 
		int capacidadint, float precioSillaSeg):Vehiculo(numeroPatente, color, numeroChasis, numeroPoliza,
            precioDia, capacidadint)
{
    this->precioSillaSeg = precioSillaSeg;
}


Automovil::~Automovil()
{
}

void Automovil::PasosMantenimiento()
{
}

float Automovil::CalcularTarifa(int dias)
{
    float precioAuto = precioDia;
    for (int i = 0; i < silladeseguridad; i++)
    {
        precioAuto = precioSillaSeg + precioAuto;
    }
    return precioAuto;
}
