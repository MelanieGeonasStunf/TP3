#pragma once
#include "Librerias.h"
#include "Vehiculo.h"

class Automovil :
	protected Vehiculo
{
	int silladeseguridad;
	float precioSillaSeg;
public:
	Automovil(int numeroPatente, string color, int numeroChasis, 
		int numeroPoliza, tm FechaUltMantenimiento, float precioDia, 
		int capacidadint, int silladeseguridad, float precioSillaSeg);
	~Automovil();
	virtual void PasosMantenimiento();
	float CalcularTarifa();
	

};

