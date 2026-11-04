// Ejercicio 10: Numero de 3 digitos, algun digito es multiplo de otro
#include <iostream>
using namespace std;

int main() {
    int numero, d1, d2, d3;

    cout << "Ingrese un numero de 3 digitos: ";
    cin >> numero;

    if (numero < 100 || numero > 999) {
        cout << "Error: el numero debe tener 3 digitos." << endl;
        return 0;
    }

    d1 = numero / 100;
    d2 = (numero / 10) % 10;
    d3 = numero % 10;

    // a es multiplo de b si b no es 0 y a % b == 0
    if ((d2 != 0 && d1 % d2 == 0) || (d3 != 0 && d1 % d3 == 0) ||
        (d1 != 0 && d2 % d1 == 0) || (d3 != 0 && d2 % d3 == 0) ||
        (d1 != 0 && d3 % d1 == 0) || (d2 != 0 && d3 % d2 == 0)) {
        cout << "Si, hay un digito que es multiplo de otro." << endl;
    } else {
        cout << "No, ningun digito es multiplo de otro." << endl;
    }
    return 0;
}
