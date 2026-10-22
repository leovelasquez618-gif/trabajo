#include <iostream>

using namespace std;

int main() {
    int numeroFilas, numeroColumnas;

    cout << "Ingrese el numero de filas: ";
    cin >> numeroFilas;
    cout << "Ingrese el numero de columnas: ";
    cin >> numeroColumnas;

    if (numeroFilas <= 0 || numeroFilas > 50 || numeroColumnas <= 0 || numeroColumnas > 50) {
        cout << "ERROR: las filas y columnas deben estar entre 1 y 50." << endl;
        return 1;
    }

    int matriz[50][50];

    cout << "Ingrese los elementos" << endl;
    for (int indiceFila = 0; indiceFila < numeroFilas; indiceFila++) {
        for (int indiceColumna = 0; indiceColumna < numeroColumnas; indiceColumna++) {
            cout << "A [" << indiceFila << "][" << indiceColumna << "]: ";
            cin >> matriz[indiceFila][indiceColumna];
        }
    }

    for (int indiceFila = 0; indiceFila < numeroFilas; indiceFila++) {
        for (int indiceColumna = 0; indiceColumna < numeroColumnas; indiceColumna++) {

            cout << matriz[indiceFila][indiceColumna] << "\t";
        }
        cout << endl;
    }

    return 0;
}