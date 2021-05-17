#include "Motocicleta.h"

float Motocicleta::CalcularTarifa()
{
    float precioMoto = precioDia;
    for (int i = 0; i < casco; i++)
    {
        precioMoto = precioOpcional + precioMoto;
    }
    return precioMoto;
}
