#include <iostream>
using namespace std;

int main(){
	///Leer 10 n£meros y guardarlos en un vector. Determinar e informar
	///los dos £ltimos n£meros pares en el vector y sus respectivas posiciones en el mismo

	const int TAM = 10;
    int nros[TAM];
	int ultimoPar, anteultimoPar;
    int ultimoPos, anteultimoPos;
	int contadorPares = 0;

    for(int i=0;i<TAM;i++){
        cout<<"INGRESAR NUMERO: ";
        cin>>nros[i];
    }

    for(int i=TAM-1;i>=0;i--){
        if (nros[i]%2==0 && contadorPares==0) {
            ultimoPar=nros[i];
            ultimoPos = i+1;
            contadorPares++;
        }else if(nros[i]%2==0 && contadorPares==1){
            anteultimoPar=nros[i];
            anteultimoPos= i+1;
            contadorPares++;
            break; //si ya tengo los dos valores no necesito seguir buscando
        }
    }

    if (contadorPares==0){
       cout << "No se encontraron Nros pares en el vector."<<endl;
    }else if(contadorPares==1){
        cout << "Se encontr¢ un £nico Nro par: " << ultimoPar << " en la posici¢n: " << ultimoPos <<endl;
    }else {
        cout << "El £ltimo Nro par es: " << ultimoPar << " en la posici¢n: " << ultimoPos <<endl;
        cout << "El ante£ltimo Nro  par es: " << anteultimoPar << " en la posici¢n: " << anteultimoPos <<endl;
    }


	/*

    const int TAM = 10;
    int nros[TAM];

    int ultimoPar=0, anteultimoPar=0;
    int ultimoPos=0, anteultimoPos=0;

    for(int i=0;i<TAM;i++){
        cout<<"INGRESAR NUMERO: ";
        cin>>nros[i];
    }

    for(int i=0;i<TAM;i++){

        if (nros[i]%2==0 ) {
            anteultimoPar=ultimoPar;
            anteultimoPos= ultimoPos;
            ultimoPar=nros[i];
            ultimoPos = i;
            }
    }

    cout << "El ultimo par es: " << ultimoPar << "La posici¢n es: " << ultimoPos <<endl;
    cout << "El ante£ltimo par es: " << anteultimoPar << "La posici¢n es: " << anteultimoPos <<endl;
    */

	system("pause");
	return 0;
}
