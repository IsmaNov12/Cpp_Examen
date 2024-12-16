#include <iostream>
#include <limits>
using namespace std;

// Guillermo Ismael Martinez Caballero

int main() {
    // Ejercicio 6: Verificar si todos los números son mayores que un número de referencia

    int num1, num2, num3, num4, num5, referencia;
    bool todosMayores, ningunMayor, algunosMayores;

    cout << "Ejercicio 6" << endl;

    cout << "Ingresa el primer numero: ";
    cin >> num1;

    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    cout << "Ingresa el tercer numero: ";
    cin >> num3;

    cout << "Ingresa el cuarto numero: ";
    cin >> num4;

    cout << "Ingresa el quinto numero: ";
    cin >> num5;

    cout << "Ingresa el numero de referencia: ";
    cin >> referencia;

    todosMayores = (num1 > referencia) && (num2 > referencia) && (num3 > referencia) && (num4 > referencia) && (num5 > referencia);
    ningunMayor = (num1 <= referencia) && (num2 <= referencia) && (num3 <= referencia) && (num4 <= referencia) && (num5 <= referencia);
    algunosMayores = !todosMayores && !ningunMayor;

    todosMayores && cout << "Todos los numeros son mayores que el numero de referencia" << endl;
    ningunMayor && cout << "Ninguno de los numeros es mayor que el numero de referencia" << endl;
    algunosMayores && cout << "Solo algunos numeros son mayores que el numero de referencia" << endl;

    return 0;
}
