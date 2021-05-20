#include "Camioneta.h"

Camioneta::Camioneta(string numeroPatente, string color, int numeroChasis, int numeroPoliza, float precioDia, int capacidad, int silladeseguridad, int portaequipaje, float precioSillaSeg, float precioPortaEquip):Vehiculo(numeroPatente, color,
    numeroChasis, numeroPoliza, precioDia, capacidad)
{
    this->silladeseguridad = silladeseguridad;
    this->portaequipaje = portaequipaje;
    this->precioSillaSeg = precioSillaSeg;
    this->precioPortaEquip = precioPortaEquip;
}

void Camioneta::PasosMantenimiento()
{
}

float Camioneta::CalcularTarifa()
{
    float precioCam = precioDia;
    for (int i = 0; i < silladeseguridad; i++)
    {
        precioCam = precioSillaSeg+ precioCam;
    }
    for (int i = 0; i < portaequipaje; i++)
    {
        precioCam = precioPortaEquip + precioCam;
    }
    return precioCam;
}
