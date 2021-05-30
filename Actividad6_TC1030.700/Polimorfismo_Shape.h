#ifndef Polimorfismo_Shape_h
#define Polimorfismo_Shape_h

class Shape {
    public:
        Shape();
        Shape(int, int);
        int getValueX();
        int getValueY();
        virtual void draw();
        int x;
        int y;
};

Shape::Shape() {
    x = 0;
    y = 0;
}

Shape::Shape(int valx, int valy) {
    x = valx;
    y = valy;
}

void Shape::draw() {        // VIRTUAL only in declaraction
    cout << "Soy una figura sin identidad :(" << endl;
}

int Shape::getValueX() {
    return x;
}

int Shape::getValueY() {
    return y;
}

#endif
