#include "Empresa.h"

Empresa::Empresa()
{
}

Empresa::~Empresa()
{
}

void Empresa::Alquilar(Alquiler* alquiler)
{
	// se agrega  un alquiler a la lista de alquileres.
	if (CA_alquileres == TAM_alquileres)
	{
		//redimensionar!
	}

	ListaAlquileres[CA_alquileres].AgregarItem(alquiler); //deberia igualarlo a algo pq retorna un booleano; y tambien tira un throw
	ListaClientes[CA_clientes].AgregarItem(alquiler->getCliente());

}

void Empresa::Adquirir(Vehiculo* vehiculo)
{
	// agrega un vehiculo lista vehiculos
	ListaVehiculos[CA_vehiculos].AgregarItem(vehiculo); //deberia igualarlo a algo pq retorna un booleano; y tambien tira un throw
}

void Empresa::Retirar(Vehiculo* vehiculo)
{
	// quita vehiculo lista vehiculos
}

void Empresa::Mantenimiento(Vehiculo* vehiculo)
{
	//llama a la funcion de mantenimiento de cada vehiculo
}
