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


string Trafic::PasosMantenimiento()
{
    string pasosMant = PasosMantenimientoVeh();
    pasosMant += "- Liquido limpiador de parabrisas \n- Limpieza de sensores\n- Lubricacion de chasis\n";
    return pasosMant;
}


string Trafic::tostring()
{
    string cadena = "\n\tNumero Patente: " + numeroPatente + '\n' +'\t'+ "Color: " + color + '\n'+'\t'
        + "Numero Poliza: " + to_string(numeroPoliza) + '\n' +'\t'+ "Precio dia: " + to_string(preciodia) + '\n'
        +'\t'+ "Capacidad: " + to_string(capacidad) + '\n';
    return cadena;
}

float Trafic::getprecioDia()
{
    return preciodia;
}
