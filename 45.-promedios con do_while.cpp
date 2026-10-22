#include <iostream>
using namespace std;

int main()
{
    int indiceActual = 1, sumaTotal = 0, cantidadDatos = 0, numeroIngresado = 0;

    cout << "ingrese la cantidad de datos : ";
    cin >> cantidadDatos;

    if (cantidadDatos <= 0) {
        cout << "ERROR: la cantidad de datos debe ser mayor que cero." << endl;
        return 1;
    }

    do {
        cout << "Ingrese numero :" << indiceActual << endl;
        cin >> numeroIngresado;
        sumaTotal = sumaTotal + numeroIngresado;
        indiceActual = indiceActual + 1;
    } while (indiceActual <= cantidadDatos);

    cout << "Suma total = " << sumaTotal << endl;
    cout << "Promedio = " << static_cast<double>(sumaTotal) / cantidadDatos << endl;
    return 0;
}