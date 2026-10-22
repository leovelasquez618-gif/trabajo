#include <iostream>
using namespace std;

int main() {
    const double tasaIGV = 0.18;
    double precioBaseProducto, montoIGV, precioFinalProducto;

    cout << "Ingrese el precio base del producto: ";
    cin >> precioBaseProducto;

    montoIGV = precioBaseProducto * tasaIGV;
    precioFinalProducto = precioBaseProducto + montoIGV;

    cout << "El IGV (18%) es: " << montoIGV << endl;
    cout << "El precio final con IGV es: " << precioFinalProducto << endl;

    return 0;
}
