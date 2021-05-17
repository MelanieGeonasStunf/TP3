#include "Trafic.h"

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
