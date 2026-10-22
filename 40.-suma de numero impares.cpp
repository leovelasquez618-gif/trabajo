#include <iostream>
using namespace std;

int main() {
    int numeroActual = 1;
    int sumaImpares = 0;

    while (numeroActual <= 10) {
        cout << "Numero: " << numeroActual << endl;
        if (numeroActual % 2 != 0) {
            sumaImpares = sumaImpares + numeroActual;
        }
        numeroActual = numeroActual + 1;
    }

    cout << "La suma total de los numeros impares es: " << sumaImpares << endl;

    return 0;
}