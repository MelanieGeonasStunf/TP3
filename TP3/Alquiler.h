#pragma once
#include "Librerias.h"
#include "Clientes.h"
#include "Vehiculo.h"
#include "cElementosSeg.h"

class Alquiler
{
	friend class cListaDeriv;
	Clientes* cliente;
	Vehiculo* vehiculo;
	cElementosSeg* elemento1;
	cElementosSeg* elemento2;
	tm FechaInicio;
	tm FechaFin;
	float monto;
	string clave;
public:
	Alquiler(Clientes *cliente, Vehiculo* vehiculo, cElementosSeg* elemento1, cElementosSeg* elemento2,
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