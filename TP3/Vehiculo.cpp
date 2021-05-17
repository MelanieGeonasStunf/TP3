#include "Vehiculo.h"

Vehiculo::Vehiculo(int numeroPatente, string color, int numeroChasis, int numeroPoliza, tm FechaUltMantenimiento, float precioDia, int capacidad)
{
	this->numeroPatente = numeroPatente;
	this->color = color;
	this->numeroChasis = numeroChasis;
	this->numeroPoliza = numeroPoliza;
	this->FechaUltMantenimiento = FechaUltMantenimiento;
	this->precioDia = precioDia;
	this->capacidad = capacidad;
}

Vehiculo::~Vehiculo()
{
}

void Vehiculo::CalcularTarifa()
{
	/*
	if-> auto
	preciobase auto + adicional auto
	.
	.
	.
	(para todos vehiculos)

	return tarifa
	*/
}
