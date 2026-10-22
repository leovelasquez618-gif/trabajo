#include <iostream>
using namespace std;

int main() {
    const double valorPi = 3.14159265358979;
    double radioCirculo, areaCirculo;

    cout << "Ingrese el radio del circulo: ";
    cin >> radioCirculo;

    areaCirculo = valorPi * radioCirculo * radioCirculo;

    cout << "El area del circulo es: " << areaCirculo << endl;

    return 0;
}
