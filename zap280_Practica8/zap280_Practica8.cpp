// zap280 Práctica8 
// Creado por Gerardo Vera Villarreal estudiante de Amerike

#include <iostream>
#include <conio.h>
#include <locale>
#include <windows.h>
#include <stdio.h>
#include <string>
#include <stdlib.h>

using namespace std;

void pedirDatos();
void mostrarMatriz(int**, int, int);
int** puntero_matriz, nFilas, nCol;


int main()
{
    setlocale(LC_ALL, "spanish");

    //Matriz estática
    int filas = 0;
    int columnas = 0;
    int matriz[3][3];

    cout << "Matriz estatica: " << endl;
    for (filas = 0; filas < 3; filas++)
    {
        for (columnas = 0; columnas < 3; columnas++)
        {
            matriz[filas][columnas] = rand() % 100;    //Llenado con números al azar
            cout << "|" << matriz[filas][columnas] << "|"; //Imprimir
        }
        cout << endl;
    }

    cout << "------------------------------";
    cout << endl;
    cout << "Matriz dinamica: " << endl;
    pedirDatos();
    mostrarMatriz(puntero_matriz, nFilas, nCol);

    //Liberar la memoria que hemos utilizado enla matriz
    for (int i = 0; i < nFilas; i++)
    {
        delete[] puntero_matriz[i];
    }

    delete[] puntero_matriz;
    return 0;
}

void pedirDatos()
{
    cout << "Indique el numero de filas: ";
    cin >> nFilas;
    cout << "Indique el numero de columnas: ";
    cin >> nCol;

    //Reservar memoria para la matriz dinámica
    puntero_matriz = new int* [nFilas]; //Reservando memoria para las filas
    for (int i = 0; i < nFilas; i++)
    {
        puntero_matriz[i] = new int[nCol]; //Reservando memoria para las columnas
    }

    cout << endl << "Llenado de matriz: " << endl;
    for (int i = 0; i < nFilas; i++)
    {
        for (int j = 0; j < nCol; j++)
        {
            cout << "Escriba un numero [" << i << "][" << j << "]: ";
            cin >> *(*(puntero_matriz + i) + j); //Es lo mismo que poner puntero_matriz[i][j] 
        }

    }

}
void mostrarMatriz(int** puntero_matriz, int nFilas, int nCol)
{
    cout << endl << "Imprimiendo Matriz..." << endl;
    for (int i = 0; i < nFilas; i++)
    {
        for (int j = 0; j < nCol; j++)
        {
            cout << *(*(puntero_matriz + i) + j) << " ";
        }
        cout << endl;
    }
}
