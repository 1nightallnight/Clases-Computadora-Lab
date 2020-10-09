#include "Laboratorio.h"

Laboratorio::Laboratorio()
{
    cont=0;
}

void Laboratorio::Agregarfinal(const Computadora &c)
{
    if(cont<5)
    {
        arreglo[cont]=c;
        cont++;
    }
    else{
        std::cout<<"Arreglo lleno"<<endl;
    }
}

void Laboratorio::Mostrar()
{
    for(size_t i=0;i<cont;i++)
    {
        Computadora &c=arreglo[i];
        std::cout<<"Nombre del Equipo: "<<c.getNombre_Equipo()<<endl;
        std::cout<<"Modelo del Equipo: "<<c.getModelo()<<endl;
        std::cout<<"Sistema Operativo: "<<c.getSistema_Operativo()<<endl;
        std::cout<<"Memoria RAM: "<<c.getMemoria_Ram()<<endl;

    }
}
