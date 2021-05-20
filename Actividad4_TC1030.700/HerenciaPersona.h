#ifndef HerenciaPersona.h
#define HerenciaPersona.h

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

#endif