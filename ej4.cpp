#include <iostream>
using namespace std;

int main()
{
    ///Leer 10 n£meros y guardarlos en un vector.
    ///Determinar e informar cu l es el valor m ximo absoluto del vector.
    //Por ejemplo 20, -43 y 5, el m ximo absoluto es -43.

    const int TAM = 10;
    int vNum[TAM];
    int maximoAbsoluto, maximoAMostrar;

    for (int i=0; i<TAM; i++){
        cout << "Ingresar N£mero: ";
        cin >> vNum[i];
    }

    //cargo primer elemento como maximo

    if (vNum[0]>=0)
        maximoAbsoluto=vNum[0];
    else
        maximoAbsoluto=-(vNum[0]);

    maximoAMostrar=vNum[0];

    for (int i=1; i<TAM; i++){
        if (vNum[i]>=0){
            if (vNum[i]>maximoAbsoluto){
                maximoAbsoluto=vNum[i];
                maximoAMostrar=vNum[i];
            }
        }else{
            if (-(vNum[i])> maximoAbsoluto){
                maximoAbsoluto=-(vNum[i]);
                maximoAMostrar=vNum[i];
            }
        }
    }

    cout << "El elemento con valor m ximo absoluto es: " << maximoAMostrar << "."<< endl;

    system("pause");
    return 0;
}
