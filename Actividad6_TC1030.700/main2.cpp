//Luis Rodolfo Bojorquez Pineda - A01250513
//Tc1030 Grupo 700
//27 de mayo del 2021


#include <iostream>
#include <vector>

using namespace std;
#define _USE_MATH_DEFINES
#include <cmath>
#include "Polimorfismo_Shape.h"
#include "rectangle.h"
#include "circle.h"

int main(){
    vector<Shape*> vecShape;
    Shape *objShape;

    objShape = new Circle(5,6,7);
    vecShape.push_back(objShape);
    
    objShape = new Rectangle(5,6,7,8);
    vecShape.push_back(objShape);

    for (int i = 0; i < vecShape.size();i++){
        vecShape[i]->draw();
    }
    
    return 0;
}