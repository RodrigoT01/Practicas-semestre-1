// 23_09_21_1er_practica.cpp : 
// Rodrigo Tapia Robles
// Uso del printf y scanf para ingresar datos y devolverlos
//

#include <iostream>
using namespace std;

int main()
{
   
    bool valor_booleano;
    int valor_entero;
    float valor_flotante;
    double valor_double;
    long double valor_long_double;
    char mi_primer_char[1];
    cout << mi_primer_char[0];
    cout << mi_primer_char[1];
    long long int valor_long_long_int;
    string valor_string;

    
    std::cout << "Ingresar un valor booleano, es decir 0 o 1" << endl;
    cin >> valor_booleano;
    cout << "Ingresaste el valor " << valor_booleano << endl;

    cout << "Ingresar un valor entero" << endl;
    cin >> valor_entero;
    cout << "Ingresaste el valor " << valor_entero << endl;

    printf("Introduce un valor de maximo 6 decimales");
        scanf_s("%f", &valor_flotante);

    cout << "Ingresa un numero con seis o menos cifras decimales" << endl;
    cin >> valor_flotante; 
    cout << "Ingresaste el valor " << valor_flotante << endl;

    cout << "Ingresa un numero con quince o menos cifras decimales" << endl;
    cin >> valor_double;
    cout << "Ingresaste el valor " << valor_double << endl;

    cout << "Ingresa un numero con dieciocho o menos cifras decimales" << endl;
    cin >> valor_long_double;
    cout << "Ingresaste el valor " << valor_long_double << endl;

    cout << "Ingresa una letra" << endl;
    cin >> mi_primer_char[0], mi_primer_char[1];
    cout << "Ingresaste la letra " << mi_primer_char[0],mi_primer_char[1];

    cout << "Ingresa un numero entero grande" << endl;
    cin >> valor_long_long_int;
    cout << "Ingresaste el valor " << valor_long_long_int << endl; 

    cout << "Ingresa cualquier palabra" << endl;
    cin >> valor_string;
    cout << "Tu valor string es " << valor_string << endl;

    printf("Estos son todos tus valores que ingreastes ");

        cout << "El valor booleano que ingresaste es " << valor_booleano << endl;
        cout << "El valor entero que ingresaste es " << valor_entero << endl;
        cout << "El valor flotante que ingresaste es " << valor_flotante << endl;
        cout << "El valor double que ingresaste es " << valor_double << endl;
        cout << "El valor long doble que ingresaste es " << valor_long_double << endl;
        cout << "El valor char que ingresaste es " << mi_primer_char << endl;
        cout << "El valor long long int que ingresaste es " << valor_long_long_int << endl;
        cout << "El valor string que ingresaste es " << valor_string << endl;






}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
