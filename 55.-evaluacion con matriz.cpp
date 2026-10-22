#include <iostream>

using namespace std;

int main()
{
    int numeroFilas, numeroColumnas;
    float sumaElementos = 0;

    cout << "Ingrese la cantidad de filas: ";
    cin >> numeroFilas;
    cout << "Ingrese la cantidad de columnas: ";
    cin >> numeroColumnas;

    if (numeroFilas <= 0 || numeroColumnas <= 0) {
        cout << "ERROR: las filas y columnas deben ser mayores que cero." << endl;
        return 1;
    }

    int matriz[numeroFilas][numeroColumnas];

    for (int indiceFila = 0; indiceFila < numeroFilas; indiceFila++) {
        for (int indiceColumna = 0; indiceColumna < numeroColumnas; indiceColumna++) {
            cout << "Ingrese el valor para [" << indiceFila << "][" << indiceColumna << "]: ";
            cin >> matriz[indiceFila][indiceColumna];
            sumaElementos += matriz[indiceFila][indiceColumna];
        }
    }

    cout << endl;

    cout << "ARREGLO BIDIMENSIONAL" << endl;

    cout << endl;

    for (int indiceFila = 0; indiceFila < numeroFilas; indiceFila++) {
        for (int indiceColumna = 0; indiceColumna < numeroColumnas; indiceColumna++) {
            cout << matriz[indiceFila][indiceColumna] << "\t ";
        }
        cout << endl;
    }

    cout << "La suma de todos los elementos es: " << sumaElementos << endl;

    return 0;
}