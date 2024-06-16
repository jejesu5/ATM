#include <iostream>

using namespace std;

int main() {
    // Variables para almacenar el saldo y la cantidad de dinero a depositar/retirar
    double saldo = 1000.0; // Saldo inicial
    double cantidad;

    int opcion;

    do {
        // Mostrar el menú
        cout << "==========================" << endl;
        cout << "     CAJERO AUTOMÁTICO    " << endl;
        cout << "==========================" << endl;
        cout << "1. Consultar saldo" << endl;
        cout << "2. Depositar dinero" << endl;
        cout << "3. Retirar dinero" << endl;
        cout << "4. Salir" << endl;
        cout << "==========================" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                // Consultar saldo
                cout << "Su saldo actual es: $" << saldo << endl;
                break;
            case 2:
                // Depositar dinero
                cout << "Ingrese la cantidad a depositar: $";
                cin >> cantidad;
                if (cantidad > 0) {
                    saldo += cantidad;
                    cout << "Depósito exitoso. Su nuevo saldo es: $" << saldo << endl;
                } else {
                    cout << "Cantidad no válida." << endl;
                }
                break;
            case 3:
                // Retirar dinero
                cout << "Ingrese la cantidad a retirar: $";
                cin >> cantidad;
                if (cantidad > 0 && cantidad <= saldo) {
                    saldo -= cantidad;
                    cout << "Retiro exitoso. Su nuevo saldo es: $" << saldo << endl;
                } else if (cantidad > saldo) {
                    cout << "Saldo insuficiente." << endl;
                } else {
                    cout << "Cantidad no válida." << endl;
                }
                break;
            case 4:
                // Salir
                cout << "Gracias por usar el cajero automático. ¡Hasta luego!" << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, seleccione una opción del 1 al 4." << endl;
        }

        cout << endl;

    } while(opcion != 4);

    return 0;
}
