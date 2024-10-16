// Autor: Daniela Alana Yampasi Sandi
// Fecha creación: 15/10/2024
// Número de ejercicio: 5
// Problema planteado: polindromo

#include <iostream>
#include <cstring>
using namespace std;

bool esPalindromo(char cad[]);

int main() {
    char cad[100];
    cout << "Ingrese una cadena: ";
    cin.getline(cad, 100);

    if (esPalindromo(cad)) {
        cout << "Es un palindromo" << endl;
    } else {
        cout << "No es un palindromo" << endl;
    }
    return 0;
}

bool esPalindromo(char cad[]) {
    int ini = 0;
    int fin = strlen(cad) - 1;

    while (ini < fin) {
        if (tolower(cad[ini]) != tolower(cad[fin])) {
            return false;
        }
        ini++;
        fin--;
    }
    return true;
}
