#pragma once
#include "Librerias.h"
#include "Clientes.h"
#include "Vehiculo.h"

class Alquiler
{
	friend class cListaDeriv;
	Clientes* cliente;
	Vehiculo* vehiculo;
	int elementosAdicionales;
	tm FechaInicio;
	tm FechaFin;
	float monto;
	const int clave;
public:
	Alquiler(Clientes *cliente, Vehiculo* vehiculo, int elementosAdicionales,tm FechaInicio,tm FechaFin,float monto,const int clave);

	const int getclave();
	Clientes* getCliente();
};