// zap280 Práctica5 Gerardo Vera Villarreal Estudiante de Amerike

#include <string>
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");
    int dia;
    float suerte;
    char caracter;
    double contraseña;
    string usuario;
    string código;

    cout << "Bienvenido usuario, escriba su nombre " << endl;
    cin >> usuario;
    if (usuario == "Gerardo")
    {
        cout << "Ingrese contraseña (solo numero)" << endl;
        cin >> contraseña;
        if (contraseña == 22.63)
        {

            cout << "Acceso concedido, buen día Sr Jerry" << endl;
        }
        else 
        {
            cout << "Acceso denegado" << endl;
            cout << "Ingrese día de nacimiento para recuperar sesión" << endl;
            cin >> dia;
            if (dia == 6)
            {
                cout << "Correcto, ingrese código en pantalla" << endl;
                cout << "GVVEG" << endl;
                cin >> código;
                if (código == "GVVEG")
                {
                    cout << "Bienvenido, Sr Jerry" << endl;
                }
                else
                {
                    cout << "¿Si es usted?" << endl;
                    cout << "Si (s) o no (n)" << endl;
                    cin >> caracter;
                    if (caracter == 's')
                    {
                        cout << "¿Cuál es el numero de la suerte?" << endl;
                        cin >> suerte;
                        if (suerte == 314262)
                        {
                            cout << "Bienvenido Sr. Jerry" << endl;
                        }
                        else
                        {
                            cout << "Incorrecto, cierre de sesión" << endl;
                        }
                    }
                    else
                    {
                        cout << "Aprecio la honestidad, cierre de sesión" << endl;
                    }
                }
            }
            else
            {
                cout << "Incorrecto, cierre de sesión" << endl;
            }
        }
    }
   else
        {
            cout << "Incorrecto, cierre de sesión" << endl;
        }
    return main();
    }
    

