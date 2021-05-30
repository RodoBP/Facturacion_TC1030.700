#ifndef Personajes_h
#define Personajes_h

#include "Monedas.h"
#include "Medallon.h"

class Personaje {
    protected:
        string nombre;
        int monedas;
        int HP;
        vector<Item*> inventario;
    public:
        Personaje();
        Personaje(string);

        virtual string getName();
        virtual int getMonedas();
        virtual int getVida();

        void setName(string);

        void addItemMoneda();
        void addItemMedallon();

        void showInventory();

};

Personaje::Personaje() {
    nombre = "nadie";
    HP = 0;
    monedas = 0;
} 

Personaje::Personaje(string nom) {
    nombre = nom;
}

string Personaje::getName(){
    return nombre;
}

int Personaje::getMonedas(){
    return monedas;
}

int Personaje::getVida(){
    return HP;
}

void Personaje::addItemMoneda(){

    Item* objItems;

    monedas++;
    
    objItems = new Moneda();

    inventario.push_back(objItems);

    cout<<inventario[0]->getName()<<endl;
}

void Personaje::addItemMedallon(){

    Item* objItems;

    objItems = new Medallon();

    inventario.push_back(objItems);

}

void Personaje::setName(string n){
    nombre = n;
}

void Personaje::showInventory(){
    
    cout <<endl;
    cout << "----------Mostrando Inventario:----------"<<endl;
    for(int i = 0; i<inventario.size(); i++){
        cout<< inventario[i]->getName()<<"="<<monedas<<endl;
        cout<< inventario[i]->getDescripcion()<<endl;
    }
}


#endif
