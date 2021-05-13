#include <iostream>
#include <ctime>
#include <windows.h>
#include <string>
using namespace std;

class Vendedor{
    public:
        string Cve_Vendedor;
        string Nombre;
        void AgregarVendedor(string cV, string nV){
            Cve_Vendedor = cV;
            Nombre = nV;
        }
        string ConsultarClave(){
            return Cve_Vendedor;
        }
        string ConsultarNombre(){
            return Nombre;
        }
};

class Inventario{
    public:
        string Cve_Articulo;
        string Descripcion;
        double Precio;
        void AgregarArticulo(string cA, string d, double p){
            Cve_Articulo = cA;
            Descripcion = d;
            Precio = p;
        };
        string ConsultarArticulo(){
            return Cve_Articulo;
        }
        string ConsultarDescripcion(){
            return Descripcion;
        }
        double ConsultarPrecio(){
            return Precio;
        }
};

class Factura{
    public:
        string NumFactura;
        string Cve_Vendedor;
        string Cve_Articulo;
        int Cantidad;
};

string GETDATE(){  // Para ponerle la fecha a la factura
    char out[14];
    std::time_t t=std::time(NULL);
    std::strftime(out, sizeof(out), "%Y%m%d%H%S", std::localtime(&t));
    Sleep(2000);  // pauses for 10 seconds
    return out;
}


int ContadorFactura(Factura arregloFactura[]){
    int contadorFac = -1;
    for (int k=0;k<sizeof(arregloFactura)/sizeof(arregloFactura[0]);k++){
            contadorFac ++;
    }
    return contadorFac;
}




void AgregarVendedor(Vendedor arregloV[]){
// Adición de vendedores mediante input
    int num = 1;
    string claveVend;
    string nameVend;
    Vendedor v;
    cout << "Cuantos vendedores desea agregar?" << endl;
    cin >> num;
        while(num < 1){
           cout << "Cuantos vendedores desea agregar?" << endl;
            cin >> num;    
        }
        for (int contVend = 0; contVend < num; contVend ++){
            cout << "\nIngrese la clave del vendedor: ";
            cin >> claveVend;
            cout << "\nIngrese el nombre del vendedor: ";
            cin >> nameVend;
            v.AgregarVendedor(claveVend, nameVend);
            arregloV[contVend] = v;
        }

}

void AgregarArticulo(Inventario arregloI[]){
    // Adición de articulos mediate input
    Inventario inv;
    string ansArt = "n";
    int numArt = 1;
    string clvArt;
    string descr;
    double price;
    cout << "Cuantos articulos desea agregar?" << endl;
    cin >> numArt;
        while(numArt< 1){
           cout << "Cuantos articulos desea agregar?" << endl;
            cin >> numArt;    
        }
    for (int contArt = 0; contArt < numArt; contArt ++){
        cout << "\nIngrese la clave del articulo: ";
        cin >> clvArt;
        cout << "\nIngrese la descripcion del articulo: ";
        cin >> descr;
        cout << "\nIngrese el precio del articulo: ";
        cin >> price;
        inv.AgregarArticulo(clvArt, descr, price);
        arregloI[contArt] = inv;
    }
   

}

void HacerFactura(Factura arregloF[], Vendedor vend, Inventario inv){
    //GeneraFactura(contadorFactura, arregloF, v1, i2, 3);
    int numFac = 0;
    string cveVend;
    string cveArt;
    string cantidadArt;
    int contadorFac;
    

    // Vendedor de la compra a facturar
    cout << "Favor de ingresar la clave del vendedor para hacer la factura: ";
    cin >> cveVend;

    // Articulo de la compra a facturar
    cout << "Favor de ingresar la clave del articulo: ";
    cin >> cveArt;

    // Cantidad del articulo a comprar
    cout << "Favor de ingresar la cantidad del articulo: ";
    cin >> cantidadArt;
    int intCantArt;
    intCantArt = stoi(cantidadArt);


    Factura f1;
    f1.Cve_Vendedor = cveVend;
    f1.Cve_Articulo =cveArt;
    f1.Cantidad = intCantArt;
    f1.NumFactura = "F" + GETDATE();
    arregloF[contadorFac] = f1;

    cout<<arregloF[0].Cve_Vendedor<<endl;
    cout<<arregloF[1].Cve_Articulo<<endl;

    
    for (int k=0;k<sizeof(arregloF)/sizeof(arregloF[0]);k++){
        contadorFac ++;
    }
}

int main(){

    Vendedor arregloV[1000]; // Arreglo de vendedores
    Inventario arregloI[1000]; // Arreglo de inventario
    Factura arregloF[1000]; // Arreglo de facturas
    Vendedor vend;
    Inventario inv;
    int contadorFac;
    while(true){
        int opc;
        cout << "Bienvenido al sistema de facturacion." << endl;
        cout << "Ingrese el numero de la opcion correspondiente que desee llevar a cabo." << endl;
        cout << "1 ) Agregar vendedores" <<endl;
        cout << "2 ) Agregar articulos" <<endl;
        cout << "3 ) Generar Facturas" <<endl;
        cout << "4 ) Visualizar facturas generadas" << endl;
        cout << "5 ) Salir" << endl;
        cin >> opc;
        if (opc == 1){
            AgregarVendedor(arregloV);
        }
        else if (opc == 2){
            AgregarArticulo(arregloI);
        }
        else if(opc == 3){
            HacerFactura(arregloF, vend, inv);
        }
        else if(opc == 4){
            
            // Imprimimos todas las facturas
            contadorFac = ContadorFactura(arregloF);
            cout << "Facturas Generadas "<< endl;
            cout << "No" <<"\t\t"<<"Vendedor"<<"\t"<<"Articulo"<< endl;
            string nombreArticulo;

            for (int j=0; j<=contadorFac; j++){
                for (int k=0;k<sizeof(arregloI)/sizeof(arregloI[0]);k++){
                    if (arregloF[j].Cve_Articulo == arregloI[k].Cve_Articulo){
                        nombreArticulo = arregloI[k].Descripcion;
                    }
                
                    cout <<arregloF[j].NumFactura<<"\t"
                    <<arregloF[j].Cve_Vendedor<<"\t\t"
                    <<arregloF[j].Cve_Articulo<<"\t"
                    << nombreArticulo <<endl;
                }
            }
        }
        else if(opc == 5){
            exit(1);
        }
        else{
            while (opc < 1 || opc > 5){
            cout << "Favor de ingresar un numero valido:" << endl;
            cin >> opc;
            }
        }
    }

    return 0;
    
}