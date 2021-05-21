/*Luis Rodolfo Bojórquez Pineda A01250513
TC1030
Programación Orientada a Objetos
Grupo 700
20 de mayo de 2021*/

#include <iostream>
using namespace std;

#include "Multiplica.h"
#include "Resta.h"
#include "Suma.h"

int main(){
    Multiplica m;
    Resta r;
    Suma s;

    while(true){
        int opc;
        cout << "\nBienvenido!." << endl;
        cout << "Ingrese el numero de la opcion correspondiente que desee llevar a cabo." << endl;
        cout << "1 ) Sumar" <<endl;
        cout << "2 ) Restar" <<endl;
        cout << "3 ) Multiplicar" << endl;
        cout << "4 ) Salir" << endl;
        cin >> opc;
        if (opc == 1){
            s.cargar1();
            s.cargar2();
            s.operar();
            s.mostrarResultado();
        }
        else if(opc == 2){
            r.cargar1();
            r.cargar2();
            r.operar();
            r.mostrarResultado();
        }
        else if(opc == 3){
            m.cargar1();
            m.cargar2();
            m.operar();
            m.mostrarResultado();
        }
        else if(opc == 4){
            exit(1);
        }
        else{
            while (opc < 1 || opc > 4){
            cout << "Favor de ingresar un numero valido:" << endl;
            cin >> opc;
            }
        }

    }
    return 0;
};

