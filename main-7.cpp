#include <iostream>
using namespace std;

int main() {
    int nota_1, nota_2, nota_3, examen_final, trabajo_final;
    int promedio, nota_final;

    cout << "Parcial 1: ";
    cin >> nota_1;
    cout << "Parcial 2: ";
    cin >> nota_2;
    cout << "Parcial 3: ";
    cin >> nota_3;
    cout << "Examen final: ";
    cin >> examen_final;
    cout << "Trabajo final: ";
    cin >> trabajo_final;

    promedio = (nota_1 + nota_2 + nota_3) / 3;
    nota_final = (promedio * 0.55) + (examen_final * 0.30) + (trabajo_final * 0.15);

    cout << "Nota final: " << nota_final << endl;

    
}