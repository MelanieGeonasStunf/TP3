#pragma once
#include <string>
#include <iostream>
#include <ctime>
#include "cListaT.h"

class Alquiler;
//#include "cListaDeriv.h"
enum {camioneta=0,automovil,trafic,moto};

typedef enum {casco, sillaseguridad, asientorebatible, portaequipaje}elementosSeg;
using namespace std;

void setMonto1(Alquiler* &alquiler);