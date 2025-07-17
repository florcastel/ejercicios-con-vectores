//Ingresar 10 n£meros y guardarlos en un vector.
//Determinar e informar cu l es la suma de los valores del vector.

#include <iostream>
using namespace std;

int main()
{
    //DECLARAR VECTOR
    const int TAM = 10;
    int nros[TAM];
    int acu=0;

    //CARGAR VECTOR
    for(int i=0; i<TAM; i++){
        cout<<"INGRESAR NUMERO: ";
        cin>>nros[i];
    }

    //ACUMULAR VALORES DEL VECTOR
    for(int i=0; i<TAM; i++){
        acu+=nros[i];
    }

    cout<<"La suma de los valores del vector es de: " << acu << endl;

    system("pause");
    return 0;
}
