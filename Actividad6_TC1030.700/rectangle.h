#include "Polimorfismo_Shape.h"

class Rectangle : public Shape {
    private:
        int xr;
        int yr;
    public:
        Rectangle();
        Rectangle(int, int, int, int);
        void draw();
        int getValueXR();
        int getValueYR();
};

Rectangle::Rectangle() : Shape() {
    xr = 0;
    yr = 0;
}

Rectangle::Rectangle(int valX, int valY, int valXR, int valYR) : Shape(valX, valY) {
    xr = valXR;
    yr = valYR;
}

void Rectangle::draw() {
    int xr = getValueXR();
    int xy = getValueYR();
    int a = xr*xy;

    cout << "Soy un rectangulo de area " << a << endl << endl;
}

int Rectangle::getValueXR() {
    return xr;
}

int Rectangle::getValueYR() {
    return yr;
}