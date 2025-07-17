//Leer 10 n£meros y guardarlos en un vector. Calcular el promedio y luego mostrar por pantalla
//los valores que son mayores al promedio.

#include <iostream>
using namespace std;

int main(){

    //DECLARAR VECTOR
    const int TAM=10;
    int nros[TAM];

    int acu=0;
    float promedio;

    //CARGAR VECTOR
    for(int i=0; i<TAM; i++){
        cout<<"INGRESAR NUMERO: ";
        cin>>nros[i];
    }

    //ACUMULAR
    for(int i=0; i<TAM; i++){
        acu+=nros[i];
    }

    //OBTENER PROMEDIO
    promedio = acu/TAM;
    cout<< "El promedio es: " << promedio << endl;

    //MOSTRAR VALORES MAYORES AL PROMEDIO
    for(int i=0; i<TAM; i++){
        if(nros[i]>promedio){
            cout<< "El siguiente Nro es mayor al promedio: " << nros[i] << endl;
        }
    }

    system("pause");
    return 0;
}
