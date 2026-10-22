#include <iostream>

using namespace std;

int main()
{
    int primerNumero, segundoNumero, tercerNumero;
    cout << "Ingrese el valor de A" << endl;
    cin >> primerNumero;
    cout << "Ingrese el valor de B" << endl;
    cin >> segundoNumero;
    cout << "Ingrese el valor de C" << endl;
    cin >> tercerNumero;

    if (primerNumero >= segundoNumero && primerNumero >= tercerNumero)
        cout << "El numero mayor es: " << primerNumero << endl;

    else if (segundoNumero >= primerNumero && segundoNumero >= tercerNumero)
        cout << "El numero mayor es: " << segundoNumero << endl;

    else
        cout << "El numero mayor es: " << tercerNumero << endl;

    return 0;
}