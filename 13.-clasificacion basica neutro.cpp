#include <iostream>
using namespace std;

int main() {
    double numeroIngresado;

    cout << "Ingrese un numero: ";
    cin >> numeroIngresado;

    if (numeroIngresado > 0) {
        cout << "El numero es positivo." << endl;
    } else if (numeroIngresado < 0) {
        cout << "El numero es negativo." << endl;
    } else {
        cout << "El numero es neutro." << endl;
    }

    return 0;
}