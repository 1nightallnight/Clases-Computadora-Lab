#include "Laboratorio.h"
#include <iomanip>
#include <fstream>

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

void Laboratorio::Respaldar_Tabla()
{
    ofstream archivo("ComputadorasTABLA.txt");
    if(archivo.is_open())
    {
         archivo<<endl;
         archivo<<left;
         archivo<<setw(30)<<"Nombre";
         archivo<<setw(17)<<"Modelo";
         archivo<<setw(22)<<"Sistema Op";
         archivo<<setw(16)<<"Memoria RAM";
         archivo<<endl;
        for(size_t i=0;i<cont;i++)
       {
           Computadora &c=arreglo[i];
           archivo<<c;
       }
    }
    archivo.close();
}

void Laboratorio::Respaldar()
{
    ofstream archivo("Computadoras.txt");
    if(archivo.is_open())
    {
        for(size_t i=0;i<cont;i++)
       {
           Computadora &c=arreglo[i];
           archivo<<c.getNombre_Equipo()<<endl;
           archivo<<c.getModelo()<<endl;
           archivo<<c.getSistema_Operativo()<<endl;
           archivo<<c.getMemoria_Ram()<<endl;

       }
    }
    archivo.close();
}

void Laboratorio::Recuperar()
{
    ifstream archivo("Computadoras.txt");
    if(archivo.is_open())
    {
        string temp;
        Computadora c;

        while(true)
        {
            getline(archivo, temp); //leer nombre del equipo
            if(archivo.eof())
               {
                   break;

               }
            c.setNombre_Equipo(temp);
            getline(archivo, temp); //leer modelo
            c.setModelo(temp);
            getline(archivo, temp); //leer Sistema
            c.setSistema_Operativo(temp);
            getline(archivo, temp); //leer memoria
            c.setMemoria_Ram(temp);

            Agregarfinal(c);
        }
    }
    archivo.close();
}

