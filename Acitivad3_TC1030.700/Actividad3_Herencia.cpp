/* Silvana Dorita Ruiz Olivarría A01252346
Luis Rodolfo Bojórquez Pineda A01250513
TC1030
Programación Orientada a Objetos
Grupo 700
19 de mayo de 2021*/
#include <iostream>
using namespace std;

class Persona{
    public:
        Persona(); // Constructor Default
        Persona(string n, int e);
        string getNombre();
        void setNombre(string n);
        int getEdad();
        void setEdad(int e);
        void muestraDatos();


    protected:
        string nombre;
        int edad;

};
Persona::Persona(){ // Constructor Default
    nombre = "nobody";
    edad = 0;
}

Persona::Persona(string n,int e){ // Constructor Default
    nombre = n;
    edad = e;
}
string Persona::getNombre(){
    return nombre;
}
void Persona::setNombre(string n){
    nombre = n;
}
int Persona::getEdad(){
    return edad;
}
void Persona::setEdad(int e){
    edad = e;
}
void Persona::muestraDatos(){
    cout<<"Nombre   Edad" <<endl;
    cout<< nombre << "\t" << edad << endl;
}


class Estudiante: public Persona{
    public:
        Estudiante();
        Estudiante(string n, int e, string c);
        string getCarrera();
        void setCarrera(string c);
        void muestraDatos();
    private:
        string carrera;
};

Estudiante::Estudiante() : Persona(){
    nombre = "nobody";
    edad = 0;
    carrera = "ninguna";
}

Estudiante::Estudiante(string n,int e,string c):Persona(n,e){
    nombre = n;
    edad = e;
    carrera = c;
}

string Estudiante::getCarrera(){
    return carrera;
}

void Estudiante::setCarrera(string c){
    carrera = c;
}

void Estudiante::muestraDatos(){
    //cout << "Nombre    Edad    Carrera" << endl;
    cout << nombre <<"\t"<<edad<<"\t"<<carrera<<endl;
}

class Maestro: public Persona{
    public:
        Maestro();
        Maestro(string n, int e, string d);
        string getDepto();
        void setDepto(string d);
        void muestraDatos();

    private:
        string depto;
};

Maestro::Maestro(): Persona(){
    nombre = "nobody";
    edad = 0;
    depto = "ninguno";
}
Maestro::Maestro(string n,int e,string d): Persona(n,e){
    nombre = n;
    edad = e;
    depto = d;
}
string Maestro::getDepto(){
    return depto;
}
void Maestro::setDepto(string d){
    depto = d;
}
void Maestro::muestraDatos(){
    //cout<<"Nombre    Edad    Departamento"<<endl;
    cout<<nombre<<"\t"<< edad<<"\t"<<depto<<endl;
}

// Función para adición de estudiantes
void AgregarEstudiantes(Estudiante miArregloE[], int &contE){
    string nombreE = "";
    int edadE = 0;
    string carreraE = "";
    string ans = "";
    while(ans != "n"){
        cout << "Favor de ingresar el nombre del estudiante"<<endl;
        cin >> nombreE;
        cout << "Ingrese la edad del estudiante" << endl;
        cin >> edadE;
        cout << "Ingrese la carrera del estudiante" << endl;
        cin >> carreraE;
        cout << "Desea agregar otro estudiante? s/n" << endl;
        cin >> ans;
        Estudiante unEstudiante(nombreE,edadE,carreraE);
        miArregloE[contE] = unEstudiante;
        cout << miArregloE[0].getCarrera()<<endl;
        contE ++;
    }
}
// Función para adicionar maestros
void AgregarMaestros(Maestro miArregloM[],int &contM){
    string nombreM = "";
    int edadM = 0;
    string dep ="";
    string ans = "";
    while(ans != "n"){
        cout << "Favor de ingresar el nombre del maestro"<<endl;
        cin >> nombreM;
        cout << "Ingrese la edad del maestro" << endl;
        cin >> edadM;
        cout << "Ingrese el departamento del maestro" << endl;
        cin >> dep;
        cout << "Desea agregar otro maestro? s/n" << endl;
        cin >> ans;
        Maestro unMaestro(nombreM,edadM,dep);
        miArregloM[contM] = unMaestro;
        contM++;
    }

}

// Impresión de registro de maesstros
void MostrarMaestros(Maestro miArregloM[], int contM){
    cout << "Nombre"<<"\t" <<"Edad"<<"\t" <<"Departamento" << endl;
    for (int i = 0; i < contM;i++){
        cout << miArregloM[i].getNombre()<<"\t" << miArregloM[i].getEdad()<<"\t" << miArregloM[i].getDepto()<<endl;
        //miArregloM[i].muestraDatos();
        
    }
}

// Impresión de registro de estudiantes
void MostrarEstudiantes(Estudiante miArregloE[], int &contE){
    cout << "Nombre"<<"\t" <<"Edad"<<"\t" <<"Carrera" << endl;
    for (int i = 0; i < contE;i++){
        //miArregloE[i].muestraDatos();
        cout << miArregloE[i].getNombre() <<"\t"<< miArregloE[i].getEdad() <<"\t"<< miArregloE[i].getCarrera()<<endl;
        
    }
}

void MostrarMaesEs(Maestro miArregloM[],Estudiante miArregloE[], int &contE, int &contM){
    MostrarMaestros(miArregloM, contM);
    MostrarEstudiantes(miArregloE, contE);
}

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
            while (opc < 1 || opc > 5){
            cout << "Favor de ingresar un numero valido:" << endl;
            cin >> opc;
            }
        }

    }

    return 0;
}