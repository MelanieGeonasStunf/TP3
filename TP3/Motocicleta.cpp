#include "Motocicleta.h"

Motocicleta::Motocicleta(string numeroPatente, string color, int numeroChasis, int numeroPoliza, float precioDia, int capacidad, int casco, float precioOpcional):Vehiculo(numeroPatente, color, numeroChasis, numeroPoliza,
    precioDia, capacidad)
{
    this->casco = casco;
    this->precioOpcional = precioOpcional;
}

Motocicleta::~Motocicleta()
{
}

void Motocicleta::PasosMantenimiento()
{
}

float Motocicleta::CalcularTarifa()
{
    float precioMoto = precioDia;
    for (int i = 0; i < casco; i++)
    {
        precioMoto = precioOpcional + precioMoto;
    }
    return precioMoto;
}
