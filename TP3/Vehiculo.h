#pragma once
#include "Librerias.h"

class Vehiculo
{
protected:
	string numeroPatente;
	string color;
	int numeroChasis;
	int numeroPoliza;
	tm FechaUltMantenimiento;
	float precioDia;
	int capacidad;

public:
	Vehiculo(string numeroPatente, string color, int numeroChasis, int numeroPoliza, tm FechaUltMantenimiento, float precioDia, int capacidad);
	virtual ~Vehiculo();

	void setFechaUltMantenimiento();

	virtual float CalcularTarifa()=0;
	virtual void PasosMantenimiento()=0;
	string getclave();

	//virtual void AgregarElementosSeguridad();
	//SOBRECARGAR:
	//impimir-> imprima datos de vehiculos
};

