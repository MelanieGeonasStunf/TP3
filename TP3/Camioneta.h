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
	Camioneta(string numeroPatente, string color, int numeroChasis,
		int numeroPoliza, float precioDia, int capacidad,
		int silladeseguridad, int portaequipaje, float precioSillaSeg, float precioPortaEquip);
	string tostring();
	void PasosMantenimiento();
	float CalcularTarifa();
};

