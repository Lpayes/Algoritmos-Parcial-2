#include <iostream>
using namespace std;
enum EstadodelAno {
    PRIMAVERA = 1,
    VERANO,
    OTONO,
    INVIERNO,
};

int main() {
    int opcion;
    cout << "Selecciona un numero del 1- al 4: " <<endl;
    cout << "1, ";
    cout << "2, ";
    cout << "3, ";
    cout << "4" ;
    cin>>opcion;

    switch (opcion) {
        case PRIMAVERA:
            std::cout << "Es PRIMAVERA" << std::endl;
            break;
        case VERANO:
            std::cout << "Es VERANO" << std::endl;
            break;
        case OTONO:
            std::cout << "Es OTOÑO" << std::endl;
            break;
        case INVIERNO:
            std::cout << "Es INVIERNO" << std::endl;
            break;
            
        default:
            std::cout << "Opcion no valida. Por favor selecciona un numero entre 1 y 4."<<endl;
            break;
    }

    return 0;
}
