// Ejercicio 1: Valor absoluto de un numero
#include <iostream>
using namespace std;

int main() {
    double numero, absoluto;

    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero < 0) {
        absoluto = -numero;
    } else {
        absoluto = numero;
    }

    cout << "Valor absoluto = " << absoluto << endl;
    return 0;
}
