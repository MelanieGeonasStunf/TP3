#include "Vehiculo.h"

Vehiculo::Vehiculo(string numeroPatente, string color, int numeroChasis, int numeroPoliza,int capacidad)
{
	this->numeroPatente = numeroPatente;
	this->color = color;
	this->numeroChasis = numeroChasis;
	this->numeroPoliza = numeroPoliza;
	this->FechaUltMantenimiento = { 0,0,0 };
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

string Vehiculo::getclave()
{
	return numeroPatente;
}

string Vehiculo::PasosMantenimientoVeh()
{
	string linea = "\n- Revision de frenos";
	string pasosMant = "\t- Cambio de filtros y de aceite" + '\n' +
		linea + '\n' +
		"- Revision Neumaticos" + '\n' +
		"- Amortiguadores" + '\n' +
		"- Revision de las luces " + '\n' +
		"- Correa del motor" + '\n' +
		"- Liquido de transmision automatica" + '\n' +
		"- Bateria y cables" + '\n' +
		"- Filtro de aire de la cabina" + '\n' +
		"- Anticongelante" + '\n' +
		"- Fugas de escape" + '\n' +
		"- Sensor de oxigeno" + '\n' +
		"- Liquido de la direccion hidraulica" + '\n' +
		"- Bujias" + '\n' +
		"- Limpieza y encerado" + '\n';

	return pasosMant;
}
