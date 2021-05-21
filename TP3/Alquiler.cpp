#include "Alquiler.h"

Alquiler::Alquiler(Clientes* cliente, Vehiculo* vehiculo, int elementosAdicionales, tm FechaInicio, tm FechaFin, string clave_)
{
    this->cliente = cliente;
    this->vehiculo = vehiculo;
    this->elementosAdicionales = elementosAdicionales;
    this->FechaInicio = FechaInicio;
    this->FechaFin = FechaFin;
    this->monto =0;
    this->clave = clave_;
}

Alquiler::~Alquiler()
{
}

/*const int Alquiler::getclave()
{
    return clave;
}*/

string Alquiler::tostring()
{
    string cadena = "\nAlquiler: " + clave + '\n' + "Cliente: " + cliente->tostring() +
        '\n' + "Vehiculo: " + vehiculo->tostring() + '\n' + "Fecha Inicio: " + to_string(FechaInicio.tm_mday) + '/' +
        to_string(FechaInicio.tm_mon) + '/' + to_string(FechaInicio.tm_year) + '\n'
        + "Fecha Fin:" + to_string(FechaFin.tm_mday) + '/' +
        to_string(FechaFin.tm_mon) + '/' + to_string(FechaFin.tm_year) + '\n' + "Monto:" + to_string(monto);
    return cadena;
}

Clientes* Alquiler::getCliente()
{
    return cliente;
}

string Alquiler::getclave()
{
    return clave;
}

void Alquiler::setmonto()
{
    try {
        float monto= vehiculo->CalcularTarifa(CalcularTiempo());
    }
    catch (string excep)
    {
        throw excep;
    }
    this->monto = monto;
}

int Alquiler::CalcularTiempo()
{
    time_t inicio = mktime(&FechaInicio);
    time_t fin = mktime(&FechaFin);
    double difference = difftime(fin, inicio);
    if (difference == 0)
        throw "fechas ingresadas no disponibles";
    int dias = (int)difference / 86400;
    return dias;
}

