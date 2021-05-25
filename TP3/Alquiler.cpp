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
   /* if (elemento1 != NULL)
        delete elemento1;
    if (elemento2 != NULL)
        delete elemento2;*/

}

string Alquiler::tostring()
{
    string cadena = "\nAlquiler: " + clave + '\n' +
        "  Cliente: " + cliente->tostring() + 
        "  Vehiculo: " + vehiculo->tostring() + 
        "  Fecha Inicio: " + to_string(FechaInicio.tm_mday) + '/' +
        to_string(FechaInicio.tm_mon) + '/' + to_string(FechaInicio.tm_year) + '\n'
        + "  Fecha Fin:" + to_string(FechaFin.tm_mday) + '/' +
        to_string(FechaFin.tm_mon) + '/' + to_string(FechaFin.tm_year) + '\n' +
        "  Monto:" + to_string(monto)+'\n'+'\n';

    return cadena;
}

Clientes* Alquiler::getCliente()
{
    return cliente;
}

string Alquiler::getclave()
{
    return vehiculo->getclave();
}

Vehiculo* Alquiler::getVeh()
{
    return vehiculo;
}

void Alquiler::setmonto()
{
    try {
        VerificarTipo();
        float cantdias = CalcularTiempo();
        float monto = cantdias * vehiculo->getprecioDia();
        if (elemento1 != NULL)
            monto += cantdias * elemento1->CalcularTarifa();
        if (elemento2 != NULL)
            monto += cantdias * elemento2->CalcularTarifa();
        this->monto = monto;
    }
    catch (string excep)
    {
        throw excep;
    }
}

int Alquiler::CalcularTiempo()
{
    string exc = "Fechas ingresadas no disponibles";
    FechaInicio.tm_year -= 1900;
    FechaFin.tm_year -= 1900;

    tm* fechaI = &FechaInicio;
    tm* fechaF = &FechaFin;
    time_t inicio = mktime(fechaI);
    time_t fin = mktime(fechaF);
    double difference = difftime(fin, inicio);
    int dif = difference;
    if (difference <= 0){
        throw exc;
    }
    int dias =(int)difference/86400;
    return dias;
}

void Alquiler::VerificarTipo()
{
    string excep = "No se puede agregar este elemento adicional al vehiculo";
    if (elemento1 != NULL)
    {
        Vehiculo* v = vehiculo;

        Automovil* autom=dynamic_cast<Automovil*>(v);
        if (autom != NULL && elemento1->getTipo() != 1)
            throw excep;
        Motocicleta* moto = dynamic_cast<Motocicleta*>(v);
        if (moto != NULL && elemento1->getTipo() != 0)
            throw excep;
        Camioneta* cam = dynamic_cast<Camioneta*>(v);
        if (cam != NULL && elemento1->getTipo() != 1) {
            if (elemento1->getTipo() != 3)
                throw excep;
        }
        Trafic* traf = dynamic_cast<Trafic*>(v);
        if (traf != NULL && elemento1->getTipo() != 1) {
            if (elemento1->getTipo() != 2)
                throw excep;
        }
    }
    if (elemento2 != NULL)//en el caso que el elemento de seguridad 1 no concuerda con el vehiculo tira
        //la excepcion sin importar si el elemento 2 concuerda
    {
        Vehiculo* v = vehiculo;
        Automovil* autom = dynamic_cast<Automovil*>(v);
        if (autom != NULL && elemento2->getTipo() != 1)
            throw excep;
        Motocicleta* moto = dynamic_cast<Motocicleta*>(v);
        if (moto != NULL && elemento2->getTipo() != 0)
            throw excep;
        Camioneta* cam = dynamic_cast<Camioneta*>(v);
        if (cam != NULL && elemento2->getTipo() != 1) {
            if (elemento2->getTipo() != 3)
                throw excep;
        }
        Trafic* traf = dynamic_cast<Trafic*>(v);
        if (traf != NULL && elemento2->getTipo() != 1) {
            if (elemento2->getTipo() != 2)
                throw excep;
        }
    }
}



