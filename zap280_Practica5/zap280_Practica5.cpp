// zap280 Pr�ctica5 Gerardo Vera Villarreal Estudiante de Amerike

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
    double contrase�a;
    string usuario;
    string c�digo;

    cout << "Bienvenido usuario, escriba su nombre " << endl;
    cin >> usuario;
    if (usuario == "Gerardo")
    {
        cout << "Ingrese contrase�a (solo numero)" << endl;
        cin >> contrase�a;
        if (contrase�a == 22.63)
        {

            cout << "Acceso concedido, buen d�a Sr Jerry" << endl;
        }
        else 
        {
            cout << "Acceso denegado" << endl;
            cout << "Ingrese d�a de nacimiento para recuperar sesi�n" << endl;
            cin >> dia;
            if (dia == 6)
            {
                cout << "Correcto, ingrese c�digo en pantalla" << endl;
                cout << "GVVEG" << endl;
                cin >> c�digo;
                if (c�digo == "GVVEG")
                {
                    cout << "Bienvenido, Sr Jerry" << endl;
                }
                else
                {
                    cout << "�Si es usted?" << endl;
                    cout << "Si (s) o no (n)" << endl;
                    cin >> caracter;
                    if (caracter == 's')
                    {
                        cout << "�Cu�l es el numero de la suerte?" << endl;
                        cin >> suerte;
                        if (suerte == 314262)
                        {
                            cout << "Bienvenido Sr. Jerry" << endl;
                        }
                        else
                        {
                            cout << "Incorrecto, cierre de sesi�n" << endl;
                        }
                    }
                    else
                    {
                        cout << "Aprecio la honestidad, cierre de sesi�n" << endl;
                    }
                }
            }
            else
            {
                cout << "Incorrecto, cierre de sesi�n" << endl;
            }
        }
    }
   else
        {
            cout << "Incorrecto, cierre de sesi�n" << endl;
        }
    return main();
    }
    

