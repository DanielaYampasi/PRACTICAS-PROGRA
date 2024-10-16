// Materia: Programación I, Paralelo 1
// Autor: Daniela Alana Yampasi Sandi
// Fecha creación: 15/10/2024
// Número de ejercicio: 1
// Problema planteado: invertir cadena

#include <iostream>
#include <cstring> // Para usar las funciones de manipulación de cadenas
using namespace std;


void invertir(char cadena[]);

int main() {
    char cadena[100];
    cout << "Ingrese una palabra ";
    cin.getline(cadena, 100 );
    invertir( cadena); 
    cout << "La cadena invertida es:" << cadena << endl;

    return 0;
}

void invertir(char cadena[]) {
    strrev(cadena);
}