
#include <iostream>
#include "Laboratorio.h"

using namespace std;

int main()
{
    Computadora c01;
    c01.setNombre_Equipo("DELL L A T I T U D E E5410");
    c01.setModelo("5400");
    c01.setSistema_Operativo("Windows 10");
    c01.setMemoria_Ram("6144MB RAM");

    Laboratorio lab;

    Computadora c04;
    cin>>c04;
    cout<<endl;
    Computadora c02;
    cin>>c02;
    lab<<c01<<c02<<c04;

    lab.Mostrar();

    return 0;
}
