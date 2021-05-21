#include "Librerias.h"
#include "Alquiler.h"
#include "cListaDeriv.h"
#include"Clientes.h"
#include "cListaT.h"
#include "Empresa.h"
#include "Motocicleta.h"


int main()
{
	cListaDeriv* lista = new cListaDeriv();
	cListaT<Clientes>* ListaCl = new cListaT<Clientes>;
	cListaT<Vehiculo>* ListaVehiculos = new cListaT<Vehiculo>;
	Empresa* miEmpresa = new Empresa(ListaVehiculos, ListaCl, lista);
	//fucion para crear una lista de clientes
	Clientes* cl1 = new Clientes("Pili", "44120931");
	Clientes* cl2 = new Clientes("Belu", "1234567");
	//funcion para crear lista de vehiculos
	Automovil* auto1 = new Automovil("MZU789", "Blanco", 1212, 11234, 5000, 5, 200);
	cout << auto1;
	Motocicleta*moto1= new Motocicleta("IUM187","Negro", 1234, 30230, 3000, 2, 100,500);//el precio opcional se debe poer al crear el alquiler
	//funcion para crear alquileres
	Alquiler* Alquiler1 = new Alquiler(cl1,auto1, 2, { 0,0,0,20,5,2021 }, { 0,0,0,22,5,2021 }, "1234");//no se que es el error
	*ListaCl+cl1;
	*lista + Alquiler1;
	*ListaVehiculos + auto1;
	*ListaVehiculos + moto1;
	lista->OrdenarAlquileres(moto);//hacer con clista?
	Alquiler1->setmonto();
	/*FALTA HACER
	-operadores
	-main
	-
	*/
	delete lista;
	delete ListaCl;
	delete ListaVehiculos;
	delete miEmpresa;
}