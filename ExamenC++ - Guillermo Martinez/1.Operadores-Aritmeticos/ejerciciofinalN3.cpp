#include <iostream>
#include <limits>
using namespace std;

// Guillermo Ismael Martinez Caballero

int main() {
    // Ejercicio 3: Promedio y diferencia entre el mayor y menor de tres números

    int num1, num2, num3;

    cout << "Ejercicio 3" << endl;


    cout << "Ingresa el primer numero: ";
    while (!(cin >> num1)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada invalida. Ingresa un numero entero: ";
    }
    cout << "Ingresa el segundo numero: ";
    while (!(cin >> num2)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada invalida. Ingresa un numero entero: ";
    }
    cout << "Ingresa el tercer numero: ";
    while (!(cin >> num3)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada invalida. Ingresa un numero entero: ";
    }

    double promedio = (num1 + num2 + num3) / 3.0;
    int mayor = max(max(num1, num2), num3);
    int menor = min(min(num1, num2), num3);
    int diferencia = mayor - menor;

    cout << "Promedio: " << promedio << endl;
    cout << "Diferencia entre mayor y menor: " << diferencia << endl;

    return 0;
}
