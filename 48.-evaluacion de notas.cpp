#include <iostream>
using namespace std;

int main()
{
    double notaActual, cantidadNotas, indiceNota = 0;

    cout << "Ingrese la cantidad de notas" << endl;
    cin >> cantidadNotas;

    if (cantidadNotas <= 0) {
        cout << "ERROR: la cantidad de notas debe ser mayor que cero." << endl;
        return 1;
    }

    do {
        cout << "Ingrese la nota del Examen Parcial (0 a 20) " << indiceNota + 1 << ": " << endl;
        cin >> notaActual;

        if (notaActual < 0 || notaActual > 20) {
            cout << endl << "La nota ingresada no es correcta " << endl;
        }
        else if (notaActual >= 10.5 && notaActual <= 20) {
            cout << "Estado: Aprobado" << endl;
        }
        else if (notaActual >= 0 && notaActual <= 10.4) {
            cout << "Estado: Desaprobado" << endl;
        }
        else {
            cout << "nota no valida" << endl;
        }
        indiceNota = indiceNota + 1;
    } while (indiceNota < cantidadNotas);

    return 0;
}