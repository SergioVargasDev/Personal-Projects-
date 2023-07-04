#include "CuentaBanco.h"

CuentaBanco::CuentaBanco(){

    Fecha apertura1;
    
    nombre = "Sergio Tomás Vargas Villarreal";
    saldo = 10000;
    apertura = apertura1;
}

CuentaBanco::CuentaBanco(string _nombre, int _saldo, Fecha _apertura){

    nombre = _nombre;
    saldo = _saldo;
    apertura = _apertura;

}

void CuentaBanco::setNombre(string _nombre){
    nombre = _nombre;


}

void CuentaBanco::setSaldo(int _saldo){
    if(_saldo < 0){
        saldo = 0;
        saldo = _saldo;
    }
    else{
        saldo = _saldo;
    }


}


void CuentaBanco::setApertura(Fecha _apertura){
    apertura = _apertura;

}


string CuentaBanco::getNombre(){
    return nombre;


}
int CuentaBanco::getSaldo(){
    return saldo;


}
Fecha CuentaBanco::getApertura(){
    return apertura;


}

void CuentaBanco::deposito(int deposito){
    
    if(deposito > 0){
        saldo = saldo + deposito;
    }

    else if(deposito < 0){
        cout << "Error número negativo"<<endl;
    }
    
}



void CuentaBanco::retiro(int retiro){
    if (retiro <0){
        cout << "No tiene fondos suficientes\n";
    }
    
    else if(saldo>=retiro){
            saldo = saldo - retiro;
            

    }


        }







string CuentaBanco:: str(){
    return nombre + "," + to_string(saldo)  + "," +  apertura.str();



}
