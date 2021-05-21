#ifndef ClassOperacion.h
#define ClassOperacion.h

class Operacion{
    public:
        void cargar1();
        void cargar2();
        void mostrarResultado();
    protected:
        int valor1, valor2, resultado;

};

void Operacion::cargar1()
{
    cout<<"Ingrese primer valor:";
    cin>>valor1;
}

void Operacion::cargar2()
{
    cout<<"Ingrese segundo valor:";
    cin>>valor2;
}
void Operacion::mostrarResultado()
{
    cout<<resultado<<"\n";
}

#endif