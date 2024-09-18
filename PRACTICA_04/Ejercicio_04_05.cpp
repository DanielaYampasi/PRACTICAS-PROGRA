/*Materia: Programación I, Paralelo 1
Autor: Daniela Alana Yampasi Sandi 
Fecha creación: 17/09/2024
Número de ejercicio: 5
Problema planteado: leer y combinar vectores dimension n
*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> ingresarDatos(int);
vector<int> combinar(vector<int>, vector<int>);

int main (){
    int n;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> n;
    cout << "ingrese los valores del vector 1:"<<endl;
    vector<int> v1 = ingresarDatos(n);
    cout << "ingrese los valores del vector 2:"<<endl;
    vector<int> v2 = ingresarDatos(n);
    cout << "El vector combinado es: " << endl;
    vector<int> combi = combinar(v1,v2);
    for(int i : combi){
        cout << i << "\t";
    }
    cout << endl;
    return 0;
}

vector<int> ingresarDatos(int n){
    vector<int> num;
    for(int i = 0; i < n; i++){
        int a;
        cout << "ingrese el numero " <<i + 1<<": ";
        cin >> a;
        num.push_back(a);
    }
    return num;
}

vector<int> combinar(vector<int> v1, vector<int> v2) {
    vector<int> com;

    for(int i : v1){
        com.push_back(i);
    }

    for(int i : v2){
        com.push_back(i);
    }

    return com;
}