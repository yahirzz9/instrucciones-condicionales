// Ejercicio 8: Numero de 3 digitos, primer y ultimo digito iguales o diferentes
#include <iostream>
using namespace std;

int main() {
    int numero, primero, ultimo;

    cout << "Ingrese un numero de 3 digitos: ";
    cin >> numero;

    if (numero < 100 || numero > 999) {
        cout << "Error: el numero debe tener 3 digitos." << endl;
        return 0;
    }

    primero = numero / 100;
    ultimo = numero % 10;

    if (primero == ultimo) {
        cout << "El primer y el ultimo digito son IGUALES." << endl;
    } else {
        cout << "El primer y el ultimo digito son DIFERENTES." << endl;
    }
    return 0;
}
