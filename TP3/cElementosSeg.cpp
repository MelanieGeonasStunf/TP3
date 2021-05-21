#include "cElementosSeg.h"


cElementosSeg::cElementosSeg(int tipo, int cant)
{
	this->tipo = tipo;
	if (tipo == casco)
		this->precio = 80;
	if (tipo == sillaseguridad)
		this->precio = 130;
	if (tipo == portaequipaje)
		this->precio = 220;
	if (tipo == asientorebatible)
		this->precio = 170;

	this->cant = cant;
}

cElementosSeg::~cElementosSeg()
{
}
