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
	delete ListaClientes;
	delete ListaVehiculos;
	delete ListaAlquileres;
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
		Mantenimiento(alquiler->getVeh());
		*ListaAlquileres + alquiler;
	}
	catch (Alquiler* Alquiler)
	{
		throw "No se pudo alquilar el vehiculo: "+Alquiler->getclave()+'\n';
	}

}

void Empresa::Adquirir(Vehiculo* veh)
{
	// agrega un vehiculo lista vehiculos
	try
	{
		*ListaVehiculos + veh;
		Mantenimiento(veh);
		return;
	}
	catch (Vehiculo*veh)
	{
		throw veh;
	}
	
}

Vehiculo*  Empresa::Retirar(Vehiculo* vehiculo)
{
	Vehiculo* veh=NULL;
	// quita vehiculo lista vehiculos
	try {
		veh = ListaVehiculos->Quitar(vehiculo);
	}
	catch (string exep)
	{
		throw exep;
	}
	return veh;
}

void Empresa::Mantenimiento(Vehiculo* vehiculo)
{
	//se realiza un mantenimiento cada vez que se agrega un alquiler y cada vez que se adquiere un vehiculo
	cout<<vehiculo->PasosMantenimiento();
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
