#pragma once
#include "Librerias.h"
#include "Vehiculo.h"
#include "Clientes.h"
#include "Alquiler.h"
#include "cListaDeriv.h"



class Empresa
{
	cListaT<Vehiculo> *ListaVehiculos;
	cListaT<Clientes> *ListaClientes;
	cListaDeriv*ListaAlquileres;
	//Alquiler** ListaAlquileres;
public:
	Empresa(cListaT<Vehiculo>* ListaVehiculos,cListaT<Clientes>* ListaClientes,
	cListaDeriv* ListaAlquileres);
	~Empresa();
	void Alquilar(Alquiler* alquiler);
	void Adquirir(Vehiculo* vehiculo);
	void Retirar(Vehiculo* vehiculo);
	void Mantenimiento(Vehiculo* vehiculo);
};

