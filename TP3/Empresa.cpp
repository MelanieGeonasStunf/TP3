#include "Empresa.h"
Empresa::Empresa()
{
	//!!!!!
}

Empresa::~Empresa()
{
}

void Empresa::Alquilar(Alquiler* alquiler)
{
	try
	{
		if (ListaAlquileres[CA_alquileres].AgregarItem(alquiler)== true || 
			ListaClientes[CA_clientes].AgregarItem(alquiler->getCliente())==true)
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
		if (ListaVehiculos[CA_vehiculos].AgregarItem(vehiculo) == true)
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
	ListaVehiculos[CA_vehiculos].Quitar(vehiculo); //quitar o eliminar?
}

void Empresa::Mantenimiento(Vehiculo* vehiculo)
{
	vehiculo->PasosMantenimiento();
	vehiculo->setFechaUltMantenimiento();
	//llama a la funcion de mantenimiento de cada vehiculo
}
