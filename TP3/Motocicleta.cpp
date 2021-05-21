#include "Motocicleta.h"
float Motocicleta::preciodia = 2000;
Motocicleta::Motocicleta(string numeroPatente, string color, int numeroChasis, int numeroPoliza, 
    int capacidad, int casco, float precioOpcional):Vehiculo(numeroPatente, color, numeroChasis, numeroPoliza,
  capacidad)
{
    this->casco = casco;
    this->precioOpcional = precioOpcional;
}

Motocicleta::~Motocicleta()
{
}

void Motocicleta::PasosMantenimiento()
{
}

float Motocicleta::CalcularTarifa(int dias)
{
    if (dias == 0)
    {
        //excep
    }
    float precioMoto = preciodia;
    precioMoto = casco*precioOpcional + dias*precioMoto;
    return precioMoto;
}

string Motocicleta::tostring()
{
    string cadena = "\nNumero Patente: " + numeroPatente + '\n' + "Color: " + color + '\n'
        + "Numero Poliza: " + to_string(numeroPoliza) + '\n' + "Precio dia: " + to_string(preciodia) + '\n'
        + "Capacidad: " + to_string(capacidad) + '\n' + "Precio casco: " + to_string(precioOpcional) +
        '\n' + "Cantidad de cascos: " + to_string(casco);
    return cadena;
}
