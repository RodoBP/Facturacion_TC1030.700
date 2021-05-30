#ifndef Items_h
#define Items_h

class Item{
    protected:
        string name;
        string descripcion;
        int HP;
    public:
        Item();

        virtual string getName();
        virtual string getDescripcion();
        virtual int getHP();

        virtual void use();

};

Item::Item(){
    name = "";
    descripcion = "";
    HP = 0;
}

string Item::getName(){
    return name;
}

string Item::getDescripcion(){
    return descripcion;
}

int Item::getHP(){
    return HP;
}

void Item::use(){
    cout<<"Este use no se debe llamar"<<endl;
}

#endif