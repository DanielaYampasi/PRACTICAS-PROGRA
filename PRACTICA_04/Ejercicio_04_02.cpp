/*Materia: Programación I, Paralelo 1
Autor: Daniela Alana Yampasi Sandi 
Fecha creación: 17/09/2024
Número de ejercicio: 2
Problema planteado: arreglo voltios
*/

#include <iostream>
#include <vector>
using namespace std;

void mostrar(double voltios[9]);
int main (){
    
    system("cls");
    double voltios[9] =  {12.26,29.22,2.76,31.88,10.71,7.04,26.43,9.92,18.63};
    mostrar(voltios);
    return 0;
}

void mostrar(double voltios[9]){
    int i=0;
    while(i<9){
                int j=0;
            while (j<3){
                cout<<voltios[i]<< "\t";
                i++;
                j++;
            }
                cout<<endl;
        }
    }