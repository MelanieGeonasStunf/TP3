#include "Motocicleta.h"
float Motocicleta::preciodia = 2000;
Motocicleta::Motocicleta(string numeroPatente, string color, int numeroChasis, int numeroPoliza, 
    int capacidad):Vehiculo(numeroPatente, color, numeroChasis, numeroPoliza,
  capacidad)
{

}

Motocicleta::~Motocicleta()
{
}

/*void Motocicleta::setCascoyPrecio()
{
    if()
}*/


void Motocicleta::PasosMantenimiento()
{
}

string Motocicleta::tostring()
{
    string cadena = "\nNumero Patente: " + numeroPatente + '\n' + "Color: " + color + '\n'
        + "Numero Poliza: " + to_string(numeroPoliza) + '\n' + "Precio dia: " + to_string(preciodia) + '\n'
        + "Capacidad: " + to_string(capacidad) + '\n';
    return cadena;
}

float Motocicleta::getprecioDia()
{
    return preciodia;
}
