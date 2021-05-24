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

cListaT<Clientes>* Empresa::getlistaCli()
{
	return ListaClientes;
}

cListaT<Vehiculo>* Empresa::getListaVeh()
{
	return ListaVehiculos;
}

void Empresa::Alquilar(Alquiler* alquiler)
{
	try
	{
		setMonto1(alquiler);
	}
	catch (string ex)
	{
		throw ex;
	}
	try
	{
		*ListaAlquileres + alquiler;
		/*if (ListaAlquileres[ListaAlquileres->CA].AgregarItem(alquiler)== true || 
			ListaClientes[ListaClientes->CA].AgregarItem(alquiler->getCliente())==true)
			return;*/
	}
	catch (Alquiler* Alquiler)
	{
		throw "No se pudo alquilar el vehiculo: "+Alquiler->getclave()+'\n';
	}

	//deberia igualarlo a algo pq retorna un booleano; y tambien tira un throw
}

void Empresa::Adquirir(Vehiculo* veh)
{
	// agrega un vehiculo lista vehiculos
	//deberia igualarlo a algo pq retorna un booleano; y tambien tira un throw
	try
	{
		*ListaVehiculos + veh;
		//if (ListaVehiculos[ListaVehiculos->CA].AgregarItem(vehiculo) == true)
		return;
	}
	catch (Vehiculo*veh)
	{
		throw veh;
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
