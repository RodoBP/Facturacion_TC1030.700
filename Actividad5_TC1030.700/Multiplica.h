#include "ClassOperacion.h"

class Multiplica: public Operacion
{
public:
    void operar();
};


void Multiplica::operar()
{
    resultado=valor1*valor2;
}