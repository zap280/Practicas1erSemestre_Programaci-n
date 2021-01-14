// zap280_Biblioteca.cpp 
// Creado por Gerardo Vera Villarreal, estudiante en AMERIKE


#include <iostream>
#include <locale>
#include <string>
#include <windows.h>
#include <stdio.h>

using namespace std;

string libros[30];
int año[5];
string autores[30];

int main()
{
    setlocale(LC_ALL, "spanish");
    cout << "Buen día, si va a devolver libros porfavor proporcione los siguientes datos: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Ingresa el título del libro: " << i + 1 << endl;
        cin >> libros[i];
        cout << "Ingresa el año de publicación: " << endl;
        cin >> año[i];
        cout << "Ingresa el autor: " << endl;
        cin >> autores[i];
        system("cls"); //Para limpiar pantallas
    }
    
    for (int e = 0; e < 5; e++)
    {
        cout << "Libro " << e + 1 << endl;
        cout << "Título: " << libros[e] << endl; 
        cout << "Año de publicación: " << año[e] << endl;
        cout << "Autor: " << autores[e] << endl;
    }
    return 0;
}
