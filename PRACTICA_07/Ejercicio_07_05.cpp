// Autor: Daniela Alana Yampasi Sandi
// Fecha creación: 15/10/2024
// Número de ejercicio: 5
// Problema planteado: cuenta palabras

#include <iostream>
#include <cstring>
using namespace std;

int contarP(char frase[]);
int main() {
    char frase[100];
    cout<< "Ingrese una frase";
    cin.getline(frase, 100);
    int numPal= contarP(frase);
    cout<< "numers de palabras "<< numPal << endl;

    return 0;
}
int contarP(char frase[]) {
    int contPal= 0;
    bool enPalabra= false;
    for (int i = 0; frase[i]!= '\0'; i++) {
        if (frase[i]!= ' ' && !enPalabra) {
            enPalabra = true;
            contPal++;
        } else if (frase[i]== ' ') {
            enPalabra=false;
        }
    }
    return contPal;
}