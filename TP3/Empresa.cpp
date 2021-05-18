#include "Empresa.h"

//dejarlo para cuando sepamos usar lista template
void Empresa::Alquilar(Clientes* cliente)
{
	// se agrega  un alquiler a la lista de alquileres.
	bool ok;
	ok = AgregarItem <Alquiler> (cliente);		
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
