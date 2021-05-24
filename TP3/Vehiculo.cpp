#include "Vehiculo.h"
//static float tarifabase=
Vehiculo::Vehiculo(string numeroPatente, string color, int numeroChasis, int numeroPoliza,int capacidad)
{
	this->numeroPatente = numeroPatente;
	this->color = color;
	this->numeroChasis = numeroChasis;
	this->numeroPoliza = numeroPoliza;
	this->FechaUltMantenimiento = { 0,0,0 };
	//this->precioDia = precioDia;
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

}

string Vehiculo::getclave()
{
	return numeroPatente;
}

/*string Vehiculo::tostring()
{
	string numeroPatente;
	string color;
	int numeroChasis;
	int numeroPoliza;
	tm FechaUltMantenimiento;
	//float precioDia;//mepa que es static en cada clase
	int capacidad;

	string cadena = "Numero Patente: " + numeroPatente + '\n' +
		"Color" + color + '\n' +
		"Numero de Chasis: " + to_string(numeroChasis) + '\n' +
		"Numero de Poliza: " + to_string(numeroPoliza) + '\n' +
		"Fecha Ultimo Mantenimiento: " + to_string(FechaUltMantenimiento.tm_mday) + " / " +
		to_string(FechaUltMantenimiento.tm_mon) + " / " + to_string(FechaUltMantenimiento.tm_year) + '\n' +
		"Capacidad: " + to_string(capacidad);
}*/

