#include <iostream>
using namespace std;

int main() {
    double gradosFahrenheit, gradosCelsius;
    cout << "Sistema de conversion de grados Celsius a grados Fahrenheit" << endl;
    cout << "Ingrese grados Celsius: ";
    cin >> gradosCelsius;
    gradosFahrenheit = (gradosCelsius * 1.8) + 32.0;
    cout << "La conversion a grados Fahrenheit es: " << gradosFahrenheit;
    return 0;
}
