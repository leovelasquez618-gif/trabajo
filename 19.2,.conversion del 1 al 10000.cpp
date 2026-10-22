#include <iostream>
#include <string>

using namespace std;

string convertirUnidades(int numero) {
    switch (numero) {
        case 1: return "uno";
        case 2: return "dos";
        case 3: return "tres";
        case 4: return "cuatro";
        case 5: return "cinco";
        case 6: return "seis";
        case 7: return "siete";
        case 8: return "ocho";
        case 9: return "nueve";
        default: return "";
    }
}

string convertirDecenas(int numero) {
    if (numero < 10) {
        return convertirUnidades(numero);
    }
    else if (numero < 20) {
        switch (numero) {
            case 10: return "diez";
            case 11: return "once";
            case 12: return "doce";
            case 13: return "trece";
            case 14: return "catorce";
            case 15: return "quince";
            case 16: return "dieciseis";
            case 17: return "diecisiete";
            case 18: return "dieciocho";
            case 19: return "diecinueve";
            default: return "";
        }
    }
    else if (numero < 30) {
        if (numero == 20) return "veinte";
        return "veinti" + convertirUnidades(numero - 20);
    }
    else {
        int digitoDecena = numero / 10;
        int digitoUnidad = numero % 10;
        string nombreDecena = "";

        switch (digitoDecena) {
            case 3: nombreDecena = "treinta"; break;
            case 4: nombreDecena = "cuarenta"; break;
            case 5: nombreDecena = "cincuenta"; break;
            case 6: nombreDecena = "sesenta"; break;
            case 7: nombreDecena = "setenta"; break;
            case 8: nombreDecena = "ochenta"; break;
            case 9: nombreDecena = "noventa"; break;
        }

        if (digitoUnidad == 0) {
            return nombreDecena;
        }
        return nombreDecena + " y " + convertirUnidades(digitoUnidad);
    }
}

string convertirCentenas(int numero) {
    if (numero == 100) {
        return "cien";
    }
    else if (numero > 100 && numero < 1000) {
        int digitoCentena = numero / 100;
        int restoCentena = numero % 100;
        string nombreCentena = "";

        switch (digitoCentena) {
            case 1: nombreCentena = "ciento"; break;
            case 2: nombreCentena = "doscientos"; break;
            case 3: nombreCentena = "trescientos"; break;
            case 4: nombreCentena = "cuatrocientos"; break;
            case 5: nombreCentena = "quinientos"; break;
            case 6: nombreCentena = "seiscientos"; break;
            case 7: nombreCentena = "setecientos"; break;
            case 8: nombreCentena = "ochocientos"; break;
            case 9: nombreCentena = "novecientos"; break;
        }

        if (restoCentena == 0) {
            return nombreCentena;
        }
        return nombreCentena + " " + convertirDecenas(restoCentena);
    }
    else {
        return convertirDecenas(numero);
    }
}

string convertirMiles(int numero) {
    if (numero == 1000) {
        return "mil";
    }
    else if (numero > 1000 && numero <= 10000) {
        int digitoMil = numero / 1000;
        int restoMil = numero % 1000;

        string nombreMil = "";

        if (digitoMil == 1) {
            nombreMil = "mil";
        } else if (digitoMil == 10) {
            return "diez mil";
        } else {
            nombreMil = convertirUnidades(digitoMil) + " mil";
        }

        if (restoMil == 0) {
            return nombreMil;
        }
        return nombreMil + " " + convertirCentenas(restoMil);
    }
    else {
        return convertirCentenas(numero);
    }
}

string numeroALetra(int numero) {
    if (numero == 10000) {
        return "diez mil";
    }
    else if (numero >= 1000 && numero < 10000) {
        return convertirMiles(numero);
    }
    else if (numero >= 1 && numero < 1000) {
        return convertirCentenas(numero);
    }
    else {
        return "Numero fuera de rango";
    }
}

int main() {
    for (int indice = 1; indice <= 10000; indice++) {
        cout << indice << ": " << numeroALetra(indice) << endl;
    }

    return 0;
}