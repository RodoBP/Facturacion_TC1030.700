#include <iostream>
#define _USE_MATH_DEFINES
using namespace std;

#include <cmath>           
#include "Polimorfismo_Shape.h"
#include "circle.h"
#include "rectangle.h"

int main(){

    Shape *Shapes[5];

    Shapes[0] = new Circle();
    Shapes[1] = new Rectangle();
    Shapes[2] = new Rectangle(1, 2, 6, 5);
    Shapes[3] = new Circle(3, 4, 6);
    Shapes[4] = new Rectangle();

    for (int i = 0; i < 5; i++) {
        Shape *current = Shapes[i];
        current -> draw();
    }

    return 0;
}