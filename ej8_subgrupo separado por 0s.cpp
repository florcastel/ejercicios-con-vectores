#include <iostream>
using namespace std;

int main(){
	/*Dada una lista de n£meros compuesta por 10 subgrupos y cada grupo separado del siguiente por un cero,
	se pide generar un vector de 10 elementos con el m ximo de cada uno de los subgrupos.
	Luego mostrar los elementos del vector por pantalla.
	*/

	const int TAM = 10;
	int vMaximos[TAM];

	int num, maximo;

	for(int i=0;i<TAM;i++){
        cout<<"Ingresar N£mero: ";
        cin>>num;
        maximo = num;
        while(num!=0){
            if(num>maximo){
                maximo=num;
            }
        cout<<"Ingresar N£mero: ";
        cin>>num;
        }
        vMaximos[i]=maximo;
	}
    cout<<"Los valores m ximos de cada grupo fueron:"<< endl;

    for(int i=0;i<TAM;i++){
        cout<<vMaximos[i]<<"\t";
    }

	system("pause");
	return 0;
}
