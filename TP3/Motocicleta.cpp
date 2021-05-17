#include "Motocicleta.h"

Motocicleta::Motocicleta(int numeroPatente, string color, int numeroChasis, int numeroPoliza, tm FechaUltMantenimiento, float precioDia, int capacidad, int casco, float precioOpcional):Vehiculo(numeroPatente, color, numeroChasis, numeroPoliza,
    FechaUltMantenimiento, precioDia, capacidad)
{
    this->casco = casco;
    this->precioOpcional = precioOpcional;
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
