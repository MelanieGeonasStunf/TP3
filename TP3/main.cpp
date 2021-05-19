#include "Librerias.h"
#include "Alquiler.h"
#include "cListaDeriv.h"
#include"Clientes.h"
#include "cListaT.h"

int main()
{
	cListaDeriv *lista=new cListaDeriv();
	lista->OrdenarAlquileres(moto);
	cListaT<Clientes>* ListaCl;
	Clientes* cl1 = new Clientes("Pili");
	Clientes* cl2 = new Clientes("Belu");
	
	ListaCl+cl1;
	
}