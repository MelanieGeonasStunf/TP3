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

	cout << "\nTrafics:" << endl;
	miEmpresa->getlistaAlq()->ListarAlquileres(trafic);
	cout << "La ganancia total de los alquileres de los trafic es de: $" << miEmpresa->getlistaAlq()->GananciaTrafic() << endl;
	
	cout << "\nAutomoviles:\n";
	miEmpresa->getlistaAlq()->ListarAlquileres(automovil);
	cout << "La ganancia total de los alquileres de los automoviles es de: $" << miEmpresa->getlistaAlq()->GananciaAuto() << endl;
	
	cout << "\Camionetas:\n";
	miEmpresa->getlistaAlq()->ListarAlquileres(camioneta);
	cout << "La ganancia total de los alquileres de las camionetas es de: $" << miEmpresa->getlistaAlq()->GananciaCamioneta() << endl;
	
	cout << "\Motocicletas:\n";
	miEmpresa->getlistaAlq()->ListarAlquileres(moto);
	cout << "La ganancia total de los alquileres de las motos es de: $" << miEmpresa->getlistaAlq()->GananciaMoto() << endl;
	
	cout << "\nMonto Total: $" << miEmpresa->getlistaAlq()->GananciaTotal()<<endl;
	
	delete miEmpresa;
	system("pause");

	/*
	-UML
	-Verificar eliminar vehiculo
	-Excepciones
	*/

	//BOLUDECES:
	/*
	-capacidad-> const int
	-UML:
		-Alquiler-> ponemos cosas con*?

	*/
}

/*
 - Sabemos que puede haber varios alquileres con un mismo vehiculo (en distintas fechas), pero al tener
que utilizar las funciones de lista template no podemos
 - Se imprime medio mal los pasos de mantenimiento 

*/