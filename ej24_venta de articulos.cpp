/*
Una empresa que fabrica 200 art¡culos tiene la siguiente informaci¢n para cada uno de las ventas del mes anterior:
-C¢digo de Art¡culo (1 a 200)
-D¡a (1 a 31)
-Cantidad vendida
Puede haber m s de un registro para el mismo art¡culo. El lote finaliza con un registro con nro de art¡culo
igual a cero. Se pide determinar e informar:
a) Informar para cada c¢digo de art¡culo la cantidad total vendida en el mes.
b) Informar los d¡as en los que no hubo ventas.
c) Informar los c¢digos de los art¡culos cuyas ventas en cantidad son mayores al promedio.




*/

#include <iostream>
using namespace std;

void cargarVentas(int v1[],int cant1, int v2[], int cant2);
void mostrarCantVentas(int v[],int cant);
void mostrarSinVentas(int v[],int cant);
int validarNumero(int num, int minimo, int maximo, string mensaje);
void mostrarMayorProm(int v[],int cant);
float sacarPromedio(int v[],int cant);
//por si fuera necesario a futuro:
void mostrarVector(int v[], int cant);

int main(){

    const int ARTICULOS=200;
    const int DIASMES=31;
    int ventasPorArt[ARTICULOS]={0};
    int ventasPorDia[DIASMES]={0};

    cargarVentas(ventasPorArt,ARTICULOS,ventasPorDia, DIASMES );
    mostrarCantVentas(ventasPorArt,ARTICULOS);
    mostrarSinVentas(ventasPorDia,DIASMES);
    mostrarMayorProm(ventasPorArt, ARTICULOS);

   	system("pause");
	return 0;
}

void cargarVentas(int v1[],int cant1, int v2[], int cant2){
    int nroArt;
    int dia;
    int unidades;

    cout<<"Ingresar Nro Art¡culo (0 para salir): ";
    cin>>nroArt;
    nroArt=validarNumero(nroArt,0, cant1,"Nro art¡culo");
    while(nroArt !=0){
        cout<<"Ingresar d¡a: ";
        cin>>dia;
        dia=validarNumero(dia,1,cant2,"dia");
        cout<<"Ingresar unidades vendidas: ";
        cin>>unidades;
        v1[nroArt-1]+=unidades;
        v2[dia-1]+=unidades;
        cout<<"Ingresar Nro Art¡culo (0 para salir): ";
        cin>>nroArt;
        nroArt=validarNumero(nroArt,0,cant1,"Nro art¡culo");
    }
}

void mostrarCantVentas(int v[],int cant){
    cout<<"\n===============VENTAS REALIZADAS===============\n";
    int i;
    for(i=0;i<cant;i++){
        if(v[i]!=0)
        cout << "Art¡culo[" << i+1<< "] = " << v[i] << endl;
    }
}

void mostrarSinVentas(int v[],int cant){
    cout<<"\n===========DIAS SIN VENTAS REGISTRADAS===========\n";
    int i;
    for(i=0;i<cant;i++){
        if(v[i]==0){
         cout << "| " << i+1<< " ";
        }
    }
    cout<<"\n";
}

void mostrarMayorProm(int v[],int cant){
    cout<<"\n=================VENTAS>PROMEDIO=================\n";
    float promedio = sacarPromedio(v,cant);
    cout<<"El promedio de ventas fue: "<<promedio<<endl;
    for(int i=0;i<cant;i++){
        if (v[i]>promedio){
          cout << "El art¡culo:" << i+1<< " registr¢ ventas mayores al promedio"<< endl;
        }
    }

}

float sacarPromedio(int v[],int cant){
    int i, acum=0,cont=0;
    for(i=0;i<cant;i++){
        if (v[i]>0){
        acum+=v[i];
        cont++;
        }
    }
    return (float)acum/cont;
}



int validarNumero(int num, int minimo, int maximo, string mensaje){
    while(!(num>=minimo && num<=maximo)){
        cout<<"Error en el Nro. ingresado"<<endl;
        cout<<"Ingresar " << mensaje <<": ";
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

