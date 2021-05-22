#pragma once
#include "Librerias.h"

class cElementosSeg
{
	int tipo;
	int cant;
	//todos los elementos de seguridad valen lo mismo.
	float precio;

public:
	cElementosSeg(int tipo, int cant);
	~cElementosSeg();
	float CalcularTarifa();
	int getTipo();
	int getCant();
};

