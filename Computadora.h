#ifndef COMPUTADORA_H
#define COMPUTADORA_H
#include <iostream>

using namespace std;

class Computadora
{
    string Sistema_Operativo;
    string Memoria_Ram;
    string Nombre_Equipo;
    string Modelo;

public:
    Computadora();
    Computadora(const string &Sistema_Operativo, const string &Nombre_Equipo, const string &Modelo, const string &Memoria_Ram);
void setNombre_Equipo(const string &l);
string getNombre_Equipo();
void setSistema_Operativo(const string &l);
string getSistema_Operativo();
void setMemoria_Ram(const string &l);
string getMemoria_Ram();
void setModelo(const string &l);
string getModelo();
};
#endif // COMPUTADORA_H
