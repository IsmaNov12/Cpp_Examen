#include <iostream>
#include <limits>
using namespace std;

// Guillermo Ismael Martinez Caballero

int main() {
    // Ejercicio 8: Imprimir día de la semana correspondiente

    int dia;

    cout << "Ejercicio 8" << endl;

    cout << "Ingresa un numero del 1 al 7: ";
    if (!(cin >> dia) || dia < 1 || dia > 7) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada invalida. Ingresa un numero del 1 al 7: ";
        cin >> dia;
    }

    switch (dia) {
        case 1:
            cout << "Lunes" << endl;
            break;
        case 2:
            cout << "Martes" << endl;
            break;
        case 3:
            cout << "Miercoles" << endl;
            break;
        case 4:
            cout << "Jueves" << endl;
            break;
        case 5:
            cout << "Viernes" << endl;
            break;
        case 6:
            cout << "Sabado" << endl;
            break;
        case 7:
            cout << "Domingo" << endl;
            break;
        default:
            cout << "Numero invalido" << endl;
            break;
    }

    return 0;
}
