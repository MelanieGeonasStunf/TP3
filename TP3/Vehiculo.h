#pragma once
#include "Librerias.h"

class Vehiculo
{
protected:
	int numeroPatente;
	string color;
	int numeroChasis;
	int numeroPoliza;
	tm FechaUltMantenimiento;
	float precioDia;
	int capacidad;

public:
	Vehiculo(int numeroPatente, string color, int numeroChasis, int numeroPoliza, tm FechaUltMantenimiento, float precioDia, int capacidad);
	~Vehiculo();
	virtual float CalcularTarifa()=0;//virtual?
	//SOBRECARGAR:
	//impimir-> imprima datos de vehiculos
};

