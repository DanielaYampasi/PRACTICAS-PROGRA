/*Materia: Programación I, Paralelo 1
Autor: Daniela Alana Yampasi Sandi 
Fecha creación: 18/09/2024
Número de ejercicio: 9
Problema planteado: 
*/
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void leeEdades(vector<int>& edades) {
    int edad;
    cout<<"Ingrese las edades y 0 para salr:";
    while (cin >> edad && edad != 0) {
        edades.push_back(edad);
}
}
double prom(const vector<int>& edades) {
    int suma= 0;
    for (int edad : edades) {
        suma+= edad;
    }
    return static_cast<double>(suma) / edades.size();
}

double desv(const vector<int>& edades) {
    double promedio= prom(edades);
    double varianza= 0;
    for (int edad:edades) {
        varianza+= pow(edad - promedio, 2);
    }
    varianza/= edades.size();
    return sqrt(varianza);
}

int main() {
    vector<int> edades;
    leeEdades(edades);
    cout << "la desviacion estandar de las edades es de "<< desv(edades)<< endl;
    return 0;
}