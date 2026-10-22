#include <iostream>
using namespace std;

int main()
{
    int numeroMultiplicador = 1, limiteSuperior = 10;

    cout << "TABLA DEL 7" << endl;

    do {
        cout << "7 x " << numeroMultiplicador << " = " << numeroMultiplicador * 7 << endl;
        numeroMultiplicador = numeroMultiplicador + 1;
    } while (numeroMultiplicador <= limiteSuperior);

    return 0;
}