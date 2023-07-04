#ifndef CUENTABANCO_H
#define CUENTABANCO_H
#include <iostream>
#include <string>
using namespace std;
#include "Fecha.h"
#pragma once


class CuentaBanco
{

private:
    string nombre;
    int saldo;
    Fecha apertura;

public:
    CuentaBanco();
    CuentaBanco(string _nombre, int _saldo, Fecha _apertura);
    
    void setNombre(string _nombre);
    void setSaldo(int _saldo);
    void setApertura(Fecha _apertura);
    
    string getNombre();
    int getSaldo();
    Fecha getApertura();

    void deposito(int deposito);
    void retiro(int retiro);

    string str();


    



};

#endif