#include <iostream>

using namespace std;

int main()
{
    int numero;

    cout << "Ingrese un numero del 1 al 12: ";
    cin >> numero;

    if (numero >= 1 && numero <= 12)
    {
        switch (numero)
        {
        case 12:
        case 1:
        case 2:
            cout << "Es verano." << endl;
            break;
        case 3:
        case 4:
        case 5:
            cout << "Es otono." << endl;
            break;
        case 6:
        case 7:
        case 8:
            cout << "Es invierno." << endl;
            break;
        case 9:
        case 10:
        case 11:
            cout << "Es primavera." << endl;
            break;
        default:
            cout << "El numero ingresado no corresponde a ninguna estacion." << endl;
            break;
        }
    }
    else
    {
        cout << "Numero invalido. Debe estar en el rango del 1 al 12." << endl;
    }

    return 0;
}