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
    string cadena = "\n\tNumero Patente: " + numeroPatente + '\n'+'\t' + "Color: " + color + '\n'+'\t'
        + "Numero Poliza: " + to_string(numeroPoliza) + '\n' + '\t'+"Precio dia: " + to_string(preciodia) + '\n'
        +'\t'+ "Capacidad: " + to_string(capacidad) + '\n';
    return cadena;
}

float Automovil::getprecioDia()
{
    return preciodia;
}


