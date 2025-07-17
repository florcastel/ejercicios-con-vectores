/*
Dada una lista de 20 n£meros, cargarlos en un vector. Determinar e informar la cantidad
de rupturas que tiene el vector con respecto a un orden estrictamente creciente.
Ejemplo: el vector 1,3,4,2,4,4,6,8,1,7,9 tiene 3 rupturas.
*/

#include <iostream>
using namespace std;

//declaraci¢n de funciones
void cargarVector(int v[], int cant);
void mostrarVector(int v[], int cant);
int contarNoOrdenados(int v[], int cant);


int main(){

	const int TAM = 20;
	int vNros[TAM];
    int noOrdenados;

    cargarVector(vNros, TAM);
    //mostrarVector(vNros, TAM);
    noOrdenados = contarNoOrdenados(vNros, TAM);
    cout<<"La cantidad de Nros no ordenados es de:" << noOrdenados <<endl;

	system("pause");
	return 0;
}

void cargarVector(int v[], int cant){
    int i;
    for(i=0;i<cant;i++){
        cout<<"INGRESAR NUMERO ";
        cin>>v[i];
    }
}

void mostrarVector(int v[], int cant){
    int i;
    for(i=0;i<cant;i++){
        cout << "Vector[" << i<< "] = " << v[i] << endl;
    }
}

int contarNoOrdenados(int v[], int cant){
    int contNoOrdenados=0;
    int i;
    for(i=0;i<cant-1;i++){
        if(v[i] >= v[i+1]){
            contNoOrdenados++;
        }
    }
    return contNoOrdenados;
}


