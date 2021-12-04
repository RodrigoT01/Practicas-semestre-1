// clase_practica_7_arreglos.cpp.cpp : 
// zap461 nombre: Rodrigo Tapia Robles
// Que va a hacer la practica: demostrar el funcionanmiento de los vectores

#include <iostream>
#include <string>
#define _CRT_SECURE_NO_WARNINGS_
#pragma warnings(disable:4996)


using namespace std;

int main()
{
    /* 
    int nombre_variable[10];
    // asignacion de valores automaticas
    for (int i = 0; i < 10; i = i++)
    {
        nombre_variable[i] = 9;
    }

    // ingresion de valores
    for (int j = 0; j < 10; j++)
    {
        cout << "el valor en la posicion: " << j << " es: " << nombre_variable[j] << endl;
    }
    */

    string nombre_del_juego[5];
    int fecha[5];
    string autor[5];
    
    
    for (int i = 0; i < 5; i++)
    {
       
        cout << "Ingresa los datos que se solicitan de los juegos de mesa: " << endl;
        
        cout << "Ingresa el titulo del juego: " << endl;
        getline(cin, nombre_del_juego[i]);
       
        cout << "Ingresa la fecha en que salio el juego: " << endl;
        cin >> fecha[i];
        cin.ignore();
        cout << "Ingresa el nombre del autor: " << endl;
        getline(cin, autor[i]);
      
    }
    for (int j = 0; j < 5; j++)
    {
        cout << "Numero de juego: " << j + 1 << endl;

        cout << "Nombre del juego de mesa: " << nombre_del_juego[j] << endl;
        cout << "Fecha en la que salio el juego: " << fecha[j] << endl;
        cout << "El nombre del autor del juego: " << autor[j] << endl;


    }

}





