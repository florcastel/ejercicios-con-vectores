/*
Dadas dos listas de 5 n£meros cada una y sin n£meros repetidos, cargarlas en dos vectores.
Generar un tercer vector que contenga los elementos de ambos vectores intercalados.
Mostrar en pantalla el nuevo vector.
Vector 1: [8, 10, -3, 5, 7]
Vector 2: [20, -8, 10, 9, 3]
Vector 3: [8, 20, 10, -8, -3, 10, 5, 9, 7, 3]


*/

#include <iostream>
using namespace std;

//declaraci¢n de funciones
void cargarVector(int v[], int cant);
void mostrarVector(int v[], int tam);
void intercalarValores(int v1[], int v2[],int cant,int v3[],int cant2);

int main(){

    //declarar vectores
	const int TAM = 5;
	const int TAM2 = TAM*2;
	int vNros1[TAM];
	int vNros2[TAM];
	int vIntercalados[TAM2];
    cout << "Cargar n£meros del primer Vector:" <<endl;
    cargarVector(vNros1, TAM);
    cout << "Cargar n£meros del segundo Vector:" <<endl;
    cargarVector(vNros2, TAM);
    intercalarValores(vNros1,vNros2,TAM,vIntercalados,TAM2);
    cout << "Vector con valores intercalados:" <<endl;
    mostrarVector(vIntercalados,TAM2);
    cout<<endl;
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

void mostrarVector(int v[], int tam){
    int i;
    for(i=0;i<tam;i++){
        cout<<v[i]<<"\t";
    }

}

void intercalarValores(int v1[], int v2[],int cant,int v3[],int cant2){
    int pos=0;
    for(int i = 0; i < cant; i++){
        v3[pos]=v1[i];
        v3[pos+1]=v2[i];
        pos+=2;
    }
}





