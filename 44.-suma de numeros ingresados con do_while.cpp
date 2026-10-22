#include <iostream>
using namespace std;

int main()
{
    int sumaParcial = 0, numeroIngresado = 0;

    do {
        cout << "Numero :" << numeroIngresado << endl;
        cin >> numeroIngresado;
        sumaParcial = sumaParcial + numeroIngresado;
        numeroIngresado = numeroIngresado + 1;
    } while (numeroIngresado <= 10);

    return 0;
}