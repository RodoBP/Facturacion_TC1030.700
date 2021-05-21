#include "ClassOperacion.h"

class Suma: public Operacion
{
public:
    void operar();
};

void Suma::operar()
{
    resultado=valor1+valor2;
}