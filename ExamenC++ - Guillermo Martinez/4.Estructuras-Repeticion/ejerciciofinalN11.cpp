#include <iostream>
#include <limits>
using namespace std;

// Guillermo Ismael Martinez Caballero

int main() {
    // Ejercicio 11: Sumar números hasta que se ingrese un número negativo

    int suma = 0, numeroIngresado;

    cout << "Ejercicio 11" << endl;
    cout << "Ingresa numeros (ingresa un numero negativo para terminar): ";


    do {

        while (!(cin >> numeroIngresado)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrada invalida. Ingresa un numero entero: ";
        }

        if (numeroIngresado >= 0) {
            suma += numeroIngresado;
            cout << "Suma acumulada: " << suma << endl;
        }
    } while (numeroIngresado >= 0);

    cout << "Suma final de todos los numeros ingresados: " << suma << endl;

    return 0;
}

