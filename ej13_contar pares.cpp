/*
Dada una lista de 10 n£meros, cargarlos en un vector. Luego contar
y listar la cantidad de n£meros pares que aparecen en el vector.
*/

#include <iostream>
using namespace std;

//declaraci¢n de funciones
void cargarVector(int v[], int cant);
void mostrarVector(int v[], int cant);
int informarCantPares(int v[], int cant);
bool esPar(int num);

int main(){

	const int TAM = 10;
	int vNros[TAM];
	int cantidad;

    cargarVector(vNros, TAM);
    //mostrarVector(vNros, TAM);
    cantidad = informarCantPares(vNros,TAM);
    cout<<"Total de Nros. pares encontrados: "<< cantidad << endl;;

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


int informarCantPares(int v[], int cant){
    int contPares=0;
    for(int i = 0; i < cant; i++) {
        if(esPar(v[i])) {
            cout << "Nro. par encontrado: " << v[i] << endl;
            contPares++;
        }
    }
    return contPares;
}

bool esPar(int num) {
    if (num%2==0) {
        return true;
    }else {
        return false;
    }
}

