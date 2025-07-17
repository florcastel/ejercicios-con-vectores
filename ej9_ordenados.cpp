/*Dada una lista de 20 n£meros enteros, cargarlos en un vector. Determinar e informar
con un cartel aclaratorio si el vector est  ordenado estrictamente en forma creciente.
Por ejemplo: el vector [1, 3, 5, 7, 9] est  ordenado estrictamente.
El vector [1,  5,  3,  7] no lo est .
*/

#include <iostream>
using namespace std;

//declaraci¢n de funciones
void cargarVector(int v[], int cant);// el n£mero dentro del vector en esta parte se ignora
void mostrarVector(int v[], int cant);
bool informarOrden(int v[], int cant);


int main(){

	const int TAM = 5;
	int vNros[TAM];

    cargarVector(vNros, TAM);
    //mostrarVector(vNros, TAM);
    if(informarOrden(vNros,TAM)){
       cout<<"El vector est  ordenadoe strictamente en forma creciente\n";
    }
    else{
         cout<<"El vector no est  ordenado estrictamente en forma creciente\n";
    }

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
        cout << v[i] << "\t";
    }
}

bool informarOrden(int v[], int cant){
    int i;
    for(i=0;i<cant-1;i++){
        if(v[i] >= v[i+1]){
            return false;
        }
    }
    return true;
}

/* alternativa usando bandera en vez del return False:

bool informarOrden(int v[], int cant){

    bool ordenado = true;
    for(int i = 0; i < cant - 1; i++) {
        if(v[i] >= v[i + 1]) {
            ordenado = false;
        }
    }
    return ordenado;
}
*/
