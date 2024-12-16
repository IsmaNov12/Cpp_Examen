#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

// Guillermo Ismael Martinez Caballero

int main() {
    // Ejercicio 2: Área y circunferencia de un círculo

    const double PI = 3.1416;
    double radio;

    cout << "Ejercicio 2" << endl;


    cout << "Ingresa el radio del circulo: ";
    while (!(cin >> radio) || radio <= 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada invalida. Ingresa un numero positivo: ";
    }

    double area = PI * pow(radio, 2);
    double circunferencia = 2 * PI * radio;

    cout << "Area: " << area << endl;
    cout << "Circunferencia: " << circunferencia << endl;

    return 0;
}
