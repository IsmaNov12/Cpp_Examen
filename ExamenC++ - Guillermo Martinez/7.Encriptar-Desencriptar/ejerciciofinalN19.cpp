#include <iostream>
#include <string>
using namespace std;

// Guillermo Ismael Martinez Caballero

string encryptWord(const string &word, int key);

int main() {

    // Ejercicio 19: Encriptar palabras

    cout << "Ejercicio 19" << endl << endl;

    string word;
    int key;

    cout << "Ingrese una palabra para encriptar: ";
    cin >> word;

    do {
        cout << "Ingrese una clave de encriptacion (1 a 5): ";
        cin >> key;
    } while (key < 1 || key > 5);


    string encryptedWord = encryptWord(word, key);
    cout << "Palabra encriptada: " << encryptedWord << endl;

    return 0;
}

string encryptWord(const string &word, int key) {
    string encrypted = word;
    for (char &ch : encrypted) {
        ch = static_cast<char>(ch + key); // Sumar la clave al valor ASCII
    }
    return encrypted;
}
