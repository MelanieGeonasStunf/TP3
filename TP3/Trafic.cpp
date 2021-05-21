#include "Trafic.h"
float Trafic::preciodia = 7000;

Trafic::Trafic(string numeroPatente, string color, int numeroChasis, int numeroPoliza, 
    int capacidad, int silladeseguridad, int asientorebatible, float precioSillaSeg, float precioAsiento):Vehiculo(numeroPatente, color, numeroChasis, numeroPoliza,
    capacidad)
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
    //
}

float Trafic::CalcularTarifa()
{
  
    float precioTrafic = preciodia;
    precioTrafic += silladeseguridad*precioSillaSeg;
    precioTrafic += asientorebatible*precioAsiento;
    return precioTrafic;
}

string Trafic::tostring()
{
    string cadena = "\nNumero Patente: " + numeroPatente + '\n' + "Color: " + color + '\n'
        + "Numero Poliza: " + to_string(numeroPoliza) + '\n' + "Precio dia: " + to_string(preciodia) + '\n'
        + "Capacidad: " + to_string(capacidad) + '\n' + "Precio silla seguridad: " + to_string(precioSillaSeg) +
        '\n' + "Cantidad sillas seguridad: " + to_string(silladeseguridad) + '\n' + "Precio Asiento rebatible: " + to_string(precioAsiento) +
        '\n' + "Cantidad Asiento rebatible: " + to_string(asientorebatible);
    return cadena;
}
