#include "Alquiler.h"

Alquiler::Alquiler(Clientes* cliente, Vehiculo* vehiculo, cElementosSeg* elemento1,
    cElementosSeg* elemento2, tm FechaInicio, tm FechaFin, string clave_)
{
    this->cliente = cliente;
    this->vehiculo = vehiculo;
    this->elemento1= elemento1;
    this->elemento2 = elemento2;
    this->FechaInicio = FechaInicio;
    this->FechaFin = FechaFin;
    this->monto =0;
    this->clave = clave_;
}

Alquiler::~Alquiler()
{
}

/*const int Alquiler::getclave()
{
    return clave;
}*/

string Alquiler::tostring()
{
    string cadena = "\nAlquiler: " + clave + '\n' +
        "Cliente: " + cliente->tostring() +'\n' + 
        "Vehiculo: " + vehiculo->tostring() + '\n' + 
        "Fecha Inicio: " + to_string(FechaInicio.tm_mday) + '/' +
        to_string(FechaInicio.tm_mon) + '/' + to_string(FechaInicio.tm_year) + '\n'
        + "Fecha Fin:" + to_string(FechaFin.tm_mday) + '/' +
        to_string(FechaFin.tm_mon) + '/' + to_string(FechaFin.tm_year) + '\n' +
        "Monto:" + to_string(monto);

    return cadena;
}

Clientes* Alquiler::getCliente()
{
    return cliente;
}

string Alquiler::getclave()
{
    return clave;
}

void Alquiler::setmonto()
{
    try {
        float monto=CalcularTiempo()*vehiculo->CalcularTarifa();
    }
    catch (string excep)
    {
        throw excep;
    }
    this->monto = monto;
}

int Alquiler::CalcularTiempo()
{
    /*long int fechaI = FechaInicio.tm_year * 10000 + FechaInicio.tm_mon * 100 + FechaInicio.tm_mday;
    long int fechaF = FechaFin.tm_year * 10000 + FechaFin.tm_mon * 100 + FechaFin.tm_mday;
    string exc = "\nLas fechas ingresadas no disponibles";
    int cantdias = fechaF - fechaI;
    if(cantdias<=0)
        throw exc;
    return cantdias;*/
    FechaInicio.tm_year -= 1900;
    FechaFin.tm_year -= 1900;

    tm* fechaI = &FechaInicio;
    tm* fechaF = &FechaFin;
    time_t inicio = mktime(fechaI);
    time_t fin = mktime(fechaF);
    double difference = difftime(fin, inicio);
    int dif = difference;
    if ((int)difference== 0)
        throw "fechas ingresadas no disponibles";
    int dias =(int)difference/86400;
    return dias;
}



