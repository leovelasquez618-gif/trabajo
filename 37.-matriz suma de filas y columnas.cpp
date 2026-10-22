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
    int sumaColumnas[50] = {0};

    cout << "Ingreso de elementos" << endl;
    for (int indiceFila = 0; indiceFila < numeroFilas; indiceFila++) {
        for (int indiceColumna = 0; indiceColumna < numeroColumnas; indiceColumna++) {
            cout << "Elemento [" << indiceFila << "][" << indiceColumna << "]: ";
            cin >> matriz[indiceFila][indiceColumna];
            sumaColumnas[indiceColumna] += matriz[indiceFila][indiceColumna];
        }
    }

    cout << "\nMatriz y suma por filas" << endl;
    for (int indiceFila = 0; indiceFila < numeroFilas; indiceFila++) {
        int sumaFila = 0;
        for (int indiceColumna = 0; indiceColumna < numeroColumnas; indiceColumna++) {
            cout << matriz[indiceFila][indiceColumna] << "\t";
            sumaFila += matriz[indiceFila][indiceColumna];
        }
        cout << "| Suma fila: " << sumaFila << endl;
    }

    cout << "Suma de cada columna:\n";
    for (int indiceColumna = 0; indiceColumna < numeroColumnas; indiceColumna++) {
        cout << sumaColumnas[indiceColumna] << "\t";
    }
    cout << endl;

    return 0;
}