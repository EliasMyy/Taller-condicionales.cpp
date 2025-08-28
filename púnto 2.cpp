#include <iostream>
using namespace std;

int main() {
    int dia, mes, anio;
    
    // Solicitar datos al usuario
    cout << "Ingresa el dia de nacimiento: ";
    cin >> dia;
    cout << "Ingresa el mes de nacimiento (1-12): ";
    cin >> mes;
    cout << "Ingresa el año de nacimiento: ";
    cin >> anio;

    // Validar la fecha
    bool fechaValida = true;

    // Verificar rango de mes
    if (mes < 1 || mes > 12) {
        fechaValida = false;
    }
    // Verificar días según el mes
    else if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) {
        fechaValida = false; // Meses de 30 días
    }
    else if (mes == 2) {
        // Verificar si es año bisiesto
        bool bisiesto = (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
        if (bisiesto && dia > 29) {
            fechaValida = false; // Febrero en año bisiesto tiene 29 días
        }
        else if (!bisiesto && dia > 28) {
            fechaValida = false; // Febrero en año no bisiesto tiene 28 días
        }
    }
    else if (dia > 31) {
        fechaValida = false; // Meses de 31 días
    }

    // Mostrar resultado
    if (fechaValida && mes == 2) {
        cout << "Fecha valida y es febrero. Se aplica el descuento por cumpleaños." << endl;
    } else {
        cout << "Fecha invalida o no es febrero. No se aplica descuento." << endl;
    }

    return 0;
}
