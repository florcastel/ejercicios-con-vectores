/*
Dada una lista de 10 n£meros, cargarlos en un vector.
Luego detectar si en el vector hay alg£n elemento repetido y,
en caso de haberlo, indicarlo con un cartel "Hay Repetidos".

clase vectores= se usa un for10 dentro de for10 y un contador que
siempre va a dar al menos 1 repetido (mismo elemento comparandose)-
si cont >=2 "hay repetidos"
*/

#include <iostream>
using namespace std;

void cargarVector(int v[], int cant);
void mostrarVector(int v[], int cant);
bool hayRepetidos(int v[], int cant);


int main(){

	const int TAM = 10;
	int vNros[TAM];

    cargarVector(vNros, TAM);
    //mostrarVector(vNros, TAM);

    if (hayRepetidos(vNros,TAM)){
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


bool hayRepetidos1(int v[], int cant){

    for(int i = 0; i < cant; i++) {
        int contRep=0;   //se resetea CADA VEZ que comienza a chequear un n£mero
        for (int j=0; j<cant;j++){
            if(v[i]==v[j]){
                contRep++
            }
        }
        //si el contador llega a 2 o m s es porque encontr¢ repetido
        if(contRep>=2){
            return true;
        }
    }
    return false;
}

///---- versi¢n mejorada

bool hayRepetidos(int v[], int cant){

    for(int i = 0; i < cant-1; i++) {
        for (int j=i+1; j<cant; j++){
            if(v[i]==v[j]){
                cout << "Est  repetido el Nro.: " << v[i] << endl;
                return true;
            }
        }
    }
    return false;
}



