// Ejercicio 4: Menor de tres numeros
#include <iostream>
using namespace std;

int main() {
    double a, b, c, menor;

    cout << "Ingrese el primer numero: "; cin >> a;
    cout << "Ingrese el segundo numero: "; cin >> b;
    cout << "Ingrese el tercer numero: "; cin >> c;

    menor = a;
    if (b < menor) {
        menor = b;
    }
    if (c < menor) {
        menor = c;
    }

    cout << "El menor es: " << menor << endl;
    return 0;
}
