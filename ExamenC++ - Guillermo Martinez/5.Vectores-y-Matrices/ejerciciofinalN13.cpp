#include <iostream>
#include <vector>
#include <limits>
using namespace std;

// Guillermo Ismael Martinez Caballero

int main() {
    // Ejercicio 13: Almacenar en un vector cinco números ingresados por el usuario y los imprime en orden inverso

    std::cout << "Ejercicio 13" << std::endl;
    std::vector<int> numeros(5);
    std::cout << "Ingresa 5 numeros:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        while (true) {
            std::cout << "Numero " << i + 1 << ": ";
            std::cin >> numeros[i];
            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Error: por favor, ingresa un numero valido." << std::endl;
            } else {
                break;
            }
        }
    }
    std::cout << "Numeros en orden inverso:" << std::endl;
    for (int i = 4; i >= 0; --i) {
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
