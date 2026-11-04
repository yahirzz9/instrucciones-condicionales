// Ejercicio 5: Mayor de cinco numeros
#include <iostream>
using namespace std;

int main() {
    double a, b, c, d, e, mayor;

    cout << "Ingrese el numero 1: "; cin >> a;
    cout << "Ingrese el numero 2: "; cin >> b;
    cout << "Ingrese el numero 3: "; cin >> c;
    cout << "Ingrese el numero 4: "; cin >> d;
    cout << "Ingrese el numero 5: "; cin >> e;

    mayor = a;
    if (b > mayor) mayor = b;
    if (c > mayor) mayor = c;
    if (d > mayor) mayor = d;
    if (e > mayor) mayor = e;

    cout << "El mayor es: " << mayor << endl;
    return 0;
}
