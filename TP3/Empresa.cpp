#include "Empresa.h"
Empresa::Empresa(cListaT<Vehiculo>* ListaVehiculos, cListaT<Clientes>* ListaClientes,
	cListaDeriv* ListaAlquileres)
{
	this->ListaClientes= ListaClientes;
	this->ListaVehiculos=ListaVehiculos;
	this->ListaAlquileres = ListaAlquileres;
	
}

Empresa::~Empresa()
{
}

cListaDeriv* Empresa::getlistaAlq()
{
	return ListaAlquileres;
}

void Empresa::Alquilar(Alquiler* alquiler)
{
	try
	{
		if (ListaAlquileres[ListaAlquileres->CA].AgregarItem(alquiler)== true || 
			ListaClientes[ListaClientes->CA].AgregarItem(alquiler->getCliente())==true)
			return;
	}
	catch (exception)
	{
		throw new exception("No se pudo agregar el item a la lista");
	}

	 //deberia igualarlo a algo pq retorna un booleano; y tambien tira un throw
	

}

void Empresa::Adquirir(Vehiculo* vehiculo)
{
	// agrega un vehiculo lista vehiculos
	//deberia igualarlo a algo pq retorna un booleano; y tambien tira un throw
	try
	{
		if (ListaVehiculos[ListaVehiculos->CA].AgregarItem(vehiculo) == true)
			return;
	}
	catch (exception)
	{
		throw new exception("No se pudo agregar el item a la lista");
	}
	
}

void Empresa::Retirar(Vehiculo* vehiculo)
{
	// quita vehiculo lista vehiculos
	ListaVehiculos[ListaVehiculos->CA].Quitar(vehiculo); //quitar o eliminar?
}

void Empresa::Mantenimiento(Vehiculo* vehiculo)
{
	vehiculo->PasosMantenimiento();
	vehiculo->setFechaUltMantenimiento();
	//llama a la funcion de mantenimiento de cada vehiculo
}

string Empresa::tostring()
{
	string cadena="\nAlquileres";
	for (int i = 0; i <ListaAlquileres->CA ; i++)
	{
		cadena += ListaAlquileres->vector[i]->tostring();
	}
	cadena += "\nClientes";
	for (int i = 0; i < ListaAlquileres->CA; i++)
	{
		cadena += ListaClientes->vector[i]->tostring();
	}
	cadena += "\nVehiculos";
	for (int i = 0; i < ListaAlquileres->CA; i++)
	{
		cadena += ListaVehiculos->vector[i]->tostring();
	}
	return cadena;
}
