#pragma once
#include "Librerias.h"
#include "Vehiculo.h"

class Automovil :
	public Vehiculo
{
	int silladeseguridad;
	float precioSillaSeg;
public:
	Automovil(int silladeseguridad, float precioSillaSeg);
	//~Automovil();?
	virtual void PasosMantenimiento();
	float CalcularTarifa();
	

};

