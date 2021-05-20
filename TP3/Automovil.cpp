#include "Automovil.h"

Automovil::Automovil(string numeroPatente, string color, int numeroChasis,int numeroPoliza,
    float precioDia, int capacidad,float precioSillaSeg):Vehiculo(numeroPatente,
        color,numeroChasis, numeroPoliza,precioDia, capacidad)
{
    this->silladeseguridad = 0;
    this->precioSillaSeg = precioSillaSeg;
}


Automovil::~Automovil()
{
}

void Automovil::PasosMantenimiento()
{
}

float Automovil::CalcularTarifa(int dias)
{
    float precioAuto = precioDia;
    for (int i = 0; i < silladeseguridad; i++)
    {
        precioAuto = precioSillaSeg + precioAuto;
    }
    return precioAuto;
}

string Automovil::tostring()
{
    string cadena = "\nNumero Patente: " + numeroPatente + '\n' + "Color: " + color + '\n'
        + "Numero Poliza: " + to_string(numeroPoliza) + '\n' + "Precio dia: " + to_string(precioDia) + '\n'
        + "Capacidad: " + to_string(capacidad) + '\n' + "Precio silla seguridad: " + to_string(precioSillaSeg) +
        '\n' + "Cantidad sillas seguridad: " + to_string(silladeseguridad);
    return cadena;
}
