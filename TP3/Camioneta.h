#pragma once
#include "Librerias.h"
#include "Vehiculo.h"

class Camioneta:
	public Vehiculo
{
	static float preciodia;
	
public:
	Camioneta(string numeroPatente, string color, int numeroChasis,
		int numeroPoliza, int capacidad);
	string tostring();
	string PasosMantenimiento();
	float getprecioDia();
};

