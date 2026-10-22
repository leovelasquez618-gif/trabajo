#include <iostream>
using namespace std;

int main() {
    double baseRectangulo, alturaRectangulo, areaRectangulo, perimetroRectangulo;

    cout << "Ingrese la base del rectangulo: ";
    cin >> baseRectangulo;
    cout << "Ingrese la altura del rectangulo: ";
    cin >> alturaRectangulo;

    areaRectangulo = baseRectangulo * alturaRectangulo;
    perimetroRectangulo = 2.0 * (baseRectangulo + alturaRectangulo);

    cout << "El area del rectangulo es: " << areaRectangulo << endl;
    cout << "El perimetro del rectangulo es: " << perimetroRectangulo << endl;

    return 0;
}
