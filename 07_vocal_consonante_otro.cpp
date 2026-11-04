// Ejercicio 7: Indicar si un caracter es vocal, consonante u otro
#include <iostream>
using namespace std;

int main() {
    char c;

    cout << "Ingrese un caracter: ";
    cin >> c;

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        cout << "Es una vocal." << endl;
    } else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        cout << "Es una consonante." << endl;
    } else {
        cout << "Es otro caracter." << endl;
    }
    return 0;
}
