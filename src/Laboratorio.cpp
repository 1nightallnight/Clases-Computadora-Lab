#include "Laboratorio.h"
#include <iomanip>

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
{   cout<<endl;
    cout<<left;
    cout<<setw(30)<<"Nombre";
    cout<<setw(17)<<"Modelo";
    cout<<setw(22)<<"Sistema Op";
    cout<<setw(16)<<"Memoria RAM";
    cout<<endl;
       for(size_t i=0;i<cont;i++)
       {
           Computadora &c=arreglo[i];
           cout<<c;
       }
       /* Computadora &c=arreglo[i];
        std::cout<<"Nombre del Equipo: "<<c.getNombre_Equipo()<<endl;
        std::cout<<"Modelo del Equipo: "<<c.getModelo()<<endl;
        std::cout<<"Sistema Operativo: "<<c.getSistema_Operativo()<<endl;
        std::cout<<"Memoria RAM: "<<c.getMemoria_Ram()<<endl;
*/

}
