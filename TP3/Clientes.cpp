#include "Clientes.h"

Clientes::Clientes(string Nombre,string DNI)
{
	this->Nombre = Nombre;
	this->DNI = DNI;
}

Clientes::~Clientes()
{
}

string Clientes::getclave()
{
	return DNI;
}

string Clientes::tostring()
{
	string cadena = "\n\tNombre: " + Nombre + '\n'+'\t' + "DNI:" + DNI + '\n';
	return cadena;
}
