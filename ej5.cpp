#include <iostream>
using namespace std;

int main(){
	///Leer 10 n£meros y guardarlos en un vector. Determinar e informar cu l es el
	///menor de los impares y el mayor de los pares. Suponer que habr  al menos un n£mero par y uno impar.

    const int TAM = 10;
    int nros[TAM];
    int maximoPar, minimoImpar;
    bool par = false, impar = false;

    for(int i=0;i<TAM;i++){
        cout<<"INGRESAR NUMERO: ";
        cin>>nros[i];
    }

    for(int i=0;i<TAM;i++){
        if (nros[i]%2==0 ) {
            if (par == false || nros[i] > maximoPar){
                maximoPar=nros[i];
                par=true;
            }
        }else{
            if (impar == false || nros[i] < minimoImpar){
                minimoImpar=nros[i];
                impar=true;
            }
        }

    }

    cout << "El maximo par es: " << maximoPar << endl;
    cout << "El minimo impar es: " << minimoImpar << endl;
	system("pause");
	return 0;
}
