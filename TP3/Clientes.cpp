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
	string cadena = "\nNombre: " + Nombre + '\n' + "\nDNI:" + DNI;
	return cadena;
}
