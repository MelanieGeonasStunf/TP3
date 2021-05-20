#pragma once
#include "Librerias.h"
#include "Vehiculo.h"

class Automovil :
	public Vehiculo
{
	int silladeseguridad;
	float precioSillaSeg;
public:
	Automovil(string numeroPatente, string color, int numeroChasis, 
		int numeroPoliza, float precioDia, int capacidad, float precioSillaSeg);
	~Automovil();
	void PasosMantenimiento();
	float CalcularTarifa(int dias);
	string tostring();
	

};

