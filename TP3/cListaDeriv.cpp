#include "cListaDeriv.h"
//template<class T
cListaDeriv::cListaDeriv(unsigned int TAM=NMAX):cListaT<Alquiler>()
{
}
//template<class T>
cListaDeriv::~cListaDeriv()
{
}

void cListaDeriv::OrdenarAlquileres(int vehiculoimprimir)
{
	Alquiler** motos = new Alquiler * [CA];
	Alquiler** automoviles = new Alquiler * [CA];
	Alquiler** camionetas = new Alquiler * [CA];
	Alquiler** trafics = new Alquiler * [CA];
	int cant_motocicletas = 0, cant_automovil, cant_trafic = 0, cant_camioneta = 0;
	for (int i = 0; i < CA; i++)
	{
		motos[i] = NULL;
		trafics[i] = NULL;
		automoviles[i] = NULL;
		camionetas[i] = NULL;
	}
	switch (vehiculoimprimir)
	{
	case camioneta:
		for (int i = 0; i < CA; i++)
		{
			if (vector[i] == NULL || vector[i]->vehiculo == NULL)
				return;
			Vehiculo* v = vector[i]->vehiculo;
			Camioneta* ptr = dynamic_cast<Camioneta*>(v);
			if (ptr != NULL)
			{
				camionetas[cant_camioneta] = vector[i];
				cant_camioneta++;
				//imprimir
			}
		}
		break;
	case automovil:
		for (int i = 0; i < CA; i++)
		{
			if (vector[i] == NULL || vector[i]->vehiculo == NULL)
				return;
			Vehiculo* v = vector[i]->vehiculo;
			Automovil* ptr = dynamic_cast<Automovil*>(v);
			if (ptr != NULL)
			{
				automoviles[cant_automovil] = vector[i];
				cant_automovil++;
				//imprimir
			}
		}
		break;
	case trafic:
		for (int i = 0; i < CA; i++)
		{
			if (vector[i] == NULL || vector[i]->vehiculo == NULL)
				return;
			Vehiculo* v = vector[i]->vehiculo;
			Trafic* ptr = dynamic_cast<Trafic*>(v);
			if (ptr != NULL)
			{
				trafics[cant_trafic] = vector[i];
				cant_trafic++;
				//imprimir
			}
		}
		break;
	case moto:
		for (int i = 0; i < CA; i++)
		{
			if (vector[i] == NULL || vector[i]->vehiculo == NULL)
				return;
			Vehiculo* v = vector[i]->vehiculo;
			Motocicleta* ptr = dynamic_cast<Motocicleta*>(v);
			if (ptr != NULL)
			{
				camionetas[cant_motocicletas] = vector[i];
				cant_motocicletas++;
				//imprimir
			}
		}
		break;
	}
	/*for (int i = 0; i < CA; i++)
	{
		if (vector[i] == NULL||vector[i]->vehiculo==NULL)
			return;

		Vehiculo *v = vector[i]->vehiculo;
		Motocicleta *ptr = dynamic_cast<Motocicleta*>(v);
		if (ptr != NULL)
		{
			aux[canttotal] = vector[i];
			canttotal++;
		}
	}
	for (int i = 0; i < CA; i++)
	{
		if (vector[i] == NULL || vector[i]->vehiculo == NULL)
			return;
		Vehiculo* v = vector[i]->vehiculo;
		Automovil* ptr = dynamic_cast<Automovil*>(v);
		if (ptr != NULL)
		{
			aux[canttotal] = vector[i];
			canttotal++;
		}

	}
	for (int i = 0; i < CA; i++)
	{
		if (vector[i] == NULL || vector[i]->vehiculo == NULL)
			return;
		Vehiculo* v = vector[i]->vehiculo;
		Camioneta* ptr = dynamic_cast<Camioneta*>(v);
		if (ptr != NULL)
		{
			aux[canttotal] = vector[i];
			canttotal++;
		}

	}
	for (int i = 0; i < CA; i++)
	{
		if (vector[i] == NULL || vector[i]->vehiculo == NULL)
			return;
		Vehiculo* v = vector[i]->vehiculo;
		Trafic* ptr = dynamic_cast<Trafic*>(v);
		if (ptr != NULL)
		{
			aux[canttotal] = vector[i];
			canttotal++;
		}
	}
	delete[] vector;
	vector = aux;*/
}
