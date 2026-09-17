#include <iostream>
using namespace std;

int main() {
    int año_actual, año_nacimiento, edad;

    cout << "Año actual: ";
    cin >> año_actual;
    cout << "Año de nacimiento: ";
    cin >> año_nacimiento;

    edad = año_actual - año_nacimiento;

    cout << "Edad: " << edad << endl;

    return 0;
}