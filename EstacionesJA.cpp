#include <iostream>

using namespace std; 


int main() {
    enum DiasSemana {
        Primavera = 1,
        Verano,
        Otono,
        Invierno
    };
    int numero;

    cout << "Ingrese un numero del 1 al 4: ";
    cin >> numero;
    switch(numero) {
        case Primavera:
            cout << "Es Primavera" << endl;
            break;
        case Verano:
            cout << "Es Verano" << endl;
            break;
        case Otono:
            cout << "Es Otono" << endl;
            break;
        case Invierno:
            cout << "Es Invierno" << endl;
            break;
        default:
            cout << "Numero invalido. Por favor ingrese un numero del 1 al 4." << endl;
            break;
    }
    return 0;
}


