#include "Alquiler.h"

Alquiler::Alquiler(Clientes* cliente, Vehiculo* vehiculo, int elementosAdicionales, tm FechaInicio, tm FechaFin, float monto, const int clave) :clave(clave)
{
    this->cliente = cliente;
    this->vehiculo = vehiculo;
    this->elementosAdicionales = elementosAdicionales;
    this->FechaInicio = FechaInicio;
    this->FechaFin = FechaFin;
    this->monto = monto;
}

const int Alquiler::getclave()
{
    return clave;
}

Clientes* Alquiler::getCliente()
{
    return cliente;
}
