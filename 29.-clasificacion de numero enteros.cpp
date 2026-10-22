#include <iostream>
using namespace std;

int main() {
    int sumaNumeros = 0;
    int contadorNulos = 0, contadorPares = 0, contadorImpares = 0, numeroActual = 0;
    const int TOTAL_NUMEROS = 10;

    cout << "NUMEROS PARES E IMPARES" << endl;

    for (int indiceNumero = 1; indiceNumero <= TOTAL_NUMEROS; indiceNumero++) {
        cout << "Ingrese el numero " << indiceNumero << ": " << endl;
        cin >> numeroActual;
        sumaNumeros = sumaNumeros + numeroActual;

        if (numeroActual == 0) {
            contadorNulos += 1;
        }

        if (numeroActual % 2 == 0) {
            contadorPares += 1;
        }

        if (numeroActual % 2 == 1) {
            contadorImpares += 1;
        }
    }

    cout << "Suma total de numeros : " << sumaNumeros << endl;
    cout << "Total de numeros pares : " << contadorPares << endl;
    cout << "Total de numeros impares : " << contadorImpares << endl;
    cout << "Total de numeros nulos : " << contadorNulos << endl;

    return 0;
}