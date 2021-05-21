#pragma once
#include "Librerias.h"
#include "Clientes.h"
#include "Vehiculo.h"

class Alquiler
{
	friend class cListaDeriv;
	Clientes* cliente;
	Vehiculo* vehiculo;
	bool elementosAdicionales;//que se pone en este int
	tm FechaInicio;
	tm FechaFin;
	float monto;
	string clave;
public:
	Alquiler(Clientes *cliente, Vehiculo* vehiculo, bool elementosAdicionales,
		tm FechaInicio,tm FechaFin,string clave_);
	~Alquiler();
	//const int getclave();
	string tostring();
	Clientes* getCliente();
	string getclave();
	void setmonto();//creo un st monto donde llamo a calcular tarifa
	int CalcularTiempo();
	void ElementosAdicionales();
};