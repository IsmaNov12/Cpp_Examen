#include <iostream>
#include <limits>
using namespace std;

// Guillermo Ismael Martinez Caballero

int main() {
    // Ejercicio 7: Determinar si un número es positivo, negativo o cero

    int numero;

    cout << "Ejercicio 7" << endl;

    cout << "Ingresa un numero: ";
    if (!(cin >> numero)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada invalida. Ingresa un numero entero: ";
        cin >> numero;
    }

    if (numero > 0) {
        cout << "El numero es positivo" << endl;
    } else if (numero < 0) {
        cout << "El numero es negativo" << endl;
    } else {
        cout << "El numero es cero" << endl;
    }

    return 0;
}
