#include "Camioneta.h"

Camioneta::Camioneta(string numeroPatente, string color, int numeroChasis, int numeroPoliza, float precioDia, int capacidad, int silladeseguridad, int portaequipaje, float precioSillaSeg, float precioPortaEquip):Vehiculo(numeroPatente, color,
    numeroChasis, numeroPoliza, precioDia, capacidad)
{
    this->silladeseguridad = silladeseguridad;
    this->portaequipaje = portaequipaje;
    this->precioSillaSeg = precioSillaSeg;
    this->precioPortaEquip = precioPortaEquip;
}

string Camioneta::tostring()
{
    string cadena = "\nNumero Patente: " + numeroPatente + '\n' + "Color: " + color + '\n'
        + "Numero Poliza: " + to_string(numeroPoliza) + '\n' + "Precio dia: " + to_string(precioDia) + '\n'
        + "Capacidad: " + to_string(capacidad) + '\n' + "Precio silla seguridad: " + to_string(precioSillaSeg) +
        '\n' + "Cantidad sillas seguridad: " + to_string(silladeseguridad)+'\n'+ "Precio portaequipaje: " + to_string(precioPortaEquip) +
        '\n' + "Cantidad portaequipaje: " + to_string(portaequipaje);
    return cadena;
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
