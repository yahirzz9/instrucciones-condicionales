// Ejercicio 6: Indicar si un caracter es minuscula, mayuscula o simbolo
#include <iostream>
using namespace std;

int main() {
    char c;

    cout << "Ingrese un caracter: ";
    cin >> c;

    if (c >= 'a' && c <= 'z') {
        cout << "Es una letra minuscula." << endl;
    } else if (c >= 'A' && c <= 'Z') {
        cout << "Es una letra mayuscula." << endl;
    } else {
        cout << "Es un simbolo (u otro caracter)." << endl;
    }
    return 0;
}
