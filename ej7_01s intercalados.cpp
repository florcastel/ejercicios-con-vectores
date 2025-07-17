#include <iostream>
using namespace std;

int main(){
    //Hacer un programa para llenar un vector de 10 elementos con el formato:
    //1, 0, 1, 0, 1, 0, 1, 0, 1, 0. Luego mostrar los n£meros por pantalla.
    //EL USUARIO NO INGRESA NINGšN VALOR EN ESTE PROGRAMA.

    const int TAM = 10;
    int vNum[TAM];

	for (int i=0;i<TAM;i++){
        if (i%2==0){
            vNum[i]=1;
        } else {
            vNum[i]=0;
        }
	}

    for(int i=0; i<TAM; i++){
        cout<<vNum[i]<<"\t";
    }
    cout<<endl;
	system("pause");
	return 0;
}
