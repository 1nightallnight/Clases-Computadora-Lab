#ifndef LABORATORIO_H
#define LABORATORIO_H
#include "Computadora.h"


class Laboratorio
{
    Computadora arreglo[5];
    size_t cont;

public:
    Laboratorio();
    void Agregarfinal(const Computadora &c);
    void Mostrar();
    void Respaldar_Tabla();
    void Respaldar();
    void Recuperar();

    friend Laboratorio& operator<<(Laboratorio &l, const Computadora &c)
    {
        l.Agregarfinal(c);
        return l;
    }
};

#endif // LABORATORIO_H
