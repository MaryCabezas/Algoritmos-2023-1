#include <iostream>

using namespace std;

int main()
{
    float num1, num2;
    char operador;
    float resultado;

    cout << "Calculadora basica" << endl;
    cout << "------------------" << endl;

    // Pedir al usuario los dos números
    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    // Pedir al usuario la operación a realizar
    cout << "Ingrese la operacion a realizar (+, -, *, /): ";
    cin >> operador;

    // Realizar la operación seleccionada
    switch (operador)
    {
    case '+':
        resultado = num1 + num2;
        break;
    case '-':
        resultado = num1 - num2;
        break;
    case '*':
        resultado = num1 * num2;
        break;
    case '/':
        if (num2 != 0)
        {
            resultado = num1 / num2;
        }
        else
        {
            cout << "Error: No se puede dividir entre cero." << endl;
            return 1; // Salir del programa con error
        }
        break;
    default:
        cout << "Operador no valido." << endl;
        return 1; // Salir del programa con error
    }

    // Mostrar el resultado
    cout << "El resultado es: " << resultado << endl;

    return 0; // Salir del programa sin error
}
