#include <iostream>
using namespace std;

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false; 
    }
    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            return false; 
        }
    }
}

int main() {
    int numero;

    cout << "Introduce un número entero positivo  por favor: ";
    cin >> numero;


    if (esPrimo(numero)) {
        cout << numero << " Es un número primo." << endl;
    } else {
        cout << numero << " No es un número primo." << endl;
    }

    return 0;
}