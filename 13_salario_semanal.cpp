// Ejercicio 13: Salario semanal
// Hasta 40 horas: $15 por hora
// Horas extras (mas de 40): $25 por hora
#include <iostream>
using namespace std;

int main() {
    double horas, salario;

    cout << "Ingrese las horas trabajadas en la semana: ";
    cin >> horas;

    if (horas <= 40) {
        salario = horas * 15;
    } else {
        salario = 40 * 15 + (horas - 40) * 25;
    }

    cout << "Salario semanal: $" << salario << endl;
    return 0;
}
