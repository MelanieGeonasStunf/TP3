#include "Camioneta.h"
float Camioneta::preciodia = 5000;
Camioneta::Camioneta(string numeroPatente, string color, int numeroChasis, int numeroPoliza,int capacidad, int silladeseguridad, int portaequipaje, float precioSillaSeg, float precioPortaEquip):Vehiculo(numeroPatente, color,
    numeroChasis, numeroPoliza,capacidad)
{
    this->silladeseguridad = silladeseguridad;
    this->portaequipaje = portaequipaje;
    this->precioSillaSeg = precioSillaSeg;
    this->precioPortaEquip = precioPortaEquip;
}

string Camioneta::tostring()
{
    string cadena = "\nNumero Patente: " + numeroPatente + '\n' + "Color: " + color + '\n'
        + "Numero Poliza: " + to_string(numeroPoliza) + '\n' + "Precio dia: " + to_string(preciodia) + '\n'
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
    float precioCam = preciodia+silladeseguridad*precioSillaSeg;
    precioCam += portaequipaje * precioPortaEquip;
   /* for (int i = 0; i < silladeseguridad; i++)
    {
        precioCam = precioSillaSeg+ dias*precioCam;
    }
    for (int i = 0; i < portaequipaje; i++)
    {
        precioCam = precioPortaEquip + dias*precioCam;
    }*/
    return precioCam;
}
