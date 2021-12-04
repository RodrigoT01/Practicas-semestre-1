// Practica_5_if_else.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Rodrigo Tapia Robles


#include <iostream>
using namespace std;
int main()
{

    int edad;
    long int telefono;
    float estatura;
    int peso;

    string Contrasena = "amerike2001";
    string Nombre = "Rodrigo";


    string Contrasena_in;
    string Nombre_in;
    string malestar;

    
    cout << "Ingresa tu nombre" << endl;
    cin >> Nombre_in;

    cout << "Ingresa tu edad" << endl;
    cin >> edad;
    
    cout << "Ingresa tu numero de telefono" << endl;
    cin >> telefono;

    cout << "Ingresa tu estatura" << endl;
    cin >> estatura;

    cout << "Ingresa tu peso" << endl;
    cin >> peso;

    cout << "Ingresa tu malestar" << endl;
    cin >> malestar;

    cout << "Esta es tu contrasena que usaras para checar tu informacion: " << Contrasena << endl;
        

cout << "Ingresa tu nombre para comprobar tu registro" << endl;
       cin >> Nombre_in;
       if (Nombre == Nombre_in)
       {
           // Solicitar contraseña
           cout << "Ingresa tu contrasena dada por el medico" << endl;
           cin >> Contrasena_in;
           if (Contrasena == Contrasena_in)
           {
               cout << "Bienvenido " << Nombre << endl;
               cout << "Estos son tus datos:" << endl;

               cout << "Edad: " << edad << endl;
               cout << "Telefono: " << telefono << endl;
               cout << "Estatura: " << estatura << endl;
               cout << "Peso: " << peso << endl;
               cout << "Malestar: " << malestar << endl;
           
           
           }

           else
           {
               cout << "Intentalo de nuevo. Contrasena incorrecta" << endl;
           }
       }
       else
       {
           cout << "El nombre ingresado no esta en la base de datos" << endl;
       }

      
       
    /*
    cout << "Ingrese una opcion del 1 al 3" << endl;
    cin >> opcion;
    if (opcion == 1)
    {
        cout << "Escogiste la 1" << endl;
    }
    else if (opcion == 2)
    {
        cout << "Pick #2" << endl;
    }
    else if (opcion == 3)
    {
        cout << "Escoge la 3 mi lord" << endl;
    }
    else
    {
        cout << "Ni que fuera catafixia cuate" << endl;
    }
    */
}



