/*Dada una lista de 10 n£meros, cargarlos en un vector.
Luego detectar si en el vector hay alg£n elemento repetido y,
en caso de haberlo, indicarlo con un cartel "Hay Repetidos".
*/

#include <iostream>
using namespace std;

void cargarVector(int v[], int cant);
void mostrarVector(int v[], int cant);
bool informarRepetidos(int v[], int cant);


int main(){

	const int TAM = 10;
	int vNros[TAM];

    cargarVector(vNros, TAM);
    //mostrarVector(vNros, TAM);


    if (informarRepetidos(vNros,TAM)){
        cout<<"Hay repetidos"<<endl;
    }
    else{
        cout<<"No hay repetidos"<<endl;
    }

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
        cout << v[i] << "\t";
    }
}

bool informarRepetidos(int v[], int cant){

    for(int i = 0; i < cant-1; i++) {
        for (int j = i+1; j < cant; j++) {
            if(v[i] == v[j]) {
                return true;
            }
        }
    }
    return false;
}

