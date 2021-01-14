
//Programa creado por Gerardo Vera Villarreal - Estudiante de AMERIKE EN DEV-1
//Programa para práctica de porgramación
#include <iostream>     //Libreria
#include <string>       //Libreria
using namespace std;    //Estandar, funciones variables, externas, nativas de C++

int main()
{

    //Declarar variables
    int entero;         //Para agregar numeros enteros
    float decimal;      //Para agregar numeros con decimales
    string str;         //Cadenas de texto
    char palabra[10];   //Para agregar caracteres
    double doble;       //Para agregar numeros con decimales, pero numeros con muchos decimales

    cout << "Bienvenido, a continuación se muestran variables\n";
    cout << "Ingresa un valor entero (int)\n";
    cin >> entero; cout << entero << "\n";

    cout << "Ingresa un valor flotante (float)\n";
    cin >> decimal; cout << decimal << "\n";

    cout << "Ingresa un nombre (string)\n";
    cin >> str; cout << str << "\n";

    cout << "Ingresa un caracter (char)\n";
    cin >> palabra; cout << palabra << "\n";

    cout << "Ingresa un valor doble (double)\n";
    cin >> doble; cout << doble << "\n";

    return 0;

}

