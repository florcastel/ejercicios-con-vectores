/*
Hacer un programa para ingresar las encuestas de edad efectuadas a 200 personas
y luego listar la cantidad de personas en cada rango de edad seg£n la siguiente tabla.

DÇcada 0.	(Edad 1-9)	Cantidad de encuestados: 99
DÇcada 1.	(Edad 10-19)	Cantidad de encuestados: 99
......................
DÇcada 9.	(Edad 90-99)	Cantidad de encuestados: 99

*/

#include <iostream>
using namespace std;

//declaraci¢n de funciones
void cargarVector(int v[], int cant);// el n√∫mero dentro del vector en esta parte se ignora
void mostrarVector(int v[], int cant);
//void listarRangos(int v[], int cant);
void sumarPersonas(int v[],cant)

int main(){

    //DECLARAR VECTOR
	const int TAM = 20;
	int vNros[TAM];

    //cargarVector(vNros, TAM);
    //mostrarVector(vNros, TAM);
    //listarRangos(vNros, TAM);

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


void listarRangos(int v[], int cant){
    int rango=0;
    for (int i=0;i<10;i++){
        int contador=0;
        for (int j=0;j<cant;j++){
            if (v[j]>=rango && v[j]<rango+10){
                contador++;
            }
        }
        if(rango==0){
            cout << "DÇcada " << i << ". (Edad " << rango+1 << "-" << rango+9 << ") Cantidad de encuestados: "<< contador<< endl;
        }else{
            cout << "DÇcada " << i << ". (Edad " << rango << "-" << rango+9 << ") Cantidad de encuestados: "<< contador<< endl;
        }
        rango+=10;
    }
}






