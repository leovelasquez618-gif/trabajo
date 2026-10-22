#include <iostream>
using namespace std;

int main() {
    int sumaTotal = 0;

    cout << "SUMAR NUMEROS DEL 1 AL 10" << endl;

    for (int numeroActual = 1; numeroActual <= 10; numeroActual++) {
        cout << numeroActual << endl;
        sumaTotal = sumaTotal + numeroActual;
    }

    cout << "La suma es: " << sumaTotal << endl;

    return 0;
}