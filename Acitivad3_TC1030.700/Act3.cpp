/* Silvana Dorita Ruiz Olivarría A01252346
Luis Rodolfo Bojórquez Pineda A01250513
TC1030
Programación Orientada a Objetos
Grupo 700
19 de mayo de 2021*/
#include <iostream>
using namespace std;

class Persona {
public:
    string getNombre();
    int getEdad();
protected:
    string nombre;
    int edad;
};
string Persona::getNombre(){
    return nombre;
}
int Persona::getEdad(){
    return edad;
}


class Estudiante: public Persona {
public:
    Estudiante(){
        nombre = "nobody";
        edad =0;
        carrera = "ninguna";
};
    Estudiante(string n, int e, string c){
        nombre = n;
        edad = e;
        carrera = c;
};
    string getCarrera();
    void setCarrera();
    void muestraDatos();
private:
    string carrera;

};

string Estudiante::getCarrera(){
    return carrera;
}

/*void Estudiante::setCarrera(){
    cout<<"Ingrese la carrera del estudiante"<<endl;
    cin>>carrera;
}*/

void Estudiante::muestraDatos(){
    cout<< "Nombre"<<"\t"<<"Edad"<<"\t"<<"Carrera" <<endl;
    cout<<nombre<<"\t"<<edad<<"\t"<<carrera<<endl;
}

class Maestro: public Persona {
public:
    Maestro();
    Maestro(string, int, string);
    string getDepto();
    void setDepto();
    void muestraDatos();
private:
    string depto;

};
Maestro::Maestro():Persona(){
    nombre= "nobody";
    edad = 0;
    depto = "ninguna";
};
Maestro:: Maestro(string n, int e, string d):Persona(){
    nombre = n;
    edad = e;
    depto = d;
};


string Maestro::getDepto(){
    return depto;
}
void Maestro::muestraDatos(){
    cout<< "Nombre"<<"\t"<<"Edad"<<"\t"<<"Departamento" <<endl;
    cout<<nombre<<"\t"<<edad<<"\t"<<depto<<endl;
}

// Función para adición de estudiantes
void AgregarEstudiantes(Estudiante miArregloE[]){
    string nombreE = "";
    int edadE = 0;
    string carreraE = "";
    int contE = -1;
    string ans = "";
    while(ans != "n"){
        cout << "Favor de ingresar el nombre del estudiante"<<endl;
        cin >> nombreE;
        contE ++;
        Estudiante setCarrera();
        cout << "Ingrese la carrera del estudiante" << endl;
        cin >> carreraE;
        cout << "Desea agregar otro estudiante? s/n" << endl;
        cin >> ans;
        Estudiante unEstudiante(nombreE,edadE,carreraE);
        miArregloE[contE] = unEstudiante;
    }
}
// Función para adicionar maestros
void AgregarMaestros(Maestro miArregloM[]){
    string nombreM = "";
    int edadM = 0;
    string dep ="";
    int contM = -1;
    string ans = "";
    while(ans != "n"){
        cout << "Favor de ingresar el nombre del maestro"<<endl;
        cin >> nombreM;
        contM ++;
        cout << "Ingrese la edad del maestro" << endl;
        cin >> edadM;
        cout << "Ingrese el departamento del maestro" << endl;
        cin >> dep;
        cout << "Desea agregar otro maestro? s/n" << endl;
        cin >> ans;
        Maestro unMaestro(nombreM,edadM,dep);
        miArregloM[contM] = unMaestro;
    }

}

// Impresión de registro de maesstros
void MostrarMaestros(Maestro miArregloM[]){
    cout << "Nombre    Edad    Departamento" << endl;
    for (int i = 0; i < sizeof(miArregloM)/sizeof(miArregloM[0]);i++){
        cout << miArregloM[i].getNombre() << miArregloM[i].getEdad() << miArregloM[i].getDepto()<<endl;
        //miArregloM[i].muestraDatos();
        
    }
}

// Impresión de registro de estudiantes
void MostrarEstudiantes(Estudiante miArregloE[]){
    cout << "Nombre    Edad    Carrera" << endl;
    for (int i = 0; i < sizeof(miArregloE)/sizeof(miArregloE[0]);i++){
        //miArregloE[i].muestraDatos();
        cout << miArregloE[i].getNombre() << miArregloE[i].getEdad() << miArregloE[i].getCarrera()<<endl;
        
    }
}

void MostrarMaesEs(Maestro miArregloM[],Estudiante miArregloE[]){
    MostrarMaestros(miArregloM);
    MostrarEstudiantes(miArregloE);
}

int main(void){
    Estudiante arregloE[100]; // Arreglo de Estudiantes
    Maestro arregloM[100]; // Arrglo de Maestros
    Estudiante e;
    Maestro m;


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
            AgregarEstudiantes(arregloE);
        }
        else if(opc == 2){
            AgregarMaestros(arregloM);
        }
        else if(opc == 3){
            MostrarMaesEs(arregloM,arregloE);
        }
        else if(opc == 4){
            MostrarEstudiantes(arregloE);
        }
        else if(opc == 5){
            MostrarMaestros(arregloM);
        }
        else if(opc == 6){
            exit(1);
        }
        else{
            while (opc < 1 || opc > 5){
            cout << "Favor de ingresar un numero valido:" << endl;
            cin >> opc;
            }
        }

    }

    return 0;
}