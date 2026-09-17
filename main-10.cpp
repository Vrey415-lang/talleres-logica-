#include <iostream>
using namespace std;

int main() 
{
    int pesos, unidad_cambiaria, dolares;

    cout << "Cantidad de pesos: ";
    cin >> pesos;
    cout << "Valor de un dólar en pesos: ";
    cin >> unidad_cambiaria;

    dolares = pesos / unidad_cambiaria;

    cout << "Dinero en dólares: " << dolares << endl;

 
}