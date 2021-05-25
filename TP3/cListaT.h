#pragma once
#define NMAX 10

#include <string>
#include <iostream>

using namespace std;

template<class T>
class cListaT
{
public:
	T **vector;
	unsigned int CA, TAM;


	void Redimensionalizar();
	cListaT(unsigned int TAM = NMAX);
	~cListaT();

	bool AgregarItem(T *item);
	bool AgregarItemOrdenado(const T *item);

	T* Quitar(string clave);
	T* Quitar(T *item);
	T* QuitarenPos(unsigned int pos);

	void Eliminar(string clave);
	void Eliminar(const T *item);
	void Eliminar(unsigned int pos);

	void Listar();
	T* BuscarItem(string clave);
	T* getItem(unsigned int pos);

	unsigned int getItemPos(string clave);

	unsigned int getCA();
	unsigned int getTAM();

	string toString();

	//SOBRECARGAS
	void operator+(T* miObjeto);
	T* operator[](unsigned int pos);
};


template<class T>
unsigned int cListaT<T>::getTAM()
{
	return TAM;
}

template<class T>
unsigned int cListaT<T>::getCA()
{
	return CA;
}
///////////
template<class T>
void cListaT<T>::Redimensionalizar()
{
	TAM = TAM * 2;
	T** nuevo = new T* [TAM]; //agrando el tamanio de la lista
	for (int i = 0; i < CA; i++)
	{
		nuevo[i] = vector[i];
	}
	
	delete[] vector;
	vector = nuevo;
}

template<class T>
cListaT<T>::cListaT(unsigned int TAM)
{
	vector = new T*[TAM];
	for (unsigned int i = 0; i < TAM; i++)
	{
		vector[i] = NULL;
	}

	this->TAM = TAM;
	CA = 0;


}
template<class T>
cListaT<T>::~cListaT()
{
	if (vector != NULL)
	{
		for (unsigned int i = 0; i < CA; i++)
		{
			if (vector[i] != NULL)
				delete vector[i];
		}
		delete[] vector;
	}


}

template<class T>
void cListaT<T>::Listar()
{

	for (unsigned int i = 0; i < CA; i++)
	{
		vector[i]->Imprimir();// imprimir
	}
}

template<class T>
bool cListaT<T>::AgregarItem(T * item)
{

	T *i_f = BuscarItem(item->getclave());
	if (i_f != NULL)throw  1;//cambie para que sean numeros y hayan 2 opc

	if (CA < TAM)
		vector[CA++] = item;
	else throw 2;
	return true;
}
template<class T>

bool cListaT<T>::AgregarItemOrdenado(const T * item)
{
	/*for (unsigned int i = 0; i < CA; i++)
	{
	if (vector[i]->getclave() == clave)
	return vector[i];
	}
	*/
	return false;
}
template<class T>
T* cListaT<T>::Quitar(string clave) {

	unsigned int pos = getItemPos(clave);
	if (pos >= CA)return NULL;
	return QuitarenPos(pos);

}
template<class T>
T* cListaT<T>::Quitar(T *item) {
	unsigned int pos = getItemPos(item->getclave());
	T* objeto;
	if (pos >= CA)return NULL;
	try
	{
		objeto = QuitarenPos(pos);
	}
	catch (string excep)
	{
		objeto = NULL;
		throw excep;
	}
	return objeto;
}
template<class T>
T* cListaT<T>::QuitarenPos(unsigned int pos) {

	if (pos >= CA)throw new exception("Posicion invalida");

	T *aux = vector[pos];

	for (unsigned int i = 0; i < CA - 1; i++)
	{
		vector[i] = vector[i + 1];
	}

	vector[CA - 1] = NULL;
	CA--;
	return aux;
}

template<class T>
void cListaT<T>::Eliminar(string clave) {

	unsigned int pos = getItemPos(clave);

	if (pos < CA)
		Eliminar(pos);
	//sino algo
	//EXCEPCION
}
template<class T>
void cListaT<T>::Eliminar(const T *item) {

	Eliminar(item->getclave());
}
template<class T>
void cListaT<T>::Eliminar(unsigned int pos) {
	if (pos >= CA)return;// o Throw no pude eliminar

	T *dato = QuitarenPos(pos);

	if (dato != NULL)
		delete dato;
	else
	{
		throw new exception("no encontrado");
	}
}

template<class T>
T* cListaT<T>::BuscarItem(string clave)
{
	for (unsigned int i = 0; i < CA; i++)
	{
		if (vector[i]->getclave() == clave)
			return vector[i];
	}
	return NULL;
}

template<class T>
T* cListaT<T>::getItem(unsigned int pos)
{
	if (pos < CA)
		return vector[pos];
	else return NULL;
}
template<class T>
unsigned int cListaT<T>::getItemPos(string clave)
{
	for (unsigned int i = 0; i < CA; i++)
	{
		if (vector[i]->getclave() == clave)
			return i;
	}

	return INT_MAX;
}

template<class T>
void operator<<(ostream& o, cListaT<T>& object)
{
	o << object.toString() << endl;
}

template<class T>
inline T* cListaT<T>::operator[](unsigned int pos)
{
	return vector[pos];
}


template<class T>
 inline void cListaT<T>::operator+( T* miObjeto)
{
	 bool ok;
	 try {
		 ok = AgregarItem(miObjeto);
	 }
	 catch (int num)
	 {
		 if (num == 1)
			 throw miObjeto;
		 if (num == 2) {
			 Redimensionalizar();
			 ok = AgregarItem(miObjeto);//no deberia saltar ninguna excepcion ya que las anteriores
			 //se arregalron
		 }
	 }
	 if (ok== false) 
		 throw miObjeto;
	 /*else
		 return NULL;*/
}

template<class T>
 string cListaT<T>::toString()
 {
	string cadena;
	 for (int i = 0; i < CA; i++)
	 {
		 cadena += vector[i]->tostring();
	 }
	 return cadena;
 }
