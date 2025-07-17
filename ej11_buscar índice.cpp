/*
Dada una lista de 10 n£meros, cargarlos en un vector. Luego ingresar un n£mero e informar
el primer ¡ndice donde ese n£mero aparece en el vector. En caso de no aparecer se mostrar 
el valor ¡ndice igual a -1.
*/

#include <iostream>
using namespace std;

void cargarVector(int v[], int cant);
void mostrarVector(int v[], int cant);
int buscarIndice(int v[], int cant, int numABuscar);


int main(){

	const int TAM = 10;
	int vNros[TAM];
    int num, indice;

    cargarVector(vNros, TAM);
    //mostrarVector(vNros, TAM);
    cout<<"Ingrese un Nro a buscar: ";
    cin >> num;
    cout<<endl;
    indice = buscarIndice(vNros, TAM,num);
    if (indice == -1){
        cout<<"No se encontr¢ el Nro ingresado."<<endl;
    } else {
        cout<<"El Nro se encontr¢ en el ¡ndice:" << indice <<endl;
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
        cout << "Indice[" << i<< "] = " << v[i] << endl;
    }
}

int buscarIndice(int v[], int cant, int numero){
    int indice=-1;
    for(int i=0;i<cant;i++){
        if(v[i] == numero){
            indice=i;
            break;
        }
    }
    return indice;
}


