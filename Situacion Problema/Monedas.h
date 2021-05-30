#include "Items.h"

class Moneda: public Item{
    public:
        Moneda();
        virtual void use();

};

Moneda::Moneda(){
    name = "Moneda";
    descripcion = "Has reunido riquezas!";
    HP = 0;
    cout<< "Conseguiste una moneda"<<endl;
}

void Moneda::use(){

    cout<<"Este medallon hace algo pero el profe no nos ha dicho."<<endl;
}