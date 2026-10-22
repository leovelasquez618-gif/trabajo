#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double catetoAdyacente, catetoOpuesto, hipotenusa;

    cout << "Ingrese el cateto adyacente: ";
    cin >> catetoAdyacente;

    cout << "Ingrese el cateto opuesto: ";
    cin >> catetoOpuesto;

    hipotenusa = sqrt(catetoAdyacente * catetoAdyacente + catetoOpuesto * catetoOpuesto);

    cout << "La hipotenusa es: " << hipotenusa << endl;

    return 0;
}