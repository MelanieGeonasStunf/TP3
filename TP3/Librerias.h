#pragma once
#include <string>
#include <iostream>
#include <ctime>
#include "cListaT.h"


class Alquiler;
class Clientes;
class Empresa;
using namespace std;

//#include "cListaDeriv.h"
enum {camioneta=0,automovil,trafic,moto};

typedef enum {casco, sillaseguridad, asientorebatible, portaequipaje}elementosSeg;
cListaT<Clientes>* ListandoClientes();
void ListandoVehiculos(Empresa *emp);
void AlquilarVehiculo_(Empresa* Empresa_);
void setMonto1(Alquiler* &alquiler);