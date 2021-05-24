#include "Automovil.h"
float Automovil::preciodia = 4000;
Automovil::Automovil(string numeroPatente, string color, int numeroChasis, int numeroPoliza,
    int capacidad) :Vehiculo(numeroPatente,
        color, numeroChasis, numeroPoliza, capacidad)
{
}


Automovil::~Automovil()
{
}

void Automovil::PasosMantenimiento()
{
    string pasosMant = "- Liquido limpiador de parabrisas\n- Lubricacion de chasis";
}

string Automovil::tostring()
{
    string cadena = "\nNumero Patente: " + numeroPatente + '\n' + "Color: " + color + '\n'
        + "Numero Poliza: " + to_string(numeroPoliza) + '\n' + "Precio dia: " + to_string(preciodia) + '\n'
        + "Capacidad: " + to_string(capacidad) + '\n';
    return cadena;
}

float Automovil::getprecioDia()
{
    return preciodia;
}


