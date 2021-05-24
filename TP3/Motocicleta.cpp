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
    string pasosMant = "- Lubricacion de las guayas";

}

string Motocicleta::tostring()
{
    string cadena = "\n\tNumero Patente: " + numeroPatente + '\n' +'\t' +"Color: " + color + '\n'+'\t'
        + "Numero Poliza: " + to_string(numeroPoliza) + '\n' +'\t'+ "Precio dia: " + to_string(preciodia) + '\n'
        +'\t'+ "Capacidad: " + to_string(capacidad) + '\n';
    return cadena;
}

float Motocicleta::getprecioDia()
{
    return preciodia;
}
