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
	//float precioDia;//mepa que es static en cada clase
	int capacidad;
	//static float tarifabase;


public:
	Vehiculo(string numeroPatente, string color, int numeroChasis, int numeroPoliza, int capacidad);
	virtual ~Vehiculo();

	void setFechaUltMantenimiento();

	virtual string PasosMantenimiento()=0;
	virtual string tostring()=0;
	virtual float getprecioDia() = 0;
	string getclave();
	string PasosMantenimientoVeh();

	//string tostring();
	//virtual void AgregarElementosSeguridad();
	//SOBRECARGAR:
	//impimir-> imprima datos de vehiculos
};

