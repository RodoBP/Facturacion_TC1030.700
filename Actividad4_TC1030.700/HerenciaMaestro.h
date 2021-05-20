#include "HerenciaPersona.h"

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
    cout<<nombre<<"\t"<< edad<<"\t"<<depto<<endl;
}