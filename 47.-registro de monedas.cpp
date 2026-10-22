#include <iostream>
using namespace std;

int main()
{
    double montoIngresado, saldoTotal = 0;
    char respuestaContinuar;

    do {
        cout << "ingrese el monto que desea ingresar (S/.1, S/.2, S/.5, S/.10, S/.20) : S/.";
        cin >> montoIngresado;

        if (montoIngresado != 1 && montoIngresado != 2 && montoIngresado != 5 && montoIngresado != 10 && montoIngresado != 20) {
            cout << "El valor ingresado no es correcto" << endl;
            break;
        }
        saldoTotal = saldoTotal + montoIngresado;
        cout << "Saldo actual : S/." << saldoTotal << endl;

        cout << "Desea ingresar mas dinero? (S = si, N = no): " << endl;
        cin >> respuestaContinuar;
    } while (respuestaContinuar == 'S' || respuestaContinuar == 's');

    cout << "Saldo total = " << saldoTotal << endl;
    return 0;
}