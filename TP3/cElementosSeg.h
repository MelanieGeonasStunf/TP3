#pragma once
#include "Librerias.h"

class cElementosSeg
{
	int tipo;
	int cant;
	//todos los elementos de seguridad valen lo mismo.
	int precio;
public:
	cElementosSeg(int tipo, int cant);
	~cElementosSeg();
};

