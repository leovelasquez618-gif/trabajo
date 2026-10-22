#include <iostream>

using namespace std;

int main()
{
    int cantidadNotas = 0;
    double sumaNotas = 0, notaActual;

    cout << "Ingrese la cantidad de notas: " << endl;
    cin >> cantidadNotas;

    if (cantidadNotas <= 0) {
        cout << "ERROR: la cantidad de notas debe ser mayor que cero." << endl;
        return 1;
    }

    double notas[cantidadNotas];

    for (int indiceNota = 0; indiceNota < cantidadNotas; indiceNota++) {
        cout << "Ingrese la nota " << indiceNota + 1 << ": " << endl;
        cin >> notaActual;
        notas[indiceNota] = notaActual;
        sumaNotas = sumaNotas + notaActual;
    }

    cout << "LA LISTA DE TODAS LAS NOTAS" << endl;
    for (int indiceNota = 0; indiceNota < cantidadNotas; indiceNota++) {
        cout << "Nota en indice [" << indiceNota << "]: " << notas[indiceNota] << endl;
    }

    cout << "El promedio de notas es: " << sumaNotas / cantidadNotas << endl;

    return 0;
}