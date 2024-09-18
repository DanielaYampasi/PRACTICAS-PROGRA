/*Materia: Programación I, Paralelo 1
Autor: Daniela Alana Yampasi Sandi 
Fecha creación: 17/09/2024
Número de ejercicio: 6
Problema planteado: tres vectores-calcular vector 3
*/

#include <iostream>
#include <vector>
using namespace std;

void lee(vector<int>& v) {
    for (int i= 0; i< v.size(); ++i) {
        cin >> v[i];
    }
}
void sum(const vector<int>& v1, const vector<int>& v2, vector<int>& v3) {
    for (int i= 0; i< v1.size(); ++i) {
        v3[i]= v1[i] + v2[i];
    }
}
void imp(const vector<int>& v) {
    for (int num:v) {
        cout<< num << " ";
    }
    cout<< endl;
}

int main(){
    system("cls");

    const int tamanho=5;
    vector<int> vector1(tamanho), vector2(tamanho),vector3(tamanho);

    cout<< "ingrese los elementos del primer vector\n";
    lee(vector1);

    cout<< "ingrese los elementos del segundp vector 2:\n";
    lee(vector2);

    sum(vector1, vector2, vector3);

    cout<< "el vector obtenido es:\n";
    imp(vector3);

    return 0;
}