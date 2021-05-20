#include "Vehiculo.h"
//static float tarifabase=
Vehiculo::Vehiculo(string numeroPatente, string color, int numeroChasis, int numeroPoliza, float precioDia, int capacidad)
{
	this->numeroPatente = numeroPatente;
	this->color = color;
	this->numeroChasis = numeroChasis;
	this->numeroPoliza = numeroPoliza;
	this->FechaUltMantenimiento = { 0,0,0 };
	this->precioDia = precioDia;
	this->capacidad = capacidad;
}

Vehiculo::~Vehiculo()
{
}

void Vehiculo::setFechaUltMantenimiento()
{
	time_t rawtime;
	tm* info;
	time(&rawtime);
	info = localtime(&rawtime);
	FechaUltMantenimiento = *info;
}

void Vehiculo::PasosMantenimiento()
{
	string linea = "- Revision de frenos";
	string pasosMant = " -Cambio de filtros y de aceite" + '\n' +
		linea + '\n' +
		"- Revision Neumáticos" + '\n' +
		"Amortiguadores" + '\n' +
		"- Revision de las luces " + '\n' +
		"-Correa del motor" + '\n' +
		"Liquido de transmision automatica" + '\n' +
		"Bateria y cables" + '\n' +
		"Filtro de aire de la cabina" + '\n' +
		"Lubricacion de chasis" + '\n' +
		"Anticongelante" + '\n' +
		"Fugas de escape" + '\n' +
		"Sensor de oxigeno" + '\n' +
		"Liquido de la direccion hidraulica" + '\n' +
		"Bujias" + '\n' +
		"Liquido limpiador de parabrisas" + '\n' +
		"Limpieza y encerado" + '\n';
	 
}

string Vehiculo::getclave()
{
	return numeroPatente;
}

