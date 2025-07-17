/*
Dadas dos listas de 10 n£meros cada una y sin n£meros repetidos, cargarlas en dos vectores.
Generar un tercer vector que contenga solamente aquellos elementos que est n repetidos
en ambos vectores. Mostrar en pantalla el nuevo vector.
Vector 1: [8, 10, -3, 5, 7]
Vector 2: [10, -8, 5, 9, -3]
Vector 3: [10, -3, 5]

*/

#include <iostream>
using namespace std;

//declaraci¢n de funciones
void cargarVector(int v[], int cant);// el n£mero dentro del vector en esta parte se ignora
void buscarRepetidos(int v1[], int v2[], int v3[], int cant, int &contador);
void mostrarRepetidos(int v[], int cant);


int main(){

    //declarar vectores
	const int TAM = 10;
	int vNros1[TAM];
	int vNros2[TAM];
	int vRepetidos[TAM]={0};
	int contRep=0;
    cout << "Cargar n£meros del primer Vector:" <<endl;
    cargarVector(vNros1, TAM);
    cout << "Cargar n£meros del segundo Vector:" <<endl;
    cargarVector(vNros2, TAM);
    buscarRepetidos(vNros1,vNros2,vRepetidos, TAM,contRep);
    mostrarRepetidos(vRepetidos, contRep);
	system("pause");
	return 0;
}


void cargarVector(int v[], int cant){
    int i;
    for(i=0;i<cant;i++){
        cout<<"Ingresar Nro: ";
        cin>>v[i];
    }
}

void mostrarRepetidos(int v[], int cant){
    int i;
    cout << "Los N£meros repetidos son:\t" <<endl;
    for(i=0;i<cant;i++){
        cout << v[i] << "\t";
    }
    cout << endl;
}


void buscarRepetidos(int v1[], int v2[], int v3[], int cant, int &contador){
    for(int i = 0; i < cant; i++) {
        for (int j=0; j<cant;j++){
            if(v1[i]==v2[j]){
                v3[contador]=v1[i];
                contador++;
            }
        }
    }
}



