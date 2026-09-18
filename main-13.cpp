#include <iostream>
using namespace std;

int main()
{
    float inversion_1, inversion_2, inversion_3;
    float inversion_total, porcentaje1, porcentaje2, porcentaje3;

    cout << "Inversión 1: ";
    cin >> inversion_1;
    cout << "Inversión 2: ";
    cin >> inversion_2;
    cout << "Inversión 3: ";
    cin >> inversion_3;

    inversion_total = inversion_1 + inversion_2 + inversion_3;
    porcentaje1 = (inversion_1 / inversion_total) * 100;
    porcentaje2 = (inversion_2 / inversion_total) * 100;
    porcentaje3 = (inversion_3 / inversion_total) * 100;

    cout << "Porcentaje 1: " << porcentaje1 << endl;
    cout << "Porcentaje 2: " << porcentaje2 << endl;
    cout << "Porcentaje 3: " << porcentaje3 << endl;

   
}