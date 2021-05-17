#include "Empresa.h"

void Empresa::Alquilar(Clientes* cliente)
{
	// se agrega  un alquiler a la lista de alquileres.
	if (CA_alquileres == TAM_alquileres)
	{
		//redimensionar!
	}
	ListaAlquileres[CA_alquileres]= AgregarItem<Alquiler>(cliente);
	
	
}

void Empresa::Adquirir()
{
	// agrega un vehiculo lista vehiculos
}

void Empresa::Retirar()
{
	// quita vehiculo lista vehiculos
}

void Empresa::Mantenimiento()
{
	//llama a la funcion de mantenimiento de cada vehiculo
}
