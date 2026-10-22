#include <iostream>
using namespace std;

int main() {
    const double valorPi = 3.14159265358979;
    double semiejeMayorElipse, semiejeMenorElipse, areaElipse;

    cout << "Ingrese el semieje mayor: ";
    cin >> semiejeMayorElipse;
    cout << "Ingrese el semieje menor: ";
    cin >> semiejeMenorElipse;

    areaElipse = valorPi * semiejeMayorElipse * semiejeMenorElipse;

    cout << "El area de la elipse es: " << areaElipse << endl;

    return 0;
}