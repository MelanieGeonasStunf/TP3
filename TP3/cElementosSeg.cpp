#include "cElementosSeg.h"


cElementosSeg::cElementosSeg(int tipo, int cant)
{
	precio = 0;
	this->tipo = tipo;
	if (tipo == casco)
		precio = 80;
	if (tipo == sillaseguridad)
		precio = 130;
	if (tipo == portaequipaje)
		precio = 220;
	if (tipo == asientorebatible)
		precio = 170;

	this->cant = cant;
}

cElementosSeg::~cElementosSeg()
{
}

float cElementosSeg::CalcularTarifa()
{
	float Tarifa;
	Tarifa = cant*precio;
	return Tarifa;
}

int cElementosSeg::getTipo()
{
	return tipo;
}

int cElementosSeg::getCant()
{
	return cant;
}
