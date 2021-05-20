#pragma once
#define NMAX 10

#include <string>

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

	void operator+(T* miObjeto);

	//istream& operator<<( )
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
	if (i_f != NULL)throw new exception("Ya se encuentra en la lista");

	if (CA < TAM)
		vector[CA++] = item;
	else throw new exception("No hay tama�o suficiente para agregar el item");;
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
	if (pos >= CA)return NULL;
	return QuitarenPos(pos);
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
inline T* cListaT<T>::operator[](unsigned int pos)
{
	return T(pos);
}


template<class T>
 inline void cListaT<T>::operator+( T* miObjeto)
{
	 if (lista.AgregarItem(miObjeto) == true) //Miren la nota al final de este archivo
		 return lista;
	
	 throw "No se pudo agregar.";
	 
	 /*else
		 return NULL;*/
}

 /*Ojo, no está bien llamar a lista. En primer lugar, lista no es nada en este ámbito que es el error que van a tener cuando traten de compilar esto
no sé si se quieren referir a vector, en cuyo caso tampcoo está bien porque vector es solamente eso, un vector,
entonces lo que tienen que hacer es acceder directamente al método AgregarItem, es un método adentro de la misma clase entonces no vana  a tener problemas.
Por otra parte, tenía varios errores en el operator, en primer lugar les faltaba el operador de ámbito. En segundo lugar,
la sobrecarga solo puede recibir un parámetro, que es el que va a ir a la derecha del operador. El operador es como un método
entonces ya está implícito que lo voy a acceder desde un objeto de esta clase (lo que va a la izquierda del operador) (por eso lista está mal)
Por otra parte, no me parece que el operador + deba devolver nada. A lo sumo podría devolver un bool*/