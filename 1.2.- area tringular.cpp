#include <iostream>
using namespace std;

int main() {
    double baseTriangulo, alturaTriangulo, areaTriangulo;
    cout << "Sistema de calculo de area de un triangulo" << endl;
    cout << "Ingrese la base: ";
    cin >> baseTriangulo;
    cout << "Ingrese la altura: ";
    cin >> alturaTriangulo;
    areaTriangulo = (baseTriangulo * alturaTriangulo) / 2.0;
    cout << "El area del triangulo es: " << areaTriangulo << endl;
    return 0;
}
