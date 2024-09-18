/*Materia: Programación I, Paralelo 1
Autor: Daniela Alana Yampasi Sandi 
Fecha creación: 18/09/2024
Número de ejercicio: 8
Problema planteado: minearales
*/
#include <iostream>
#include <string>
using namespace std;

void busc(const string nomb[], const double prod[], int numM, const string& nomBus) {
    for (int i = 0; i < numM; ++i) {
        if (nomb[i] == nomBus) {
            cout<< nomBus << " " << prod[i] << " de toneladas metricas" << endl;
            return;
        }
    }
    cout << "no se encontro el mineral" << endl;
}

void ordn(string nomb[], double prod[], int numM) {
    for (int i= 1; i< numM; ++i) {
        string clave= nomb[i];
        double valor= prod[i];
        int j= i - 1;
        while (j>= 0 && prod[j] < valor) {
            nomb[j+1]= nomb[j];
            prod[j+1]= prod[j];
            j= j- 1;
        }
        nomb[j+1]= clave;
        prod[j+1]= valor;
    }
}

int main() {
    const string mine[]= {"sn","sb","au","pt","ag","cu"};
    const double prodT[]= {998000, 876500, 786670, 636143, 135567, 109412};
    const int numMi= sizeof(mine)/ sizeof(mine[0]);

    string mineral;
    cout<< "ingrese el nombre del mineral que desea buscar:";
    cin >> mineral;
    busc(mine, prodT, numMi, mineral);

    cout<< "\nProduccion de mayor a menor\n";
    cout<< "mineral produccion\n";
    ordn(const_cast<string*>(mine), const_cast<double*>(prodT), numMi); 
    for (int i=0; i< numMi; ++i) {
        cout << mine[i] << "\t" <<prodT[i]<< endl;
    }

    return 0;
}