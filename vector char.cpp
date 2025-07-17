#include <iostream>
using namespace std;

int main(){
    /// crear un vector char de 50 espacios. Cargarlo con lo que ingrese el usuario y cortar
    ///cuando ingrese un punto. Luego recorrerlo y reemplazar todas las letras "a" por "e".

    const int TAM = 50;
    char vChar[TAM];
    char letra;
    int indiceL=0;

    cout << "Ingresar Char: ";
    cin >> letra;

    while(letra != '.' && indiceL <50){
        vChar[indiceL]=letra;
        indiceL++;
        cout << "Ingresar Char: ";
        cin >> letra;
    }
    cout << "Vector original: "<< endl;
    //mostrar el v original
    for(int i=0; i<indiceL; i++){
        cout << vChar[i] << "  ";
    }

  //reemplazar
    for(int i=0; i<indiceL; i++){
        if(vChar[i]=='a'){
            vChar[i]='e';
        }
    }

    //mostrar el v final
    cout << endl << "El vector modificado queda: "<< endl;
    for(int i=0; i<indiceL; i++){
        cout << vChar[i] << "  ";
    }

	//cout << "    : " << variable << "."<< endl;



	system("pause");
	return 0;
}
