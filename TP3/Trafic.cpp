#include "Trafic.h"
Trafic::Trafic(int numeroPatente, string color, int numeroChasis, int numeroPoliza, tm FechaUltMantenimiento, float precioDia, int capacidad, int silladeseguridad, int asientorebatible, float precioSillaSeg, float precioAsiento):Vehiculo(numeroPatente, color, numeroChasis, numeroPoliza,
    FechaUltMantenimiento, precioDia, capacidad)
{
    this->silladeseguridad = silladeseguridad;
    this->asientorebatible = asientorebatible;
    this->precioSillaSeg = precioSillaSeg;
    this->precioAsiento = precioAsiento;
}
{
}

void Trafic::PasosMantenimiento()
{
}

float Trafic::CalcularTarifa()
{
    float precioTrafic = precioDia;
    for (int i = 0; i < silladeseguridad; i++)
    {
        precioTrafic = precioSillaSeg + precioTrafic;
    }
    for (int i = 0; i < asientorebatible; i++)
    {
        precioTrafic = precioAsiento + precioTrafic;
    }
    return precioTrafic;
}
