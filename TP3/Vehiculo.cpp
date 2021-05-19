#include "Vehiculo.h"

Vehiculo::Vehiculo(int numeroPatente, string color, int numeroChasis, int numeroPoliza, tm FechaUltMantenimiento, float precioDia, int capacidad)
{
	this->numeroPatente = numeroPatente;
	this->color = color;
	this->numeroChasis = numeroChasis;
	this->numeroPoliza = numeroPoliza;
	this->FechaUltMantenimiento = FechaUltMantenimiento;
	this->precioDia = precioDia;
	this->capacidad = capacidad;
}

Vehiculo::~Vehiculo()
{
}

void Vehiculo::PasosMantenimiento()
{
	string pasosMant = " -Cambio de filtros y de aceite" + '\n' +
		"- Revision de frenos" + '\n' +
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

