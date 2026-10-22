#include <iostream>
using namespace std;

int main() {
    int numeroIngresado;

    cout << "Ingrese un numero: ";
    cin >> numeroIngresado;

    if (numeroIngresado == 0) {
        cout << "El numero es nulo." << endl;
    } else if (numeroIngresado % 2 == 0) {
        cout << "El numero es par" << endl;
    } else {
        cout << "El numero es impar" << endl;
    }

    return 0;
}