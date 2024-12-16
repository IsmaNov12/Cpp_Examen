#include <iostream>
#include <limits>
using namespace std;

// Guillermo Ismael Martinez Caballero

int main() {
    // Ejercicio 5: Orden ascendente, descendente o desordenado de tres números
    int num1, num2, num3;
    bool ascendente, descendente, desordenados;

    cout << "Ejercicio 5" << endl;

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

    cout << "Ingresa el tercer numero entero: ";
    while (!(cin >> num3)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada invalida. Ingresa un numero entero valido: ";
    }

    ascendente = (num1 <= num2) && (num2 <= num3);
    descendente = (num1 >= num2) && (num2 >= num3);
    desordenados = !ascendente && !descendente;

    ascendente && cout << "Los numeros estan en orden ascendente" << endl;
    descendente && cout << "Los numeros estan en orden descendente" << endl;
    desordenados && cout << "Los numeros estan desordenados" << endl;

    return 0;
}
