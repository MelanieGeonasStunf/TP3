#include "cListaDeriv.h"
//template<class T
cListaDeriv::cListaDeriv()
{
}
//template<class T>
cListaDeriv::~cListaDeriv()
{
}

void cListaDeriv::ListarAlquileres(int vehiculoimprimir)
{
	cListaT<Alquiler>* motos = new cListaT<Alquiler>(CA);
	cListaT<Alquiler>* automoviles = new cListaT<Alquiler>(CA);
	cListaT<Alquiler>* camionetas = new cListaT<Alquiler> (CA);
	cListaT<Alquiler>*trafics = new cListaT<Alquiler>(CA);
	int cant_motocicletas = 0, cant_automovil=0, cant_trafic = 0, cant_camioneta = 0;
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
				camionetas->vector[cant_camioneta] = vector[i];
				cant_camioneta++;
			}
		}
		cout << *camionetas;
		break;
	case automovil:
		for (int i = 0; i < CA; i++)
		{
			if (vector[i] == NULL || vector[i]->vehiculo == NULL)
				return;//excep
			Vehiculo* v = vector[i]->vehiculo;
			Automovil* ptr = dynamic_cast<Automovil*>(v);
			if (ptr != NULL)
			{
				automoviles->vector[cant_automovil] = vector[i];
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
				trafics->vector[cant_trafic] = vector[i];
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
				motos->vector[cant_motocicletas] = vector[i];
				cant_motocicletas++;
			}
		}
		cout << *motos;
		break;
	}
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


