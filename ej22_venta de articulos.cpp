/*
Una empresa comercializa 20 tipos de art¡culos y por cada venta realizada genera un registro
con los siguientes datos:
-N£mero de Art¡culo (1 a 20)
-Cantidad Vendida

Puede haber varios registros para el mismo art¡culo y el £ltimo registro se indica cuando se
ingresa un n£mero de art¡culo igual a 0. Se pide determinar e informar:
a) El n£mero de art¡culo que m s se vendi¢ en total.
b) Los n£meros de art¡culos que no registraron ventas.
c) Cu ntas unidades se vendieron del n£mero de art¡culo 10.


*/

#include <iostream>
using namespace std;

void cargarVentas(int v[]);
int buscarMasVendido(int v[],int cant);
void mostrarSinVentas(int v[],int cant);
int validarNumero(int num, int minimo, int maximo);
//por si fuera necesario a futuro:
void mostrarVector(int v[], int cant);

int main(){

    const int TAM=20;
    int acuVentas[TAM]={0};

    cargarVentas(acuVentas);
    int masVendido = buscarMasVendido(acuVentas,TAM);
    if (masVendido == -1){
        cout << "No se vendi¢ ning£n Art¡culo. "<< endl;
    }else{
        cout << "El art¡culo m s vendido fue: " << masVendido << endl;
    }

    mostrarSinVentas(acuVentas,TAM);
    cout << "La cantidad de unidades vendidas del Art.10 fue de: " << acuVentas[9] << endl;

	system("pause");
	return 0;
}

void cargarVentas(int v[]){
    int nroArt;
    int unidades;
    cout<<"Ingresar Nro Art¡culo: ";
    cin>>nroArt;
    nroArt=validarNumero(nroArt,0,20);
    while(nroArt !=0){
        cout<<"Ingresar unidades vendidas: ";
        cin>>unidades;
        v[nroArt-1]+=unidades;
        cout<<"Ingresar Nro Art¡culo: ";
        cin>>nroArt;
        nroArt=validarNumero(nroArt,0,20);
    }
}


int buscarMasVendido(int v[],int cant){
    int maximo=0;
    int art=-1;
    for(int i=0;i<cant;i++){
        if(v[i]>maximo){
            maximo=v[i];
            art=i+1;
        }
    }
    return art;
}

void mostrarSinVentas(int v[],int cant){
    bool banderaHayCero=false;
    for(int i=0;i<cant;i++){
        if(v[i]==0){
            if(!banderaHayCero){
               cout << "Los siguientes art¡culos no registran ventas:"<<endl;
            }
           cout << "Art.N§: "<< i+1<<endl;
           banderaHayCero=true;
        }
    }
    if(!banderaHayCero){
        cout << "Todos los art¡culos registraron ventas." << endl;
    }
}

int validarNumero(int num, int minimo, int maximo){
    while(!(num>=minimo && num<=maximo)){
        cout<<"Error en el Nro. ingresado"<<endl;
        cout<<"Ingresar Nro Art¡culo: ";
        cin>>num;
    }
    return num;
}

void mostrarVector(int v[], int cant){
    int i;
    for(i=0;i<cant;i++){
        cout << "Indice[" << i<< "] = " << v[i] << endl;
    }
}

