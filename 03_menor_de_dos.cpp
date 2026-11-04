// Ejercicio 3: Menor de dos numeros
#include <iostream>
using namespace std;

int main() {
    double a, b;

    cout << "Ingrese el primer numero: "; cin >> a;
    cout << "Ingrese el segundo numero: "; cin >> b;

    if (a < b) {
        cout << "El menor es: " << a << endl;
    } else if (b < a) {
        cout << "El menor es: " << b << endl;
    } else {
        cout << "Los dos numeros son iguales." << endl;
    }
    return 0;
}
