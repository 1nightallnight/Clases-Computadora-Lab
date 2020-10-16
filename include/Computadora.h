#ifndef COMPUTADORA_H
#define COMPUTADORA_H
#include <iostream>
#include <iomanip>

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

friend ostream& operator<<(ostream &out, Computadora &c)
{
    out<<left;
    out<<setw(30)<<c.Nombre_Equipo;
    out<<setw(17)<<c.Modelo;
    out<<setw(22)<<c.Sistema_Operativo;
    out<<setw(16)<<c.Memoria_Ram;
    out<<endl;

    return out;
}
friend istream& operator>>(istream &in, Computadora &c)
{
    cout<< "Nombre: ";
    getline(cin,c.Nombre_Equipo);
    cout<< "Modelo: ";
    getline(cin,c.Modelo);
    cout<< "Sistema Op: ";
    getline(cin,c.Sistema_Operativo);
    cout<< "Memoria RAM: ";
    getline(cin,c.Memoria_Ram);


    return in;
}
};
#endif // COMPUTADORA_H
