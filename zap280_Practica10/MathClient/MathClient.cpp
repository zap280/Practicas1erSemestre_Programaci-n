// MathClient.cpp 
// compile with: cl /EHsc MathClient.cpp /link MathLibrary.lib
//Creado por Gerardo Vera Villarreal, estudiante en AMERIKE


#include <iostream>
#include "MathLibrary.h"

using namespace std;


int main()
{
    char op;
    double a,b = 0;
    int resultado = 0;
    cout << "Bienvenido a la calculadora basica de Jerry" << endl;
    cout << "Ingresa el operador, como +,-,*, o /:" << endl;
    cin >> op;
    cout << "Ingresa el 1er numero a interpretar:" << endl;
    cin >> a;
    cout << "Ingresa el 2do numero" << endl;
    cin >> b;
    switch (op)
    {
    case '+':
        cout << "a + b = " << MathLibrary::Arithmetic::Add(a, b) << endl;
        break;

    case '-':
        cout << "a - b = " << MathLibrary::Arithmetic::Subtract(a, b) << endl;
        break;

    case '*':
        cout << "a * b = " << MathLibrary::Arithmetic::Multiply(a, b) << endl;
        break;

    case '/':
        cout << "a / b = " << MathLibrary::Arithmetic::Divide(a, b) << endl;
        break;

    default:
        cout << "Incorrecto, porfavor escoja opcion valida" << endl;
        break;
    }

    return 0;
}
