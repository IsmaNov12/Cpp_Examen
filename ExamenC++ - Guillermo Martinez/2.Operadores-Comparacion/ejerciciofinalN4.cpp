#include <iostream>
#include <limits>
using namespace std;

// Guillermo Ismael Martinez Caballero

int main() {
    // Ejercicio 4: Determinar cuál número es mayor o si son iguales

    int num1, num2;
    bool primerMayor, segundoMayor, iguales;

    cout << "Ejercicio 4" << endl;


    cout << "Ingresa el primer numero: ";
    cin >> num1;

    cout << "Ingresa el segundo numero: ";
    cin >> num2;


    primerMayor = num1 > num2;
    segundoMayor = num1 < num2;
    iguales = num1 == num2;


    primerMayor && cout << "El primer numero es mayor" << endl;
    segundoMayor && cout << "El segundo numero es mayor" << endl;
    iguales && cout << "Ambos numeros son iguales" << endl;

    return 0;
}

