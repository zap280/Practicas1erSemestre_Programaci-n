// zap280_Biblioteca.cpp 
// Creado por Gerardo Vera Villarreal, estudiante en AMERIKE


#include <iostream>
#include <locale>
#include <string>
#include <windows.h>
#include <stdio.h>

using namespace std;

string libros[30];
int a�o[5];
string autores[30];

int main()
{
    setlocale(LC_ALL, "spanish");
    cout << "Buen d�a, si va a devolver libros porfavor proporcione los siguientes datos: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Ingresa el t�tulo del libro: " << i + 1 << endl;
        cin >> libros[i];
        cout << "Ingresa el a�o de publicaci�n: " << endl;
        cin >> a�o[i];
        cout << "Ingresa el autor: " << endl;
        cin >> autores[i];
        system("cls"); //Para limpiar pantallas
    }
    
    for (int e = 0; e < 5; e++)
    {
        cout << "Libro " << e + 1 << endl;
        cout << "T�tulo: " << libros[e] << endl; 
        cout << "A�o de publicaci�n: " << a�o[e] << endl;
        cout << "Autor: " << autores[e] << endl;
    }
    return 0;
}
