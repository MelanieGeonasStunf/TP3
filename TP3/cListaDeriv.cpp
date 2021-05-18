#include "cListaDeriv.h"
//template<class T>
cListaDeriv::cListaDeriv()
{
}
//template<class T>
cListaDeriv::~cListaDeriv()
{
}
template<class T>
T** cListaDeriv::OrdenarAlquileres()
{
	T** aux;
	for(i=0;)
	for (int i = 0; i < CA; i++)
	{
		if (vector[i] == NULL||vector[i]->vehiculo==NULL)
			return;
		Vehiculo *v = vector[i]->vehiculo;
		T* ptr = dynamic_cast<T*>(v);
		if (ptr != NULL)
		{
			aux[i]
		}

	}
}
