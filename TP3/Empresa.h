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
	int CA_alquileres;
	int TAM_alquileres;
	int CA_vehiculos;
	int TAM_vehiculos;
	int CA_clientes;
	int TAM_clientes;

public:
	Empresa();
	~Empresa();
	void Alquilar(Alquiler* alquiler);
	void Adquirir(Vehiculo* vehiculo);
	void Retirar(Vehiculo* vehiculo);
	void Mantenimiento(Vehiculo* vehiculo);
};

