/*Materia: Programación I, Paralelo 1
Autor: Daniela Alana Yampasi Sandi 
Fecha creación: 18/09/2024
Número de ejercicio: 10
Problema planteado: desempenho de estudiantes
*/
#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

void leeDat(vector<string>& nom, vector<double>& cal, vector<string>& car) {
    string n;
    double c;
    string ca;
    cout<<"ingrese nombrr calificacion carrera y fin para terminar";
    while (cin >> n && n != "fin") {
        cin >> c >> ca;
        nom.push_back(n);
        cal.push_back(c);
        car.push_back(ca);
    }
}

double prom(const vector<double>& cal) {
    double s=0;
    for (double c : cal) s+=c;
    return s/cal.size();
}

void mejorPeor(const vector<string>& nom, const vector<double>& cal, string& mejor, string& peor) {
    int m=0, p=0;
    for (int i=1; i<cal.size(); ++i) {
        if (cal[i]>cal[m]) m=i;
        if (cal[i]<cal[p]) p=i;
    }
    mejor=nom[m];
    peor=nom[p];
}

void mejorCarr(const vector<string>& nom, const vector<double>& cal, const vector<string>& car, const double& promG) {
    map<string, pair<int, double>> carreras;
    for (int i= 0; i < cal.size(); ++i) {
        carreras[car[i]].first++;
        carreras[car[i]].second += cal[i];
    }

    double maxProm = 0;
    string mejorCarr;
    for (const auto& p : carreras) {
        if (p.second.first > 0 && p.second.second / p.second.first > maxProm) {
            maxProm = p.second.second / p.second.first;
            mejorCarr = p.first;
        }
    }
    cout<< "La carrera con mejor desempeño es de " << mejorCarr << endl;
}

int main() {
    system("cls");

    vector<string> nom, car;
    vector<double> cal;
    leeDat(nom,cal, car);
    string mejor, peor;
    mejorPeor(nom, cal, mejor, peor);
    cout<< "El mejor alumno es" << mejor << endl;
    cout<<"El peor alumno es " << peor << endl;
    double promG = prom(cal);
    cout << "Promedio general " << promG << endl;
    mejorCarr(nom,cal,car,promG);

    return 0;
}