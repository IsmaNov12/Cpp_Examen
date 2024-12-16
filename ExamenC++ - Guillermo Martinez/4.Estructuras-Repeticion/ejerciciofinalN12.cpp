#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

// Guillermo Ismael Martinez Caballero

int main() {
    // Ejercicio 12: Menú con opciones de cálculo

    int opcion = 0, numero;

    cout << "Ejercicio 12" << endl;

    do {
        cout << "Menu:\n1. Calcular el cuadrado de un numero\n2. Calcular el cubo de un numero\n3. Salir" << endl;
        cout << "Elige una opcion: ";

        while (!(cin >> opcion) || (opcion < 1 || opcion > 3)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Opcion invalida. Elige una opcion (1, 2 o 3): ";
        }


        switch (opcion) {
            case 1:
                cout << "Ingresa un numero: ";
                while (!(cin >> numero)) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Entrada invalida. Ingresa un numero entero: ";
                }
                cout << "Cuadrado: " << pow(numero, 2) << endl;
                break;
            case 2:
                cout << "Ingresa un numero: ";
                while (!(cin >> numero)) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Entrada invalida. Ingresa un numero entero: ";
                }
                cout << "Cubo: " << pow(numero, 3) << endl;
                break;
            case 3:
                cout << "Saliendo del programa..." << endl;
                break;
            default:

                cout << "Opcion invalida" << endl;
                break;
        }
    } while (opcion != 3);

    return 0;
}
