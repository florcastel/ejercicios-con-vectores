/*Dada una lista de 10 n£meros, cargarlos en un vector. Luego ingresar un n£mero
e informar la cantidad de veces que ese n£mero aparece en el vector.
*/

#include <iostream>
using namespace std;

void cargarVector(int v[], int cant);
void mostrarVector(int v[], int cant);
int informarRepetidos(int v[], int cant, int num);


int main(){

	const int TAM = 10;
	int vNros[TAM];
	int num, cantidad;

    cargarVector(vNros, TAM);
    //mostrarVector(vNros, TAM);
    cout<<"Ingresar Nro: ";
    cin>>num;
    cantidad = informarRepetidos(vNros,TAM, num);
    cout<<"El numero se repite: "<< cantidad << " veces.\n";

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

int informarRepetidos(int v[], int cant, int num){
    int contRepetidos=0;
    for(int i = 0; i < cant; i++) {
        if(v[i] == num) {
            contRepetidos++;
        }
    }
    return contRepetidos;
}

