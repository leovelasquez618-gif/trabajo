#include <iostream>
using namespace std;

int main() {
    int sumaNotas = 0, notaActual = 0, cantidadNotas = 0;

    cout << "PROMEDIO DE NOTAS" << endl;
    cout << "Leer n notas" << endl;
    cin >> cantidadNotas;

    if (cantidadNotas <= 0) {
        cout << "ERROR: la cantidad de notas debe ser mayor que cero." << endl;
        return 1;
    }

    for (int indiceNota = 1; indiceNota <= cantidadNotas; indiceNota++) {
        cout << "Ingrese la nota " << indiceNota << ": " << endl;
        cin >> notaActual;
        sumaNotas = sumaNotas + notaActual;
    }

    cout << "La suma de notas es: " << sumaNotas << endl;
    cout << "El promedio de notas es: " << static_cast<double>(sumaNotas) / cantidadNotas << endl;

    return 0;
}