#pragma once
#include "Librerias.h"
#include "Vehiculo.h"
#include "Clientes.h"
#include "Alquiler.h"
#include "cListaDeriv.h"



class Empresa
{
//public:
	cListaT<Vehiculo> *ListaVehiculos;//
	cListaT<Clientes> *ListaClientes;//
	cListaDeriv*ListaAlquileres;
	//Alquiler** ListaAlquileres;
public:
	Empresa(cListaT<Vehiculo>* ListaVehiculos,cListaT<Clientes>* ListaClientes,
	cListaDeriv* ListaAlquileres);
	~Empresa();

	cListaDeriv* getlistaAlq();
	cListaT<Clientes>* getlistaCli();
	cListaT<Vehiculo>* getListaVeh();
	void Alquilar(Alquiler* alquiler);
	void Adquirir(Vehiculo* vehiculo);
	void Retirar(Vehiculo* vehiculo);
	void Mantenimiento(Vehiculo* vehiculo);
	string tostring();
};

