#include <iostream>
using namespace std;

// Guillermo Ismael Martinez Caballero

// Ejercicio 17: Función para intercambiar valores
void intercambiar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    cout << "Ejercicio 17" << endl;
    int num1, num2;
    cout << "Ingresa dos numeros para intercambiar sus valores:" << endl;
    cout << "Numero 1: ";
    cin >> num1;
    cout << "Numero 2: ";
    cin >> num2;
    intercambiar(num1, num2);
    cout << "Despues del intercambio:" << endl;
    cout << "Numero 1: " << num1 << endl;
    cout << "Numero 2: " << num2 << endl;
    return 0;
}
