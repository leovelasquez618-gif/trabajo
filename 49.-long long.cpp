#include <iostream>
using namespace std;

int main() {
    int cantidadTerminos;
    long long terminoAnterior = 0, terminoActual = 1, terminoSiguiente;
    int indiceTermino = 1;

    cout << "Ingrese la cantidad de terminos: ";
    cin >> cantidadTerminos;

    if (cantidadTerminos > 0) {
        do {
            if (indiceTermino == 1) {
                cout << terminoAnterior << " ";
            } else if (indiceTermino == 2) {
                cout << terminoActual << " ";
            } else {
                terminoSiguiente = terminoAnterior + terminoActual;
                terminoAnterior = terminoActual;
                terminoActual = terminoSiguiente;
                cout << terminoSiguiente << " ";
            }
            indiceTermino++;
        } while (indiceTermino <= cantidadTerminos);
    } else {
        cout << "Por favor, ingrese un numero mayor a 0." << endl;
    }

    return 0;
}