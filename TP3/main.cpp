#include "Librerias.h"
#include "Alquiler.h"
#include "cListaDeriv.h"
#include"Clientes.h"


int main()
{
	cListaDeriv *lista=new cListaDeriv();
	lista->OrdenarAlquileres(moto);
	cListaT<Clientes>* ListaCl;
	Clientes* cl1 = new Clientes("Pili","44120931");
	Clientes* cl2 = new Clientes("Belu","1234567");
	
	ListaCl=ListaCl+cl1;
	
}