#include <iostream>
using namespace std;

int main() {
    int numeroActual = 1;
    int sumaTotal = 0;

    while (numeroActual <= 10) {
        cout << "Numero: " << numeroActual << endl;
        sumaTotal = sumaTotal + numeroActual;
        numeroActual = numeroActual + 1;
    }

    cout << "La suma total es: " << sumaTotal << endl;

    return 0;
}