// Ejercicio 11: Ordenar cinco numeros de mayor a menor (metodo burbuja)
#include <iostream>
using namespace std;

int main() {
    double n[5], aux;

    for (int i = 0; i < 5; i++) {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> n[i];
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (n[j] < n[j + 1]) {
                aux = n[j];
                n[j] = n[j + 1];
                n[j + 1] = aux;
            }
        }
    }

    cout << "Ordenados de mayor a menor: ";
    for (int i = 0; i < 5; i++) {
        cout << n[i] << " ";
    }
    cout << endl;
    return 0;
}
