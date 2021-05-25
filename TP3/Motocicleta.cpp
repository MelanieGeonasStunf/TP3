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


string Motocicleta::PasosMantenimiento()
{
    string pasosMant = PasosMantenimientoVeh();
    pasosMant += "- Lubricacion de las guayas\n"+'\n';
    return pasosMant;
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
