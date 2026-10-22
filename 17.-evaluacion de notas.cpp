#include <iostream>
using namespace std;

int main() {
    double notaFinal;
    cout << "SISTEMA DE EVALUACION DE NOTAS (ESCALA 0 - 20) " << endl;
    cout << "Ingrese su nota final (0 - 20): ";
    cin >> notaFinal;

    if (notaFinal < 0 || notaFinal > 20) {
        cout << "ERROR: La nota ingresada no es valida. Debe escribir entre 0 y 20" << endl;
        return 0;
    }

    if (notaFinal >= 18) {
        cout << "Estado: Excelente (Sobresaliente)." << endl;
    }
    else if (notaFinal >= 14) {
        cout << "Estado: Aprobado (Bueno)." << endl;
    }
    else if (notaFinal >= 11) {
        cout << "Estado: Aprobado (Regular)." << endl;
    }
    else {
        cout << "Estado: Desaprobado" << endl;
    }

    int codigoCategoriaNota;
    if (notaFinal >= 18) {
        codigoCategoriaNota = 1;
    }
    else if (notaFinal >= 14) {
        codigoCategoriaNota = 2;
    }
    else if (notaFinal >= 11) {
        codigoCategoriaNota = 3;
    }
    else {
        codigoCategoriaNota = 4;
    }

    switch (codigoCategoriaNota) {
        case 1:
            cout << "Categoria A: Postulante de cuadro de honor o beca" << endl;
            break;
        case 2:
            cout << "Categoria B: Buen rendimiento academico" << endl;
            break;
        case 3:
            cout << "Categoria C: Aprobado, pero requiere reforzamiento" << endl;
            break;
        case 4:
            cout << "Categoria D: Desaprobado, requiere recuperacion" << endl;
            break;
    }

    return 0;
}