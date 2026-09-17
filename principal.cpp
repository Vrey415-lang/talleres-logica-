#include <iostream>
using namespace std;

int main()
{
    double sueldo_base, venta1, venta2, venta3;
    double comisiones, total;

    cout << "Sueldo base: ";
    cin >> sueldo_base;
    cout << "Venta 1: ";
    cin >> venta1;
    cout << "Venta 2: ";
    cin >> venta2;
    cout << "Venta 3: ";
    cin >> venta3;

    comisiones = (venta1 + venta2 + venta3) * 0.10;
    total = sueldo_base + comisiones;

    cout << "Comisiones: " << comisiones << endl;
    cout << "Sueldo base: " << sueldo_base << endl;
    cout << "Total: " << total << endl;

}