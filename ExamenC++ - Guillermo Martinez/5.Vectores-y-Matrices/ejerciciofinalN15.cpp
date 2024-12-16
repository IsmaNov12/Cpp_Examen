#include <iostream>
#include <limits>
using namespace std;

// Guillermo Ismael Martinez Caballero

int main() {
    // Ejercicio 15: Multiplicar dos matrices de 2x2 ingresadas por el usuario

    std::cout << "Ejercicio 15" << std::endl;
    int matriz1[2][2], matriz2[2][2], resultado[2][2] = {0};

    std::cout << "Ingresa los elementos de la primera matriz 2x2:" << std::endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            while (true) {
                std::cout << "Elemento [" << i << "," << j << "]: ";
                std::cin >> matriz1[i][j];
                if (std::cin.fail()) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "Error: por favor, ingresa un numero valido." << std::endl;
                } else {
                    break;
                }
            }
        }
    }

    std::cout << "Ingresa los elementos de la segunda matriz 2x2:" << std::endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            while (true) {
                std::cout << "Elemento [" << i << "," << j << "]: ";
                std::cin >> matriz2[i][j];
                if (std::cin.fail()) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "Error: por favor, ingresa un numero valido." << std::endl;
                } else {
                    break;
                }
            }
        }
    }

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 2; ++k) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    std::cout << "El resultado de la multiplicacion de las matrices es:" << std::endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            std::cout << resultado[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
