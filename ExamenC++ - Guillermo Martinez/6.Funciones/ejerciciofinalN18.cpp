#include <iostream>
using namespace std;

// Guillermo Ismael Martinez Caballero

// Ejercicio 18: Función para calcular el mayor de tres números
void calcularMayor(int x, int y, int z, int &mayor) {
    mayor = x;
    if (y > mayor) {
        mayor = y;
    }
    if (z > mayor) {
        mayor = z;
    }
}

int main() {
    cout << "Ejercicio 18" << endl;
    int num1, num2, num3, mayor;
    cout << "Ingresa tres numeros:" << endl;
    cout << "Numero 1: ";
    cin >> num1;
    cout << "Numero 2: ";
    cin >> num2;
    cout << "Numero 3: ";
    cin >> num3;
    calcularMayor(num1, num2, num3, mayor);
    cout << "El mayor de los numeros es: " << mayor << endl;
    return 0;
}
