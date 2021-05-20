#include "Librerias.h"
#include "Alquiler.h"
#include "cListaDeriv.h"
#include"Clientes.h"
#include "cListaT.h"


int main()
{
	cListaDeriv *lista=new cListaDeriv();
	lista->OrdenarAlquileres(moto);
	cListaT<Clientes> ListaCl;
	Clientes* cl1 = new Clientes("Pili","44120931");
	Clientes* cl2 = new Clientes("Belu","1234567");
	Automovil* auto1 = new Automovil("MZU789", "Blanco", 1212, 11234, 5000, 5, 200);
	Alquiler* Alquiler1 = new Alquiler(cl1,auto1, 2, { 0,0,0,20,5,2021 }, { 0,0,0,22,5,2021 }, "1234");//no se que es el error
	ListaCl+cl1;
	lista + Alquiler1;
	
}