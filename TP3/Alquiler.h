#pragma once
#include "Librerias.h"
#include "Clientes.h"
#include "cElementosSeg.h"
#include "Automovil.h"
#include"Motocicleta.h"
#include"Camioneta.h"
#include"Trafic.h"

class Alquiler
{
	friend class cListaDeriv;
	Clientes* cliente;
	Vehiculo* vehiculo;
	cElementosSeg* elemento1;
	cElementosSeg* elemento2;
	tm FechaInicio;
	tm FechaFin;
	float monto;// precio final que debe pagar el cliente
	string clave;

public:
	Alquiler(Clientes *cliente, Vehiculo* vehiculo, cElementosSeg* elemento1, cElementosSeg* elemento2,
		tm FechaInicio,tm FechaFin,string clave_);
	~Alquiler();

	string tostring();
	Clientes* getCliente();
	string getclave();
	void setmonto();//creo un st monto donde llamo a calcular tarifa
	int CalcularTiempo();
	void VerificarTipo();//-> verifica que el tipo de elemento adicional concuerde con el vehiculo
	//void ElementosAdicionales();
};