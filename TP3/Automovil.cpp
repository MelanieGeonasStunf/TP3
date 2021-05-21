#include "Automovil.h"
float Automovil::preciodia = 4000;
Automovil::Automovil(string numeroPatente, string color, int numeroChasis,int numeroPoliza,
   int capacidad,float precioSillaSeg):Vehiculo(numeroPatente,
        color,numeroChasis, numeroPoliza,capacidad)
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

float Automovil::CalcularTarifa()
{
    float precioAuto = preciodia + silladeseguridad * precioSillaSeg;
    /*for (int i = 0; i < silladeseguridad; i++)
    {
        precioAuto = (silladeseguridad*precioSillaSeg + precioAuto)*dias;
    }*/
    return precioAuto;
}

string Automovil::tostring()
{
    string cadena = "\nNumero Patente: " + numeroPatente + '\n' + "Color: " + color + '\n'
        + "Numero Poliza: " + to_string(numeroPoliza) + '\n' + "Precio dia: " + to_string(preciodia) + '\n'
        + "Capacidad: " + to_string(capacidad) + '\n' + "Precio silla seguridad: " + to_string(precioSillaSeg) +
        '\n' + "Cantidad sillas seguridad: " + to_string(silladeseguridad);
    return cadena;
}
