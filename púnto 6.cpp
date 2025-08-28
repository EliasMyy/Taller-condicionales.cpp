#include <iostream>
using namespace std;

bool horaValida(int h, int m) {
    return (h >= 0 && h <= 23) && (m >= 0 && m <= 59);
}

int main() {
    int h, m;
    cout << "Ingrese la hora de llegada (Hora y minuto): ";
    cin >> h >> m;

    if (horaValida(h, m))
        cout << "Hora valida. Registro exitoso." << endl;
    else
        cout << "Hora invalida. Intente nuevamente." << endl;

    return 0;
}
