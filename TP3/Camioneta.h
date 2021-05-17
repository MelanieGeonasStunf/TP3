#pragma once
#include "Librerias.h"
#include "Vehiculo.h"

class Camioneta:
	public Vehiculo
{
	int silladeseguridad;
	int portaequipaje;
	float precioSillaSeg;
	float precioPortaEquip;
public:
	virtual void PasosMantenimiento();
	float CalcularTarifa();
};

