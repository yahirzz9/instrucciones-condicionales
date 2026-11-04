// Ejercicio 2: Verificar si un entero es multiplo de 7
#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    if (numero % 7 == 0) {
        cout << numero << " es multiplo de 7." << endl;
    } else {
        cout << numero << " NO es multiplo de 7." << endl;
    }
    return 0;
}
