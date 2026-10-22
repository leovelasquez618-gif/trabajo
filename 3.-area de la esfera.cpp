#include <iostream>
using namespace std;

int main() {
    const double valorPi = 3.14159265358979;
    double radioEsfera, areaSuperficieEsfera;

    cout << "Ingrese el radio de la esfera: ";
    cin >> radioEsfera;

    areaSuperficieEsfera = 4.0 * valorPi * radioEsfera * radioEsfera;

    cout << "El area de la esfera es: " << areaSuperficieEsfera << endl;

    return 0;
}