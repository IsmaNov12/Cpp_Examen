#include <iostream>
using namespace std;

// Guillermo Ismael Martinez Caballero

// Ejercicio 16: Función para sumar dos números
int sumar(int a, int b) {
    return a + b;
}

int main() {
    cout << "Ejercicio 16" << endl;
    int num1, num2;
    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;
    cout << "La suma de " << num1 << " y " << num2 << " es: " << sumar(num1, num2) << endl;
    return 0;
}
