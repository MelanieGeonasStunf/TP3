#include "cListaDeriv.h"

cListaDeriv::cListaDeriv()
{

}

cListaDeriv::~cListaDeriv()
{
}

Alquiler** cListaDeriv::OrdenarAlquileres()
{
	
	for (int i = 0; i < CA; i++)
	{
		if (vector[i] == NULL||vector[i]->vehiculo==NULL)
			return;
		Vehiculo *v = vector[i]->vehiculo;
		Motocicleta* ptr = dynamic_cast<Motocicleta*>(v);//no se sabe
		if(ptr!=NULL)

	}
}
