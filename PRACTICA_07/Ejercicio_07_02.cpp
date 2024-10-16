// Materia: Programación I, Paralelo 1
// Autor: Daniela Alana Yampasi Sandi
// Fecha creación: 15/10/2024
// Número de ejercicio: 1
// Problema planteado: minusculas y mayusculas

#include <iostream>
#include <cstring>
using namespace std;


int contarVocales(char cad[]);
int main() {
    char cad[100];
    cout<< "Ingrese una cadena: ";
    cin.getline(cad, 100);
    int numVocales = contarVocales(cad);
    cout<< "Numero de vocales " << numVocales << endl;

    return 0;
}
int contarVocales(char cad[]) {
    int contVoc= 0;
    for (int i=0; cad[i] !='\0'; i++) {
        char letra= tolower(cad[i]); 
        if (letra=='a' || letra=='e' || letra=='i' || letra=='o'|| letra=='u') {
            contVoc++;
        }
    }
    return contVoc;
}