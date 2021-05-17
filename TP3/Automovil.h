#pragma once
#include "Librerias.h"
#include "Vehiculo.h"

class Automovil :
	public Vehiculo
{
	int silladeseguridad;
	float precioSillaSeg;
public:
	virtual void PasosMantenimiento();
	float CalcularTarifa();
};

