#include <iostream>
using namespace std;

int main() {
    int numeroActual = 1;
    int sumaPares = 0;
    int sumaImpares = 0;
    int sumaTotal = 0;

    while (numeroActual <= 10) {
        cout << "Numero: " << numeroActual << endl;
        if (numeroActual % 2 != 0) {
            sumaImpares = sumaImpares + numeroActual;
        }
        if (numeroActual % 2 == 0) {
            sumaPares = sumaPares + numeroActual;
        }
        sumaTotal = sumaTotal + numeroActual;
        numeroActual = numeroActual + 1;
    }

    cout << "La suma total de los numeros pares es: " << sumaPares << endl;
    cout << "La suma total de los numeros impares es: " << sumaImpares << endl;
    cout << "La suma total de los numeros es: " << sumaTotal << endl;

    return 0;
}