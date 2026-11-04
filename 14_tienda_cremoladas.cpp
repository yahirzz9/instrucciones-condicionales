// Ejercicio 14: Tienda de cremoladas con descuento por membresia
// Tipo A: 10%   Tipo B: 15%   Tipo C: 20%
#include <iostream>
using namespace std;

int main() {
    double precio, descuento, precioFinal;
    char tipo;

    cout << "Ingrese el precio de la compra: ";
    cin >> precio;
    cout << "Ingrese el tipo de membresia (A, B o C): ";
    cin >> tipo;

    if (tipo == 'A' || tipo == 'a') {
        descuento = precio * 0.10;
    } else if (tipo == 'B' || tipo == 'b') {
        descuento = precio * 0.15;
    } else if (tipo == 'C' || tipo == 'c') {
        descuento = precio * 0.20;
    } else {
        cout << "Tipo de membresia no valido." << endl;
        return 0;
    }

    precioFinal = precio - descuento;

    cout << "Descuento: " << descuento << endl;
    cout << "Precio final: " << precioFinal << endl;
    return 0;
}
