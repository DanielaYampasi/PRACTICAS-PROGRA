// Materia: Programación I, Paralelo 1
// Autor: Daniela Alana Yampasi Sandi
// Fecha creación: 15/10/2024
// Número de ejercicio: 1
// Problema planteado: escpacios
#include <iostream>
#include <cstring>

using namespace std;

void eliminarEsp(char cad[]);

int main() {
    char cad[100];

    cout << "Ingrese una cadena: ";
    cin.getline(cad, 100);
    eliminarEsp(cad);
    cout << "Cadena sin espacios: " << cad << endl;

    return 0;
}
void eliminarEsp(char cad[]) {
    int j = 0;
    for (int i= 0; cad[i] != '\0'; i++) {
        if (cad[i]!= ' ') {
            cad[j++]= cad[i];
        }
    }
    cad[j]= '\0'; 
}