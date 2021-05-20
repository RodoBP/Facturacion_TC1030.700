#include "HerenciaPersona.h"

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
    cout << nombre <<"\t"<<edad<<"\t"<<carrera<<endl;
}