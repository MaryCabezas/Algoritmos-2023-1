#include <iostream>

using namespace std;

int main()
{
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero > 0)
    {
        cout << "El numero ingresado es positivo." << endl;
    }
    else if (numero < 0)
    {
        cout << "El numero ingresado es negativo." << endl;
    }
    else
    {
        cout << "El numero ingresado es cero." << endl;
    }

    return 0;
}