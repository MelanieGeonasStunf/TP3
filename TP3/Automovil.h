#pragma once
#include "Librerias.h"
#include "Vehiculo.h"

class Automovil :
	protected Vehiculo
{
	int silladeseguridad;
	float precioSillaSeg;
public:
	Automovil(string numeroPatente, string color, int numeroChasis, 
		int numeroPoliza, float precioDia, 
		int capacidadint,float precioSillaSeg);
	~Automovil();
	void PasosMantenimiento();
	float CalcularTarifa(int dias);
	

};

