#include <iostream>

using namespace std;

int main()
{
    for (int numeroTabla = 1; numeroTabla <= 10; numeroTabla++) {
        cout << "Tabla del : " << numeroTabla << endl;

        for (int numeroMultiplicador = 1; numeroMultiplicador <= 10; numeroMultiplicador++) {
            cout << numeroTabla << " x " << numeroMultiplicador << " = " << numeroTabla * numeroMultiplicador << endl;
        }
    }

    return 0;
}