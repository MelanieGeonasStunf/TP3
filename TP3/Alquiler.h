#pragma once
#include "Librerias.h"
#include "Clientes.h"
#include "Vehiculo.h"

class Alquiler
{
	Clientes* cliente;
	Vehiculo* vehiculo;
	int elementosAdicionales;
	tm FechaInicio;
	tm FechaFin;
	float monto;
	const int codigo;
public:
	Alquiler(Clientes *cliente, Vehiculo* vehiculo, int elementosAdicionales,tm FechaInicio,tm FechaFin,float monto,const int codigo);

	const int getcodigo();
};