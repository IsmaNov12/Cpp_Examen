#include <iostream>
#include <string>
using namespace std;

// Guillermo Ismael Martinez Caballero

void decryptWord(const string &encryptedWord);

int main() {

    // Ejercicio 20: Desencriptar palabras

    cout << "Ejercicio 20" << endl << endl;

    string encryptedWord;

    cout << "Ingrese la palabra encriptada: ";
    cin >> encryptedWord;

    cout << "Posibles palabras desencriptadas:" << endl;
    decryptWord(encryptedWord);

    return 0;
}

void decryptWord(const string &encryptedWord) {
    for (int key = 1; key <= 5; ++key) {
        string decrypted = encryptedWord;
        for (char &ch : decrypted) {
            ch = static_cast<char>(ch - key);
        }
        cout << "Con clave " << key << ": " << decrypted << endl;
    }
}
