#include <iostream>
#include <limits>
using namespace std;

// Guillermo Ismael Martinez Caballero

int main() {
    // Ejercicio 9: Simular un menú de operaciones matemáticas
    int num1, num2, opcion;

    cout << "Ejercicio 9" << endl;

    cout << "Elige una operacion (1: Suma, 2: Resta, 3: Multiplicacion, 4: Division): ";
    while (!(cin >> opcion) || opcion < 1 || opcion > 4) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Opcion invalida. Elige una operacion (1: Suma, 2: Resta, 3: Multiplicacion, 4: Division): ";
    }

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

    switch (opcion) {
        case 1:
            cout << "Resultado: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Resultado: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Resultado: " << num1 * num2 << endl;
            break;
        case 4:
            if (num2 != 0)
                cout << "Resultado: " << static_cast<double>(num1) / num2 << endl;
            else
                cout << "Division por cero no permitida" << endl;
            break;
        default:
            cout << "Opcion invalida" << endl;
            break;
    }

    return 0;
}
