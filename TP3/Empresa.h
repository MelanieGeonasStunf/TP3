#pragma once
#include "Librerias.h"
#include "Vehiculo.h"
#include "Clientes.h"
#include "Alquiler.h"



class Empresa
{
	cListaT<Vehiculo> *ListaVehiculos;
	cListaT<Clientes> *ListaClientes;
	cListaDeriv*ListaAlquileres;
	//Alquiler** ListaAlquileres;
	int CA_alquileres;
	int TAM_alquileres;

public:
	Empresa();
	~Empresa();
	void Alquilar(Clientes* cliente);
	void Adquirir();
	void Retirar();
	void Mantenimiento();
};

