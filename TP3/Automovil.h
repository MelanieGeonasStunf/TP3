#pragma once
#include "Librerias.h"
#include "Vehiculo.h"

class Automovil :
	public Vehiculo
{
	static float preciodia;

public:
	Automovil(string numeroPatente, string color, int numeroChasis, 
		int numeroPoliza, int capacidad);
	~Automovil();

	void PasosMantenimiento();//
	string tostring();
	float getprecioDia();
};

