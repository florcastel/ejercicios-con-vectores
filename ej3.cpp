//Leer 10 n£meros y guardarlos en un vector. Determinar e informar cu l es el valor m ximo
//y su posici¢n dentro del vector.

#include <iostream>
using namespace std;

int main(){

    const int TAM = 10;
    int vNros[TAM];
    int maxPos=0;

    for(int i=0; i<TAM; i++){
        cout<<"INGRESAR NUMERO: ";
        cin>>vNros[i];
    }

    for(int i=1;i<TAM;i++){
        if(vNros[i]>vNros[maxPos]){
            maxPos=i;
        }
    }

    cout << "El maximo es: " << vNros[maxPos] << ". La posici¢n es: " << maxPos+1 << endl;
	system("pause");
	return 0;
}
