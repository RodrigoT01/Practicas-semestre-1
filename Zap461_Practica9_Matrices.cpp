
// 2021_11_08_Matriz dinamica.cpp
// Rodrigo Tapia Robles

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

void pedirDatos();
void mostrarMatriz(int**, int, int);
int** puntero_matriz, nFilas, nCol;



int main()
{
    pedirDatos();
    mostrarMatriz(puntero_matriz, nFilas, nCol);

    for (int i = 0; i < nFilas; i++)
    {
        delete[] puntero_matriz[i];
    }
    delete[] puntero_matriz;


    return 0;

}

void pedirDatos()
{
    cout << "Ingrese el numero de filas de la matriz: " << endl;
    cin >> nFilas;
    cout << "Ingrese el numero de columnas de la matriz: " << endl;
    cin >> nCol;

    puntero_matriz = new int* [nFilas];

    for (int i = 0; i < nFilas; i++)
    {
        puntero_matriz[i] = new int[nCol];

    }

    cout << "Ingresa los valores de la matriz: " << endl;

    for (int i = 0; i < nFilas; i++)
    {
        for (int j = 0; j < nCol; j++)
        {
            cout << "Ingrese un numero[" << i << "][" << j << "]: ";
            cin >> *(*(puntero_matriz + i) + j);

        }

    }


}
void mostrarMatriz(int** puntero_matriz, int nFilas, int nCol)
{
    cout << "Esta es tu matriz: " << endl;
    for (int i = 0; i < nFilas; i++)
    {
        for (int j = 0; j < nCol; j++)
        {
            cout << *(*(puntero_matriz + i) + j) << " ";
        }
        cout << endl;
    }
}


int main()
{
    /*
    const int fila = 2;
    const int columna = 3;

    int matriz[fila][columna];

    int fila_columna[fila + columna];

    cout << "Completa la matriz con los datos que gustes" << endl;
    for (int i = 0; i < fila; i++)
    {
        cout << endl;

        for (int j = 0; j < columna; j++)
        {
            cout << "[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    */


    int matriz[5][5] = { {1,2},{9,8},{14,21} };

    int filas = (sizeof(matriz) / sizeof(matriz[0]));

    int columnas = (sizeof(matriz[0]) / sizeof(matriz[0][0]));
    int j = 0;
    int i = 0;

    for (int i = 0; i < filas; i = i + 1)
    {
        cout << endl;

        for (j = 0; j < columnas; j++)
        {
            cout << endl;

            matriz[i][j] = rand() % 10;

            cout << "Posicion [" << i << "] [" << j << "]" << " = " << matriz[i][j] << endl;
        }

    }




}

