#include <iostream>
#include <complex>
#include <cmath>

using namespace std;

int main() {
    double coeficienteA, coeficienteB, coeficienteC;

    cout << "=== Resolucion de ecuaciones de segundo grado (ax^2 + bx + c = 0) ===\n";
    cout << "Ingrese el coeficiente a: ";
    cin >> coeficienteA;
    cout << "Ingrese el coeficiente b: ";
    cin >> coeficienteB;
    cout << "Ingrese el coeficiente c: ";
    cin >> coeficienteC;

    if (coeficienteA == 0) {
        if (coeficienteB == 0) {
            if (coeficienteC == 0)
                cout << "\nCualquier valor de x es solucion (0 = 0).\n";
            else
                cout << "\nNo tiene solucion (ecuacion inconsistente).\n";
        } else {
            double solucionLineal = -coeficienteC / coeficienteB;
            cout << "\nEs una ecuacion lineal. Solucion: x = " << solucionLineal << "\n";
        }
        return 0;
    }

    double discriminante = coeficienteB * coeficienteB - 4 * coeficienteA * coeficienteC;

    cout << "\nDiscriminante: " << discriminante << "\n";

    if (discriminante > 0) {
        double raizUno = (-coeficienteB + sqrt(discriminante)) / (2 * coeficienteA);
        double raizDos = (-coeficienteB - sqrt(discriminante)) / (2 * coeficienteA);
        cout << "Raices reales y distintas:\n";
        cout << "x1 = " << raizUno << "\n";
        cout << "x2 = " << raizDos << "\n";
    } else if (discriminante == 0) {
        double raizDoble = -coeficienteB / (2 * coeficienteA);
        cout << "Raiz real doble:\n";
        cout << "x = " << raizDoble << "\n";
    } else {
        double parteReal = -coeficienteB / (2 * coeficienteA);
        double parteImaginaria = sqrt(-discriminante) / (2 * coeficienteA);
        complex<double> raizComplejaUno(parteReal,  parteImaginaria);
        complex<double> raizComplejaDos(parteReal, -parteImaginaria);
        cout << "Raices complejas conjugadas:\n";
        cout << "x1 = " << raizComplejaUno.real() << " + " << raizComplejaUno.imag() << "i\n";
        cout << "x2 = " << raizComplejaDos.real() << " - " << abs(raizComplejaDos.imag()) << "i\n";
    }

    return 0;
}