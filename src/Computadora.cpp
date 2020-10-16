#include "Computadora.h"

Computadora::Computadora()
{

}

Computadora::Computadora(const string &Sistema_Operativo, const string &Nombre_Equipo, const string &Modelo, const string &Memoria_Ram)
{
    this-> Nombre_Equipo=Nombre_Equipo;
    this-> Memoria_Ram=Memoria_Ram;
    this-> Sistema_Operativo=Sistema_Operativo;
    this-> Modelo=Modelo;
}

void Computadora::setNombre_Equipo(const string &l)
{
    Nombre_Equipo=l;
}

string Computadora::getNombre_Equipo()
{
    return Nombre_Equipo;
}

void Computadora::setMemoria_Ram(const string &l)
{
    Memoria_Ram=l;
}

string Computadora::getMemoria_Ram()
{
    return Memoria_Ram;
}

void Computadora::setModelo(const string &l)
{
    Modelo=l;
}

string Computadora::getModelo()
{
    return Modelo;
}

void Computadora::setSistema_Operativo(const string &l)
{
    Sistema_Operativo=l;
}

string Computadora::getSistema_Operativo()
{
    return Sistema_Operativo;
}
