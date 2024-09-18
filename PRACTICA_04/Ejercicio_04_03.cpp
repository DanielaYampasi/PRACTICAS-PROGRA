/*Materia: Programación I, Paralelo 1
Autor: Daniela Alana Yampasi Sandi 
Fecha creación: 17/09/2024
Número de ejercicio: 3
Problema planteado: arreglo calificaciones = arreglo(notas)
*/

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int calcularSuma(const vector<int>& notas) {
    int suma= 0;
    for (int nota : notas) {
        suma += nota;
    }
    return suma;
}

double calcularPromedio(const vector<int>& notas) {
    int suma = calcularSuma(notas);
    return static_cast<double>(suma) /notas.size();
}

double calcularVarianza(const vector<int>& notas, double promedio) {
    double sumdecu=0;
    for (int nota:notas) {
        double desviacion= nota - promedio;
        sumdecu+= pow(desviacion, 2);
    }
    return sumdecu/notas.size();
}
int main() {
    system("cls");

    int n;

    cout<< "ingresa la cantidad de notas a registrar";
    cin>> n;

    vector<int> notas(n);

    cout << "Ingrese las notas:";
    for (int i=0; i<n; i++) {
        cin>> notas[i];
    }
    double promedio= calcularPromedio(notas);
    double varianza= calcularVarianza(notas, promedio);

    cout << "\nnota \t dsesviacion\n";
    for (int i=0; i<n; i++) {
        double desviacion = notas[i] - promedio;
        cout << notas[i] << "\t" << desviacion << endl;
    }
    cout<< "\nVarianza: " <<varianza <<"\n" <<endl;

    return 0;
}