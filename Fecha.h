#ifndef FECHA_H
#define FECHA_H
#include <iostream>
#include <string>
using namespace std;
#pragma once



class Fecha
{


private:
 int dia;
 int mes; 


public:
    Fecha();
    Fecha(int _dia, int  _mes);

    void setDia(int _dia);
    void setMes(int _mes);

    int getDia();
    int getMes();

    string str();


};

#endif