// Ejercicio 12: Tienda de calzado con descuento por compra al por mayor
// Precio por par: $50
// Mas de 10 pares  -> 15%
// De 20 a 30 pares -> 25%
// Mas de 30 pares  -> 40%
#include <iostream>
using namespace std;

int main() {
    const double PRECIO = 50;
    int pares;
    double total, descuento, totalFinal;

    cout << "Ingrese la cantidad de pares de calzado: ";
    cin >> pares;

    total = pares * PRECIO;

    if (pares > 30) {
        descuento = total * 0.40;
    } else if (pares >= 20) {
        descuento = total * 0.25;
    } else if (pares > 10) {
        descuento = total * 0.15;
    } else {
        descuento = 0;
    }

    totalFinal = total - descuento;

    cout << "Total sin descuento: $" << total << endl;
    cout << "Descuento: $" << descuento << endl;
    cout << "Total a pagar: $" << totalFinal << endl;
    return 0;
}
