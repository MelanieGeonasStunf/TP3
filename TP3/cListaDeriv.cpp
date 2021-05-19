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
T** cListaDeriv::ListarAlquileres()
{
	//T** aux;
	Motocicleta** listaMotos;
	Automovil** listaAutos;
	Camioneta** listCam;
	Trafic** listaTrafics;

	for(i=0;)
	for (int i = 0; i < CA; i++)
	{
		if (vector[i] == NULL||vector[i]->vehiculo==NULL)
			return;

		Vehiculo *v = vector[i]->vehiculo;
		// Fijarse	que tipo de vehiculo es v y ponerlo en la lista correspondiente
		T* ptr = dynamic_cast<T*>(v);
		if (ptr != NULL)
		{
			//aux[i]
		}

	}
}
