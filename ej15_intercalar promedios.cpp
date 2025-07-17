/*
Dada una lista de 5 n£meros, cargarlos en un vector. Armar luego otro vector de 9 elementos
donde por cada 2 elementos del vector original intercale el promedio de ellos.
Por ejemplo: [2, 4, 6, 8, 10],  el vector queda: [2, 3, 4, 5, 6, 7, 8, 9, 10].
*/

#include <iostream>
using namespace std;

void cargarVector(int v[], int cant);
void mostrarVector(float v[], int cant);
void intercalarPromedios(int v[], int cant, float v2[], int cant2);

int main(){

    const int TAM = 5;
    const int TAM2 = 9;
	int vNros[TAM];
	float vNrosYPromedios[TAM2];

    cargarVector(vNros, TAM);

    intercalarPromedios(vNros, TAM, vNrosYPromedios, TAM2);
    mostrarVector(vNrosYPromedios, TAM2);

	system("pause");
	return 0;
}

void cargarVector(int v[], int cant){
    int i;
    for(i=0; i < cant; i++){
        cout<<"Ingresar N£mero: ";
        cin>>v[i];
    }
}

void mostrarVector(float v[], int cant){
    int i;
    for(i=0;i<cant;i++){
        cout << v[i] << "\n";
    }
}


void intercalarPromedios(int v[], int cant, float v2[], int cant2){
    int posV2=0;
    for(int i = 0; i < cant-1; i++){
        float promedio;
        promedio = (float)(v[i]+v[i+1])/2;
        v2[posV2]=v[i];
        v2[posV2+1]=promedio;
        posV2+=2;
    }
    v2[cant2-1]=v[cant-1];
}





