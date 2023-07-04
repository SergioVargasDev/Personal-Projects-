#include "Fecha.h"


Fecha::Fecha(){
    dia = 1;
    mes = 1;

}
Fecha::Fecha(int _dia, int  _mes){
    dia = _dia;
    mes = _mes;

}

void Fecha:: setDia(int _dia){
    dia = _dia;

}
void Fecha::setMes(int _mes){
    mes = _mes;
}

int Fecha::getDia(){
    return dia;

}

int Fecha::getMes(){
    return mes;

}

string Fecha:: str(){
    if(dia <10 && mes <10 ){
        return "0" + to_string(dia) + "/" + "0" + to_string(mes);
    }

    else if (dia >= 10 && mes <10){
        return to_string(dia) + "/" + "0" + to_string(mes);

    }

    else if (dia < 10 && mes >=10){
        return "0" + to_string(dia) + "/"  + to_string(mes);

    }
    

    else if (dia >= 10 && mes >= 10){
        return  to_string(dia) + "/" + to_string(mes);

    }
    return 0;
}
