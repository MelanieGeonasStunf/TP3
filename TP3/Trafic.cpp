#include "Trafic.h"
Trafic::Trafic(string numeroPatente, string color, int numeroChasis, int numeroPoliza, float precioDia, int capacidad, int silladeseguridad, int asientorebatible, float precioSillaSeg, float precioAsiento):Vehiculo(numeroPatente, color, numeroChasis, numeroPoliza,
     precioDia, capacidad)
{
    this->silladeseguridad = silladeseguridad;
    this->asientorebatible = asientorebatible;
    this->precioSillaSeg = precioSillaSeg;
    this->precioAsiento = precioAsiento;
}

Trafic::~Trafic()
{
}


void Trafic::PasosMantenimiento()
{
}

float Trafic::CalcularTarifa(int dias)
{
    float precioTrafic = precioDia;
    for (int i = 0; i < silladeseguridad; i++)
    {
        precioTrafic = precioSillaSeg + precioTrafic;
    }
    for (int i = 0; i < asientorebatible; i++)
    {
        precioTrafic = precioAsiento + precioTrafic;
    }
    return precioTrafic;
}

string Trafic::tostring()
{
    string cadena = "\nNumero Patente: " + numeroPatente + '\n' + "Color: " + color + '\n'
        + "Numero Poliza: " + to_string(numeroPoliza) + '\n' + "Precio dia: " + to_string(precioDia) + '\n'
        + "Capacidad: " + to_string(capacidad) + '\n' + "Precio silla seguridad: " + to_string(precioSillaSeg) +
        '\n' + "Cantidad sillas seguridad: " + to_string(silladeseguridad) + '\n' + "Precio Asiento rebatible: " + to_string(precioAsiento) +
        '\n' + "Cantidad Asiento rebatible: " + to_string(precioAsiento);
    return cadena;
}
