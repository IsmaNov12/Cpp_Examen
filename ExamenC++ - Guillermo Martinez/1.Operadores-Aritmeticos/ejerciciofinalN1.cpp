#include <iostream>
#include <limits>
using namespace std;

// Guillermo Ismael Martinez Caballero

int main() {
    // Ejercicio 1: Suma, resta, multiplicación y división de dos números

    int num1, num2;

    cout << "Ejercicio 1" << endl;

    cout << "Ingresa el primer numero entero: ";
    while (!(cin >> num1)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada invalida. Ingresa un numero entero valido: ";
    }

    cout << "Ingresa el segundo numero entero: ";
    while (!(cin >> num2)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada invalida. Ingresa un numero entero valido: ";
    }

    cout << "Suma: " << num1 + num2 << endl;
    cout << "Resta: " << num1 - num2 << endl;
    cout << "Multiplicacion: " << num1 * num2 << endl;

    if (num2 != 0)
        cout << "Division: " << static_cast<double>(num1) / num2 << endl;
    else
        cout << "Division por cero no permitida" << endl;

    return 0;
}
