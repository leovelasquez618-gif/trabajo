#include <iostream>
using namespace std;

int main() {
    int numeroActual = 1;
    int sumaPares = 0;

    while (numeroActual <= 10) {
        cout << "Numero: " << numeroActual << endl;
        if (numeroActual % 2 == 0)
            sumaPares = sumaPares + numeroActual;
        numeroActual = numeroActual + 1;
    }

    cout << "La suma total de los numeros pares es: " << sumaPares << endl;

    return 0;
}