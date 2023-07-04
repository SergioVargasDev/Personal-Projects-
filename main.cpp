#include "CuentaBanco.h"
#include <iostream>
#include <string>
using namespace std;

#include <iostream>
#include "Fecha.h"
#include "CuentaBanco.h"

void regalo(CuentaBanco arrBanco[], int cantClientes){

}


int main(int argc, const char * argv[]) {
    Fecha hoy, ayer, fecha{2, 3};
  


    CuentaBanco arrBanco[] = { CuentaBanco("Mexico", 1000, Fecha{28,11}),
        CuentaBanco("Argentina", 1000, Fecha{29,11}),
        CuentaBanco("Alemania", 5000, Fecha{30,11}),
        CuentaBanco("Brasil",  5000, Fecha{1,12}),
    };
    CuentaBanco lugar{"Katar 2022", 1000, Fecha{20,11}};



    int opcion;
    
    cin >> opcion;
    while (opcion != 0){
        switch (opcion) {
            case 1://setDia y setMes 10
                hoy = Fecha{10,10};
                hoy.setDia(5);
                hoy.setMes(12);
                break;
                
            case 2: // getDia( ) , getMes( ) 5
                cout << hoy.getDia() << endl;
                cout << hoy.getMes() << endl;

                break;
                
            case 3:// str( ) 10
                cout << hoy.str( ) << endl;
                break;
                
            case 4: // 10
                lugar = CuentaBanco{};
                lugar = CuentaBanco{"Katar", 2022, Fecha{20,11}};
                cout << lugar.str() << endl;
                break;
                
            case 5: // 10 sets
                lugar.setNombre("Monterrey");
                lugar.setSaldo(3000);
                lugar.setApertura(Fecha{31,12});
                cout << lugar.str() << endl;
                break;
                
            case 6: // 10
                cout << lugar.getNombre() << '$' << lugar.getSaldo() << '-' << lugar.getApertura().str() << endl;
                break;
                
            case 7:// 10
                lugar.deposito(5);
                lugar.deposito(-1000);
                cout << lugar.str() << endl;
                break;
                
            case 8: // 10
                lugar.retiro(-1000);
                lugar.retiro(5);
                cout << lugar.str() << endl;
                break;
            
            case 9: // 10
                cout << CuentaBanco{"Argentina", 2022, Fecha{2,2}}.str() << endl;
                break;
            case 10: // 15 cuando añadas la función quita el comentario // de la llamada
                // regalo(arrBanco, 4);
                break;

            default:
                break;
        }

        cin >> opcion;
    }
    return 0;
}