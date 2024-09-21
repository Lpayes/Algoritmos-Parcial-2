#include <iostream>
using namespace std;
int main() {
    int numero;

    cout << "Ingrese un número entero para mostrar su tabla de multiplicar: ";
    cin >> numero;


    for (int i = 1; i <= 10; i++) {
        std::cout << numero << " x " << i << " = " << numero * i << std::endl;
    }

    return 0;
}