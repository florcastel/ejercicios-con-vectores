/*
Dada una lista de 10 n£meros, cargarlos en un vector. Luego detectar si en el vector hay
elementos repetidos y generar otro vector con los elementos repetidos reemplazados por ceros.
Ejemplo Vector 1: [8, 20, 20, -7, 15, 12, 15, -5, 11, 18]
Ejemplo Vector 2: [8, 0, 0, -7, 0, 12, 0, -5, 11, 18]

*/

#include <iostream>
using namespace std;

void cargarVector(int v[], int cant);
void mostrarVector(int v[], int cant);
void copiarVector(int v[], int cant, int v2[]);
void detectarRepetidos(int v[], int cant, int v2[]);


int main(){

	const int TAM = 10;
	int vNros[TAM];
	int vNros2[TAM];

    cargarVector(vNros, TAM);
    copiarVector(vNros,TAM,vNros2);
    detectarRepetidos(vNros,TAM,vNros2);
    mostrarVector(vNros2, TAM);

	system("pause");
	return 0;
}


void cargarVector(int v[], int cant){
    int i;
    for(i=0;i<cant;i++){
        cout<<"Ingresar N£mero: ";
        cin>>v[i];
    }
}

void mostrarVector(int v[], int cant){
    int i;
    for(i=0;i<cant;i++){
        cout << "Ãndice[" << i<< "] = " << v[i] << endl;
    }
}

void copiarVector(int v[], int cant, int v2[]){
    for(int i = 0; i < cant; i++) {
        v2[i]=v[i];
    }
}


void detectarRepetidos(int v[], int cant, int v2[]){
    for(int i = 0; i < cant-1; i++) {
        for (int j=i+1; j<cant;j++){
            if(v[i]==v[j]){
                v2[i]=0;
                v2[j]=0;
            }
        }
    }
}



