#include "Camioneta.h"
float Camioneta::preciodia = 5000;
Camioneta::Camioneta(string numeroPatente, string color, int numeroChasis,
    int numeroPoliza,int capacidad):Vehiculo(numeroPatente, color,
    numeroChasis, numeroPoliza,capacidad)
{
    
}

string Camioneta::tostring()
{
    string cadena = "\nNumero Patente: " + numeroPatente + '\n' + "Color: " + color + '\n'
        + "Numero Poliza: " + to_string(numeroPoliza) + '\n' + "Precio dia: " + to_string(preciodia) + '\n'
        + "Capacidad: " + to_string(capacidad) + '\n';
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



