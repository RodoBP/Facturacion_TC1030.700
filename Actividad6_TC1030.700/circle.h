#include "Polimorfismo_Shape.h"
#define _USE_MATH_DEFINES

class Circle : public Shape {
    private:
        int r;
    public:
        Circle();
        Circle(int, int, int);
        void draw();
        int getValueR();
};

Circle::Circle() : Shape() {
    r = 0;
}

Circle::Circle(int valx, int valy, int valr) : Shape(valx, valy) {
    r = valr;
}

void Circle::draw() {
    int r = getValueR();
    int a = M_PI * pow(r, 2);

    cout << "Soy un circulo de area " << a << endl << endl;
}

int Circle::getValueR() {
    return r;
}