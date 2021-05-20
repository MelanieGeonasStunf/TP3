#pragma once
#include "Librerias.h"
#include "Vehiculo.h"

class Camioneta:
	protected Vehiculo
{
	int silladeseguridad;
	int portaequipaje;
	float precioSillaSeg;
	float precioPortaEquip;
public:
	Camioneta(string numeroPatente, string color, int numeroChasis,
		int numeroPoliza, float precioDia, int capacidad,
		int silladeseguridad, int portaequipaje, float precioSillaSeg, float precioPortaEquip);
	void PasosMantenimiento();
	float CalcularTarifa();
};

