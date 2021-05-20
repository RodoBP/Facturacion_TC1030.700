/*Luis Rodolfo Bojórquez Pineda A01250513
TC1030
Programación Orientada a Objetos
Grupo 700
20 de mayo de 2021*/
#include <iostream>
using namespace std;

#include "HerenciaEstudiante.h"
#include "HerenciaMaestro.h"
#include "FuncionesEM.h"

int main(void){
    Estudiante arregloE[100]; // Arreglo de Estudiantes
    Maestro arregloM[100]; // Arrglo de Maestros
    Estudiante e;
    Maestro m;
    int contM = 0;
    int contE = 0;


    while(true){
        int opc;
        cout << "\nBienvenido al sistema de registro." << endl;
        cout << "Ingrese el numero de la opcion correspondiente que desee llevar a cabo." << endl;
        cout << "1 ) Agregar estudiantes" <<endl;
        cout << "2 ) Agregar maestros" <<endl;
        cout << "3 ) Visualizar registro de maestros y estudiantes" << endl;
        cout << "4 ) Visualizar registro de estudiantes" << endl;
        cout << "5 ) Visualizar registro de maestros" << endl;
        cout << "6 ) Salir" << endl;
        cin >> opc;
        if (opc == 1){
            AgregarEstudiantes(arregloE, contE);
        }
        else if(opc == 2){
            AgregarMaestros(arregloM, contM);
        }
        else if(opc == 3){
            MostrarMaesEs(arregloM,arregloE, contE, contM);
        }
        else if(opc == 4){
            MostrarEstudiantes(arregloE, contE);
        }
        else if(opc == 5){
            MostrarMaestros(arregloM, contM);
        }
        else if(opc == 6){
            exit(1);
        }
        else{
            while (opc < 1 || opc > 6){
            cout << "Favor de ingresar un numero valido:" << endl;
            cin >> opc;
            }
        }

    }

    return 0;
}