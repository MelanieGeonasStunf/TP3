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
	string clave;
public:
	Alquiler(Clientes *cliente, Vehiculo* vehiculo, int elementosAdicionales,
		tm FechaInicio,tm FechaFin,float monto,string clave_);
	~Alquiler();
	//const int getclave();
	Clientes* getCliente();
	string getclave();
	void setmonto();//creo un st monto donde llamo a calcular tarifa
	int CalcularTiempo();
};