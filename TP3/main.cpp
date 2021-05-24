#include "Librerias.h"
#include "Alquiler.h"
#include "cListaDeriv.h"
#include"Clientes.h"
#include "cListaT.h"
#include "Empresa.h"
#include "Motocicleta.h"


int main()
{
	Empresa* miEmpresa = new Empresa(new cListaT<Vehiculo>(), ListandoClientes(), new cListaDeriv());
	ListandoVehiculos(miEmpresa);
	AlquilarVehiculo_(miEmpresa);
	cout << *(miEmpresa->getlistaAlq());
	miEmpresa->getlistaAlq()->ListarAlquileres(automovil);
	delete miEmpresa;
	system("pause");
	
	

}

/*Sabemos que puede haber varios alquileres con un mismo vehiculo (en distintas fechas), pero al tener
que utilizar las funciones de lista template no podemos*/