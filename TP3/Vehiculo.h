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
	float precioDia;//mepa que es static en cada clase
	int capacidad;
	//static float tarifabase;


public:
	Vehiculo(string numeroPatente, string color, int numeroChasis, int numeroPoliza,float precioDia, int capacidad);
	virtual ~Vehiculo();

	void setFechaUltMantenimiento();

	virtual float CalcularTarifa(int dias)=0;
	virtual void PasosMantenimiento()=0;
	virtual string tostring()=0;
	string getclave();

	//virtual void AgregarElementosSeguridad();
	//SOBRECARGAR:
	//impimir-> imprima datos de vehiculos
};

