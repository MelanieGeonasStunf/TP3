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
	*ListaCl + cl1;
	*ListaCl + cl2;
	//funcion para crear lista de vehiculos
	
	Automovil* auto1 = new Automovil("MZU789", "Blanco", 1212, 11234,5, 200);
	*ListaVehiculos + auto1;

	//Motocicleta* moto1= new Motocicleta("IUM187","Negro", 1234, 30230, 2);
	// //el precio opcional se debe poner al crear el alquiler
	//*ListaVehiculos + moto1;
	//funcion para crear alquileres
	cElementosSeg* elemento1= new cElementosSeg (casco, 2);
	cElementosSeg* elemento2 = new cElementosSeg(sillaseguridad, 1);
	Alquiler* Alquiler1 = new Alquiler(cl1,auto1, elemento1, elemento2, { 00,00,00,15,02,2021 }, { 00,00,00,20,02,2021 }, "1234");//1 mes
	//Alquiler* Alquiler2 = new Alquiler(cl2, moto1, 2, { 0,0,0,20,6,2021 }, { 0,0,0,10,06,2021 }, "9234");//fechas negativas! bool de elementos adicionales
	//no se que es el error
	
	*lista + Alquiler1;

	cout <<miEmpresa->tostring();
	
	//*lista + Alquiler2;
	//lista->OrdenarAlquileres(moto);

	for (int i = 0; i < lista->CA; i++)
	{
		try {
			lista->vector[i]->setmonto();
		}
		catch (string excep)
		{
			cout << excep;
		}
	}//hacer con clista?

	/*FALTA HACER
	-.
	-main
	-.
	-mantenimiento
	-excepciones
	-elementos adicionales
	-UML
	*/
	system("pause");
	Vehiculo* autom = (*ListaVehiculos)[0];

	delete lista;
	delete ListaCl;
	delete ListaVehiculos;
	delete miEmpresa;
}