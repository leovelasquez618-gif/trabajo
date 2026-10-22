#include <iostream>
using namespace std;

int main() {
    double primerNumero, segundoNumero, resultadoSuma, resultadoResta, resultadoMultiplicacion, resultadoDivision;

    cout << "Sistema de operaciones basicas" << endl;
    cout << "Ingresa el primer numero: ";
    cin >> primerNumero;
    cout << "Ingresa el segundo numero: ";
    cin >> segundoNumero;

    resultadoSuma = primerNumero + segundoNumero;
    resultadoResta = primerNumero - segundoNumero;
    resultadoMultiplicacion = primerNumero * segundoNumero;

    cout << "\nEl resultado de la suma es: " << resultadoSuma << endl;
    cout << "El resultado de la resta es: " << resultadoResta << endl;
    cout << "El resultado de la multiplicacion es: " << resultadoMultiplicacion << endl;

    if (segundoNumero != 0) {
        resultadoDivision = primerNumero / segundoNumero;
        cout << "El resultado de la division es: " << resultadoDivision << endl;
    } else {
        cout << "El resultado de la division es: No se puede dividir entre cero" << endl;
    }

    return 0;
}