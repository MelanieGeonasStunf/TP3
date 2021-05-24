#include "cListaDeriv.h"
//template<class T
cListaDeriv::cListaDeriv()
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
	int cant_motocicletas = 0, cant_automovil=0, cant_trafic = 0, cant_camioneta = 0;
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
			}
		}
		cout << *camionetas;
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
			}
		}
		cout << *automoviles;
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
			}
		}
		cout << *trafics;
		break;
	case moto:
		for (int i = 0; i < CA; i++)
		{
			if (vector[i] == NULL || vector[i]->vehiculo == NULL)
				return;//throw exception
			Vehiculo* v = vector[i]->vehiculo;
			Motocicleta* ptr = dynamic_cast<Motocicleta*>(v);
			if (ptr != NULL)
			{
				motos[cant_motocicletas] = vector[i];
				cant_motocicletas++;
			}
		}
		cout << *motos;
		break;
	}
	for (int i = 0; i < CA; i++)
	{
		delete motos[i];
		delete trafics[i];
		delete automoviles[i];
		delete camionetas[i];
	}
	delete[] motos;
	delete[] trafics;
	delete[] automoviles;
	delete[] camionetas;

}

int cListaDeriv::GananciaAuto()
{
	int Tarifa = 0;
	for (int i = 0; i < CA; i++)
	{
		if (vector[i] == NULL || vector[i]->vehiculo == NULL)
			return 0;
		Vehiculo* v = vector[i]->vehiculo;
		Automovil* ptr = dynamic_cast<Automovil*>(v);
		if (ptr != NULL)
		{
			Tarifa = vector[i]->monto + Tarifa;
		}
	}
	return Tarifa;
}

int cListaDeriv::GananciaMoto()
{
	int Tarifa = 0;
	for (int i = 0; i < CA; i++)
	{
		if (vector[i] == NULL || vector[i]->vehiculo == NULL)
			return 0;
		Vehiculo* v = vector[i]->vehiculo;
		Motocicleta* ptr = dynamic_cast<Motocicleta*>(v);
		if (ptr != NULL)
		{
			Tarifa = vector[i]->monto + Tarifa;
		}
	}
	return Tarifa;
}

int cListaDeriv::GananciaCamioneta()
{
	int Tarifa = 0;
	for (int i = 0; i < CA; i++)
	{
		if (vector[i] == NULL || vector[i]->vehiculo == NULL)
			return 0;
		Vehiculo* v = vector[i]->vehiculo;
		Camioneta* ptr = dynamic_cast<Camioneta*>(v);
		if (ptr != NULL)
		{
			Tarifa = vector[i]->monto + Tarifa;
		}
	}
	return Tarifa;
}

int cListaDeriv::GananciaTrafic()
{
	int Tarifa = 0;
	for (int i = 0; i < CA; i++)
	{
		if (vector[i] == NULL || vector[i]->vehiculo == NULL)
			return 0;
		Vehiculo* v = vector[i]->vehiculo;
		Trafic* ptr = dynamic_cast<Trafic*>(v);
		if (ptr != NULL)
		{
			Tarifa =vector[i]->monto + Tarifa;
		}
	}
	return Tarifa;
}

int cListaDeriv::GananciaTotal(int TarifaAuto, int TarifaMoto, int TarifaCam, int TarifaTrafic)
{
	int TarifaTotal = TarifaAuto + TarifaMoto + TarifaCam + TarifaTrafic;
	return TarifaTotal;
}


