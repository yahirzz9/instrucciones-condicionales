// Ejercicio 9: Numero de 3 digitos, por lo menos 2 digitos iguales
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

    d1 = numero / 100;        // centenas
    d2 = (numero / 10) % 10;  // decenas
    d3 = numero % 10;         // unidades

    if (d1 == d2 || d1 == d3 || d2 == d3) {
        cout << "Por lo menos 2 digitos son iguales." << endl;
    } else {
        cout << "Todos los digitos son diferentes." << endl;
    }
    return 0;
}
