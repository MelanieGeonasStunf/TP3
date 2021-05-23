#include "Librerias.h"
#include "Alquiler.h"

void setMonto1(Alquiler*& alquiler)
{
	try {
		alquiler->setmonto();
	}
	catch (string excep)
	{
		cout << excep;
		alquiler = NULL;
	}
}






















/*
cListaT<Vehiculo> ListaVehiculos()
{ 
cListaT<Vehiculo> *autitos=new cListaT();

}

* void AlquilarVehiCulo(Empresa *Empresa)
{
  
}
*/