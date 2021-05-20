// Función para adición de estudiantes
void AgregarEstudiantes(Estudiante miArregloE[], int &contE){
    string nombreE = "";
    int edadE = 0;
    string carreraE = "";
    string ans = "";
    while(ans != "n"){
        cout << "Favor de ingresar el nombre del estudiante"<<endl;
        cin >> nombreE;
        cout << "Ingrese la edad del estudiante" << endl;
        cin >> edadE;
        cout << "Ingrese la carrera del estudiante" << endl;
        cin >> carreraE;
        cout << "Desea agregar otro estudiante? s/n" << endl;
        cin >> ans;
        Estudiante unEstudiante(nombreE,edadE,carreraE);
        miArregloE[contE] = unEstudiante;
        contE ++;
    }
}
// Función para adicionar maestros
void AgregarMaestros(Maestro miArregloM[],int &contM){
    string nombreM = "";
    int edadM = 0;
    string dep ="";
    string ans = "";
    while(ans != "n"){
        cout << "Favor de ingresar el nombre del maestro"<<endl;
        cin >> nombreM;
        cout << "Ingrese la edad del maestro" << endl;
        cin >> edadM;
        cout << "Ingrese el departamento del maestro" << endl;
        cin >> dep;
        cout << "Desea agregar otro maestro? s/n" << endl;
        cin >> ans;
        Maestro unMaestro(nombreM,edadM,dep);
        miArregloM[contM] = unMaestro;
        contM++;
    }

}

// Impresión de registro de maestros
void MostrarMaestros(Maestro miArregloM[], int &contM){
    cout << "Nombre"<<"\t" <<"Edad"<<"\t" <<"Departamento" << endl;
    for (int i = 0; i < contM;i++){
        cout << miArregloM[i].getNombre()<<"\t" << miArregloM[i].getEdad()<<"\t" << miArregloM[i].getDepto()<<endl;
        
    }
}

// Impresión de registro de estudiantes
void MostrarEstudiantes(Estudiante miArregloE[], int &contE){
    cout << "Nombre"<<"\t" <<"Edad"<<"\t" <<"Carrera" << endl;
    for (int i = 0; i < contE;i++){
        cout << miArregloE[i].getNombre() <<"\t"<< miArregloE[i].getEdad() <<"\t"<< miArregloE[i].getCarrera()<<endl;
        
    }
}

void MostrarMaesEs(Maestro miArregloM[],Estudiante miArregloE[], int &contE, int &contM){
    MostrarMaestros(miArregloM, contM);
    cout << endl;
    MostrarEstudiantes(miArregloE, contE);
}
