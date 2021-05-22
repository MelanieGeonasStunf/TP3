#include "Trafic.h"
float Trafic::preciodia = 7000;

Trafic::Trafic(string numeroPatente, string color, int numeroChasis, int numeroPoliza, 
    int capacidad):Vehiculo(numeroPatente, color, numeroChasis, numeroPoliza,
    capacidad)
{

}

Trafic::~Trafic()
{
}


void Trafic::PasosMantenimiento()
{
    //
}


string Trafic::tostring()
{
    string cadena = "\nNumero Patente: " + numeroPatente + '\n' + "Color: " + color + '\n'
        + "Numero Poliza: " + to_string(numeroPoliza) + '\n' + "Precio dia: " + to_string(preciodia) + '\n'
        + "Capacidad: " + to_string(capacidad) + '\n';
    return cadena;
}

float Trafic::getprecioDia()
{
    return preciodia;
}
