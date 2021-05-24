#include "Librerias.h"
#include "Alquiler.h"
#include "Empresa.h"

void setMonto1(Alquiler*& alquiler)
{
	try {
		alquiler->setmonto();
	}
	catch (string excep)
	{
		//cout << excep;
		alquiler = NULL;
		throw excep;
	}
}
cListaT<Clientes>* ListandoClientes()
{
	cListaT<Clientes>* lista = new cListaT<Clientes>();
	Clientes* cl1 = new Clientes("Damon Salvatore", "1000601");
	*lista + cl1;//poner excep
	cl1 = new Clientes("Stefan Salvatore", "1033931");
	*lista + cl1;
	cl1 = new Clientes("Elena Gilbert", "40992310");
	*lista + cl1;
	cl1 = new Clientes("Caroline Forbes", "41002123");
	*lista + cl1;
	cl1 = new Clientes("Bonnie Bennett", "40222134");
	*lista + cl1;
	cl1 = new Clientes("Klaus Mikaelson", "00000100");
	*lista + cl1;
	cl1 = new Clientes("Katerina Petrova", "00900100");
	*lista + cl1;
	cl1 = new Clientes("Tyler Lockwood", "40900120");
	*lista + cl1;
	cl1 = new Clientes("Jeremy Gilbert", "42121933");
	*lista + cl1;
	cl1 = new Clientes("Alaric Saltzman", "32441209");
	*lista + cl1;
	return lista;
}
void ListandoVehiculos(Empresa*emp)
{ 
	Automovil* auto1 = new Automovil("MZU789", "Blanco", 1212, 11234, 5);
	try {
		emp->Adquirir(auto1);
	}
	catch (Vehiculo *v)
	{
		cout << "\nNo se pudo agregar el vehiculo " << v->getclave() << " a la lista." << endl;
	}
	Motocicleta* moto1 = new Motocicleta("IUM187","Negro", 1234, 30230,2);
	try {
		emp->Adquirir(moto1);
	}
	catch (Vehiculo* v)
	{
		cout << "\nNo se pudo agregar el vehiculo " << v->getclave() << " a la lista." << endl;
	}
	Trafic*trafic1=new Trafic("CIF342", "Blanco",994443 ,22334455, 10);
	try {
		emp->Adquirir(trafic1);
	}
	catch (Vehiculo* v)
	{
		cout << "\nNo se pudo agregar el vehiculo " << v->getclave() << " a la lista." << endl;
	}
	Camioneta* cam1 = new Camioneta("DEL845", "Plateado", 9367, 3401, 6);
	try {
		emp->Adquirir(cam1);
	}
	catch (Vehiculo* v)
	{
		cout << "\nNo se pudo agregar el vehiculo " << v->getclave() << " a la lista." << endl;
	}
	auto1 = new Automovil("HIJ999", "Rojo", 1212,394034, 5);
	try {
		emp->Adquirir(auto1);
	}
	catch (Vehiculo* v)
	{
		cout << "\nNo se pudo agregar el vehiculo " << v->getclave() << " a la lista." << endl;
	}
	moto1 = new Motocicleta("LMN990", "Violeta", 9909, 82934,2);
	try {
		emp->Adquirir(moto1);
	}
	catch (Vehiculo* v)
	{
		cout << "\nNo se pudo agregar el vehiculo " << v->getclave() << " a la lista." << endl;
	}
	trafic1 = new Trafic("JHI123", "Negro", 9900020, 10902, 10);
	try {
		emp->Adquirir(trafic1);
	}
	catch (Vehiculo* v)
	{
		cout << "\nNo se pudo agregar el vehiculo " << v->getclave() << " a la lista." << endl;
	}
	cam1 = new Camioneta("TRO229", "Amarillo", 5454, 22321, 6);
	try {
		emp->Adquirir(cam1);
	}
	catch (Vehiculo* v)
	{
		cout << "\nNo se pudo agregar el vehiculo " << v->getclave() << " a la lista." << endl;
	}
	auto1 = new Automovil("PRR222", "Verde", 6212, 784034, 5);
	try {
		emp->Adquirir(auto1);
	}
	catch (Vehiculo* v)
	{
		cout << "\nNo se pudo agregar el vehiculo " << v->getclave() << " a la lista." << endl;
	}
	moto1=new Motocicleta("PQR999", "Rojo", 61121, 293043, 2);
	try {
		emp->Adquirir(moto1);
	}
	catch (Vehiculo* v)
	{
		cout << "\nNo se pudo agregar el vehiculo " << v->getclave() << " a la lista." << endl;
	}
}
void AlquilarVehiculo_(Empresa* Empresa_)
{
	/*- Las motocicletas pueden añadir el alquiler de uno o dos cascos.
- Los autos pueden alquilar sillas de seguridad para niños.
- Las camionetas pueden alquilar sillas de seguridad para niños y/o portaequipaje
adicional.
- Las trafic pueden alquilar sillas de seguridad para niños y/o asientos rebatibles que
pueden instalarse en el pasillo a forma de asiento auxiliar.*/
	cElementosSeg* elemento1 = new cElementosSeg(casco, 2);
	cElementosSeg* elemento2 = new cElementosSeg(sillaseguridad, 1);
	cElementosSeg* elemento3 = new cElementosSeg(asientorebatible, 2);
	cElementosSeg* elemento4 = new cElementosSeg(portaequipaje, 1);
	if (Empresa_ != NULL) {
		cListaT<Clientes>* LC = Empresa_->getlistaCli();
		cListaT<Vehiculo>* LV = Empresa_->getListaVeh();

		Alquiler* Alquiler1 = new Alquiler((*LC)[0], (*LV)[0], elemento1, elemento2, { 00,00,00,15,02,2021 }
		, { 00,00,00,20,02,2021 }, "1234");//1 mes, no se realiza el alquiler
		try {
			Empresa_->Alquilar(Alquiler1);
		}
		catch(string exc){
			cout << exc << endl;
		}
		Alquiler1 = new Alquiler((*LC)[1], (*LV)[1], elemento1, elemento2, { 0,0,0,20,6,2021 },
			{ 0,0,0,10,7,2021 }, "9234");//no se reaiza, elementos de seguridad erroneos
		try {
			Empresa_->Alquilar(Alquiler1);
		}
		catch (string exc) {
			cout << exc << endl;
		}
		Alquiler1 = new Alquiler((*LC)[2], (*LV)[2], elemento3, elemento2, { 00,00,00,11,05,2021 }
		, { 00,00,00,23,01,2022 }, "505");//se alquila correctamente
		try {
			Empresa_->Alquilar(Alquiler1);
		}
		catch (string exc) {
			cout << exc << endl;
		}
		Alquiler1 = new Alquiler((*LC)[3], (*LV)[3], elemento2, elemento4, { 00,00,00,11,05,2021 }
		, { 00,00,00,10,04,2021 }, "501");//dias negativos
		try {
			Empresa_->Alquilar(Alquiler1);
		}
		catch (string exc) {
			cout << exc << endl;
		}
		Alquiler1 = new Alquiler((*LC)[3], (*LV)[3], elemento2, elemento4, { 00,00,00,11,05,2021 }
		, { 00,00,00,10,04,2022 }, "508");//mismo alquiler con distinta fecha
		try {
			Empresa_->Alquilar(Alquiler1);
		}
		catch (string exc) {
			cout << exc << endl;
		}
		Alquiler1 = new Alquiler((*LC)[3], (*LV)[3], elemento2, elemento4, { 00,00,00,11,05,2021 }
		, { 00,00,00,10,04,2022 }, "556");//alquiler repetido
		try {
			Empresa_->Alquilar(Alquiler1);
		}
		catch (string exc) {
			cout << exc << endl;
		}
		Alquiler1 = new Alquiler((*LC)[4], (*LV)[4], elemento2,NULL, { 00,00,00,10,05,2021 }
		, { 00,00,00,11,05,2021 }, "120");//alquilo 1 solo elemeneto de seguridad
		try {
			Empresa_->Alquilar(Alquiler1);
		}
		catch (string exc) {
			cout << exc << endl;
		}
		Alquiler1 = new Alquiler((*LC)[5], (*LV)[5], NULL,NULL, { 00,00,00,10,8,2021 }
		, { 00,00,00,1,9,2021 }, "123");//No alquila ningun elemento de seguridad
		try {
			Empresa_->Alquilar(Alquiler1);
		}
		catch (string exc) {
			cout << exc << endl;
		}
		Alquiler1 = new Alquiler((*LC)[6], (*LV)[6], NULL, elemento2, { 00,00,00,10,8,2021 }
		, { 00,00,00,1,9,2021 }, "222");//se realiza el alquiler
		try {
			Empresa_->Alquilar(Alquiler1);
		}
		catch (string exc) {
			cout << exc << endl;
		}
	}
}
