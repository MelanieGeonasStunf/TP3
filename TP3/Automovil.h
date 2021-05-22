#pragma once
#include "Librerias.h"
#include "Vehiculo.h"

class Automovil :
	public Vehiculo
{
	static float preciodia;
	int silladeseguridad;
	float precioSillaSeg;

public:
	Automovil(string numeroPatente, string color, int numeroChasis, 
		int numeroPoliza, int capacidad, float precioSillaSeg);
	~Automovil();

	void PasosMantenimiento();
	float CalcularTarifa();
	string tostring();
	void setElementosAdicionales();
	

};

