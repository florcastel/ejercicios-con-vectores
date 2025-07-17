/*
Dada una lista de 10 n£meros, cargarlos en un vector. Luego contar
y listar la cantidad de n£meros primos que aparecen en el vector.
*/

#include <iostream>
using namespace std;

//declaraci¢n de funciones
void cargarVector(int v[], int cant);
void mostrarVector(int v[], int cant);
int informarCantPrimos(int v[], int cant);
bool esPrimo(int num);

int main(){

	const int TAM = 10;
	int vNros[TAM];
	int cantidad;

    cargarVector(vNros, TAM);
    //mostrarVector(vNros, TAM);
    cantidad = informarCantPrimos(vNros,TAM);
    cout<<"Total de Nros. primos encontrados: "<< cantidad << endl;;

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


int informarCantPrimos(int v[], int cant){
    int contPrimos=0;
    for(int i = 0; i < cant; i++) {
        if(esPrimo(v[i])) {
            cout << "Nro. primo encontrado: " << v[i] << endl;
            contPrimos++;
        }
    }
    return contPrimos;
}

bool esPrimo(int num) {
    int contDivisores = 0;
    for (int j = 1; j <= num; j++) {
        if (num%j==0) {
            contDivisores++;
        }
    }
    if(contDivisores == 2) {
        return true;
    }else {
        return false;
    }
}

