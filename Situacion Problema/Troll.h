#include "Personajes.h"
#include <stdlib.h>
#include <stdio.h> 
#include <time.h> 
#include <Windows.h>

class Troll : public Personaje {
    protected:

    public:
        Troll();
        int randomMonedas();
};

Troll::Troll(){
    nombre = "TrollMalo";
    monedas = 0;
    HP = 100;
}


int Troll::randomMonedas(){
    srand(time(0));


    Sleep(500);
    srand (time(NULL));
    int min = 20;
    int max = 100;
    int range = max - min + 1;
    int monran = rand() % range + min;

    monedas = monran;
    return monedas;
}