#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    int N1, N2, opcion;
    char Name[20];
    char repetir;

    // Entrada del nombre del usuario
    cout << "Hola, Usuario" << endl;
    cout << "Ingresa tu nombre: ";
    cin >> Name;

    // Bucle principal de la calculadora
    do {
        // Entrada de números
        cout << "\nHola " << Name << ", ingresa un numero: ";
        cin >> N1;

        cout << "Ingresa otro numero: ";
        cin >> N2;

        // Selección de la operación
        cout << "\n¿Que operacion deseas realizar?\n";
        cout << "1. Suma\n";
        cout << "2. Resta\n";
        cout << "3. Multiplicacion\n";
        cout << "4. Division\n";
        cout << "Elige una opcion: ";
        cin >> opcion;

        // Evaluación y ejecución de la opción elegida
        switch(opcion) {
            case 1:
                cout << "El resultado de la suma es: " << (N1 + N2) << endl;
                break;

            case 2:
                cout << "El resultado de la resta es: " << (N1 - N2) << endl;
                break;

            case 3:
                cout << "El resultado de la multiplicacion es: " << (N1 * N2) << endl;
                break;

            case 4:
                // Validación para evitar división por cero
                if (N2 != 0)
                    cout << "El resultado de la division es: " << (N1 / N2) << endl;
                else
                    cout << "Error: no se puede dividir entre 0." << endl;
                break;

            default:
                cout << "Opcion no valida." << endl;
        }

        // Confirmación para repetir el bucle
        cout << "\n¿Deseas realizar otra operacion? (s/n): ";
        cin >> repetir;

    } while (repetir == 's' || repetir == 'S');

    // Salida del programa
    cout << "\nGracias por usar la calculadora, " << Name << ". Hasta luego!\n";

    return 0;
}
