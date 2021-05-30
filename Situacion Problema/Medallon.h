#include "Items.h"

class Medallon: public Item{
    public:
        Medallon();
        virtual void use();

};

Medallon::Medallon(){
    name = "Medallon";
    descripcion = "Sientes una gran magia dentro de este medallon.";
    HP = 20;
    cout<<"Conseguiste el Medallon"<<endl;
}


void Medallon::use(){
    cout<<"Este medallon hace algo pero el profe no nos ha dicho."<<endl;
}