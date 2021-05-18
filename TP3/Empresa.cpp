#include "Empresa.h"

Empresa::Empresa()
{
}

Empresa::~Empresa()
{
}

void Empresa::Alquilar(Clientes* cliente)
{
	// se agrega  un alquiler a la lista de alquileres.
	if (CA_alquileres == TAM_alquileres)
	{
		//redimensionar!
	}
	ListaAlquileres[CA_alquileres]= AgregarItem<Alquiler>(cliente);
	
	
}

void Empresa::Adquirir(Vehiculo* vehiculo)
{
	// agrega un vehiculo lista vehiculos
}

void Empresa::Retirar(Vehiculo* vehiculo)
{
	// quita vehiculo lista vehiculos
}

void Empresa::Mantenimiento(Vehiculo* vehiculo)
{
	//llama a la funcion de mantenimiento de cada vehiculo
}
