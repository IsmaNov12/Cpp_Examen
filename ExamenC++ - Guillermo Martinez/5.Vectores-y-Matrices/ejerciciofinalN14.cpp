#include <iostream>
#include <limits>
#include <algorithm>
using namespace std;

// Guillermo Ismael Martinez Caballero

int main() {
    // Ejercicio 14: Llenar una matriz de 2x2, mostrar la matriz ordenada y calcular la suma de sus elementos

    std::cout << "Ejercicio 14" << std::endl;
    int matriz[2][2];
    std::cout << "Ingresa los elementos de la matriz 2x2:" << std::endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            while (true) {
                std::cout << "Elemento [" << i << "," << j << "]: ";
                std::cin >> matriz[i][j];
                if (std::cin.fail()) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "Error: por favor, ingresa un número válido." << std::endl;
                } else {
                    break;
                }
            }
        }
    }

    int tempArray[4];
    int k = 0;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            tempArray[k++] = matriz[i][j];
        }
    }

    std::sort(tempArray, tempArray + 4);

    std::cout << "Matriz ordenada:" << std::endl;
    k = 0;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            matriz[i][j] = tempArray[k++];
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

    int suma = 0;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            suma += matriz[i][j];
        }
    }

    std::cout << "La suma de los elementos de la matriz es: " << suma << std::endl;

    return 0;
}

