// Ejercicio 15: Aprobado o desaprobado segun el promedio de 3 notas
// Nota minima aprobatoria: 10.5 (se redondea a 11)
#include <iostream>
using namespace std;

int main() {
    double n1, n2, n3, promedio;

    cout << "Ingrese la nota 1: "; cin >> n1;
    cout << "Ingrese la nota 2: "; cin >> n2;
    cout << "Ingrese la nota 3: "; cin >> n3;

    promedio = (n1 + n2 + n3) / 3;

    cout << "Promedio = " << promedio << endl;

    if (promedio >= 10.5) {
        cout << "El alumno APROBO." << endl;
    } else {
        cout << "El alumno DESAPROBO." << endl;
    }
    return 0;
}
