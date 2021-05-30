#include "Personajes.h"

class Jugador : public Personaje {
    public:
        Jugador();
        Jugador(string);
};

Jugador::Jugador(){
    nombre = "nadie";
    monedas = 0;
    HP = 50;
}

Jugador::Jugador(string nom): Personaje(nom) {
    nombre = nom;
    monedas = 0;
    HP = 50;
}
