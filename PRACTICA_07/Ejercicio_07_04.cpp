// Materia: Programación I, Paralelo 1
// Autor: Daniela Alana Yampasi Sandi
// Fecha creación: 15/10/2024
// Número de ejercicio: 4
// Problema planteado: iguales o no
#include <iostream>
#include <cstring>
using namespace std;


bool compararCadenas(char cad1[], char cad2[]);
int main() {
    char cad1[100], cad2[100];
    cout << "Ingrese una cadena ";
    cin.getline(cad1, 100);
    cout << "Ingrese otracadena";
    cin.getline(cad2, 100);
    if (compararCadenas(cad1, cad2)) {
        cout << "las cadenas son iguales" << endl;
    } else {
        cout << "Las cadenas son diferentes " << endl;
    }

    return 0;
}

bool compararCadenas(char cad1[], char cad2[]) {
    int tam1= strlen(cad1);
    int tam2= strlen(cad2);
    if (tam1!= tam2) {
        return false; 
    }
    for (int i=0; i<tam1; i++) {
        if (tolower(cad1[i]) != tolower(cad2[i])) {
            return false; 
        }
    }
    return true; 
}