/*
Hacer un programa para ingresar las encuestas de edad efectuadas a 200 personas
y luego listar la cantidad de personas en cada rango de edad seg£n la siguiente tabla.

D‚cada 0.	(Edad 1-9)	Cantidad de encuestados: 99
D‚cada 1.	(Edad 10-19)	Cantidad de encuestados: 99
......................
D‚cada 9.	(Edad 90-99)	Cantidad de encuestados: 99

*/

#include <iostream>
using namespace std;

void cargarVector(int v[], int cant);
void mostrarVector(int v[], int cant);
void listarRangos(int v[], int cant);

int main(){

	const int TAM = 20;
	int vNros[TAM];

    cargarVector(vNros, TAM);
    //mostrarVector(vNros, TAM);
    listarRangos(vNros, TAM);

	system("pause");
	return 0;
}

void cargarVector(int v[], int cant){
    int i;
    for(i=0;i<cant;i++){
        cout<<"Ingresar Edad de la persona: ";
        cin>>v[i];
    }
}

void mostrarVector(int v[], int cant){
    int i;
    for(i=0;i<cant;i++){
        cout<<v[i]<<"\n";
    }
}

//for para cada rango de edad y un for interno que recorre el vector y contador
void listarRangos(int v[], int cant){
    int rango=0;
    for (int i=0;i<10;i++){
        int contador=0;
        for (int j=0;j<cant;j++){
            if (v[j]>=rango && v[j]<rango+10){
                contador++;
            }
        }
        //muestro el contador antes de pasar al otro rango
        if(rango==0){
            //el primer rango comienza en 1 no en 0
            cout << "D‚cada " << i << ". (Edad " << rango+1 << "-" << rango+9 << ") Cantidad de encuestados: "<< contador<< endl;
        }else{
            cout << "D‚cada " << i << ". (Edad " << rango << "-" << rango+9 << ") Cantidad de encuestados: "<< contador<< endl;
        }
        rango+=10;
    }
}






