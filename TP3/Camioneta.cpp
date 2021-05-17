#include "Camioneta.h"

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
