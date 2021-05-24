#include "Camioneta.h"
float Camioneta::preciodia = 5000;
Camioneta::Camioneta(string numeroPatente, string color, int numeroChasis,
    int numeroPoliza,int capacidad):Vehiculo(numeroPatente, color,
    numeroChasis, numeroPoliza,capacidad)
{
    
}

string Camioneta::tostring()
{
    string cadena = "\n\tNumero Patente: " + numeroPatente + '\n' +'\t'+ "Color: " + color + '\n'+'\t'
        + "Numero Poliza: " + to_string(numeroPoliza) + '\n' +'\t'+ "Precio dia: " + to_string(preciodia) + '\n'
        +'\t'+ "Capacidad: " + to_string(capacidad) + '\n';
    return cadena;
}

void Camioneta::PasosMantenimiento()
{
    string pasosMant = "- Liquido limpiador de parabrisas \n- Lubricacion de chasis";

}

float Camioneta::getprecioDia()
{
    return preciodia;
}



