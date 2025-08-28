#include <iostream>
using namespace std;

int main() {
    double numero1, numero2, resultado;
    char operacion;
    int personas;

    cout << "Ingrese el numero1: ";
    cin >> numero1;

    cout << "Ingrese la operacion (+, -, *, /): ";
    cin >> operacion;

    cout << "Ingrese el numero2: ";
    cin >> numero2;

    cout << "Ingrese el numero de personas: ";
    cin >> personas;
    
    if ( personas == 0 )
    std::cout << " error";
    else if ( operacion== '/' ); 
    if ( personas == 0) 
    std::cout << " error";
    else if ( operacion=='*');
    
    switch (operacion) {
        case '+':
            resultado = numero1 + numero2;
            break;
        case '-':
            resultado = numero1 - numero2;
            break;
        case '*':
            resultado = numero1 * numero2;
            break;
        case '/':
            resultado = numero1 / numero2;
            break;
        default:
            cout << "Operacion no valida." << endl;
            return 1;
    }
    
    cout << "El resultado es: " << resultado << endl;

    // División del resultado entre el número de personas
    double porPersona = resultado / personas;
    cout << "Resultado por persona: " << porPersona << endl;

    return 0;
}
