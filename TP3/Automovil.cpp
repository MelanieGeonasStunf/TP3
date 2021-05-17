#include "Automovil.h"

float Automovil::CalcularTarifa()
{
    float precioAuto = precioDia;
    for (int i = 0; i < silladeseguridad; i++)
    {
        precioAuto = precioSillaSeg + precioAuto;
    }
    return precioAuto;
}
