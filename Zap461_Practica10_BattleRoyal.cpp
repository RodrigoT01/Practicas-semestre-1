// 2021_11_11_BattleRoyale_practica10.cpp
// Rodrigo Tapia Robles
// Battle royale

#include <iostream>
using namespace std;
struct personaje
{
    string nombre;
    int filo;
    int proteccion;
    int niveles_de_experiencia;
    int agilidad;
    int powerup;
    void estadisticas();

}jugador[19];

//Constructor
void personaje::estadisticas()
{
    filo = rand() % 10 + 1;
    proteccion = rand() % 10 + 1;
    niveles_de_experiencia = rand() % 10 + 1;
    agilidad = rand() % 10 + 1;
}

int main()
{

    string nombre_filo_mayor;
    int aux_filo = 0;
    string nombre_proteccion_mayor;
    int aux_proteccion = 0;
    string nombre_niveles_mayor;
    int aux_niveles = 0;
    string nombre_agilidad_mayor;
    int aux_agilidad = 0;

    string nombre_filo_menor;
    int aux_filo_menor=10;
    string nombre_proteccion_menor;
    int aux_proteccion_menor=10;
    string nombre_niveles_menor;
    int aux_niveles_menor = 10;
    string nombre_agilidad_menor;
    int aux_agilidad_menor = 10;


    srand(time(NULL));

    jugador[0].nombre = "Dis";
    jugador[1].nombre = "Tapia";
    jugador[2].nombre = "Kevin";
    jugador[3].nombre = "Omar";
    jugador[4].nombre = "Jacinto";
    jugador[5].nombre = "Dylan";
    jugador[6].nombre = "Richi";
    jugador[7].nombre = "Oscar";
    jugador[8].nombre = "Yuss";
    jugador[9].nombre = "Ferchus";
    jugador[10].nombre = "Kuvassi";
    jugador[11].nombre = "Angel";
    jugador[12].nombre = "Shasho";
    jugador[13].nombre = "Isra";
    jugador[14].nombre = "Pato";
    jugador[15].nombre = "Chilo";
    jugador[16].nombre = "Eric";
    jugador[17].nombre = "Jp";
    jugador[18].nombre = "Abraham";

    /*
    personaje Dis;
    personaje Tapia;
    personaje Kevin, Omar, Jacinto, Dylan, Richi;
    personaje Oscar, Yuss, Ferchus, Kuvassi, Angel;
    personaje Shasho, Isra, Pato, Chilo, Eric, Jp, Abraham;

    Dis.estadisticas();
    Tapia.estadisticas();
    Kevin.estadisticas();
    Omar.estadisticas();
    Jacinto.estadisticas();
    Dylan.estadisticas();
    Richi.estadisticas();
    Oscar.estadisticas();
    Yuss.estadisticas();
    Ferchus.estadisticas();
    Kuvassi.estadisticas();
    Angel.estadisticas();
    Shasho.estadisticas();
    Isra.estadisticas();
    Pato.estadisticas();
    Chilo.estadisticas();
    Eric.estadisticas();

    cout << "Este es el filo de Dis: " << Dis.filo << endl;
    cout << "Esta es la proteccion de Dis: " << Dis.proteccion << endl;
    cout << "Esta es la experiencia de Dis: " << Dis.niveles_de_experiencia << endl;
    cout << "Esta es la agilidad de Dis: " << Dis.agilidad << endl;
    cout << "-----------------------------" << endl;
    cout << "Este es el filo de Tapia: " << Tapia.filo << endl;
    cout << "Esta es la proteccion de Tapia: " << Tapia.proteccion << endl;
    cout << "Esta es la experiencia de Tapia: " << Tapia.niveles_de_experiencia << endl;
    cout << "Esta es la agilidad de Tapia: " << Tapia.agilidad << endl;
    cout << "-----------------------------" << endl;
    cout << "Este es el filo de Kevin: " << Kevin.filo << endl;
    cout << "Esta es la proteccion de Kevin: " << Kevin.proteccion << endl;
    cout << "Esta es la experiencia de Kevin: " << Kevin.niveles_de_experiencia << endl;
    cout << "Esta es la agilidad de Kevin: " << Kevin.agilidad << endl;
    cout << "-----------------------------" << endl;
    cout << "Este es el filo de Omar: " << Omar.filo << endl;
    cout << "Esta es la proteccion de Omar: " << Omar.proteccion << endl;
    cout << "Esta es la experiencia de Omar: " << Omar.niveles_de_experiencia << endl;
    cout << "Esta es la agilidad de Omar: " << Omar.agilidad << endl;
    cout << "-----------------------------" << endl;
    cout << "Este es el filo de Jacinto: " << Jacinto.filo << endl;
    cout << "Esta es la proteccion de Jacinto: " << Jacinto.proteccion << endl;
    cout << "Esta es la experiencia de Jacinto: " << Jacinto.niveles_de_experiencia << endl;
    cout << "Esta es la agilidad de Jacinto: " << Jacinto.agilidad << endl;
    cout << "-----------------------------" << endl;
    cout << "Este es el filo de Dylan: " << Dylan.filo << endl;
    cout << "Esta es la proteccion de Dylan: " << Dylan.proteccion << endl;
    cout << "Esta es la experiencia de Dylan: " << Dylan.niveles_de_experiencia << endl;
    cout << "Esta es la agilidad de Dylan: " << Dylan.agilidad << endl;
    cout << "-----------------------------" << endl;
    cout << "Este es el filo de Richi: " << Richi.filo << endl;
    cout << "Esta es la proteccion de Richi: " << Richi.proteccion << endl;
    cout << "Esta es la experiencia de Richi: " << Richi.niveles_de_experiencia << endl;
    cout << "Esta es la agilidad de Richi: " << Richi.agilidad << endl;
    cout << "-----------------------------" << endl;
    cout << "Este es el filo de Oscar: " << Oscar.filo << endl;
    cout << "Esta es la proteccion de Oscar: " << Oscar.proteccion << endl;
    cout << "Esta es la experiencia de Oscar: " << Oscar.niveles_de_experiencia << endl;
    cout << "Esta es la agilidad de Oscar: " << Oscar.agilidad << endl;
    cout << "-----------------------------" << endl;
    */

    cout << "A continuacion se mostraran los datos de los jugadores: " << endl;
    cout << "--------------------------------------------------------" << endl;

    for (int i = 0; i < 19; i++)
    {
        jugador[i].estadisticas();

        cout << "Estadisticas del jugador: " << endl;
        cout << "Nombre del jugador: " << jugador[i].nombre << endl;
        cout << "Filo: " << jugador[i].filo << endl;
        cout << "Proteccion: " << jugador[i].proteccion << endl;
        cout << "Niveles de experiencia: " << jugador[i].niveles_de_experiencia << endl;
        cout << "Agilidad: " << jugador[i].agilidad << endl;
        cout << "----------------------------------" << endl;

    }

    cout << "Estos son los ganadores de cada estadistica: " << endl;
    cout << endl;

    for (int i = 0; i < 19; i++)
    {
        if (jugador[i].filo > aux_filo)
        {
            nombre_filo_mayor = jugador[i].nombre;
            aux_filo = jugador[i].filo;
        }
    }

    for (int i = 0; i < 19; i++)
    {
        if (jugador[i].filo < aux_filo_menor)
        {
            nombre_filo_menor = jugador[i].nombre;
            aux_filo_menor = jugador[i].filo;
        }
    }

    cout << "Este es el jugador con mayor filo: " << nombre_filo_mayor << " con " << aux_filo << " puntos" << endl;
    cout << "----------------------------------" << endl;
    cout << "Este es el jugador con el menor filo: " << nombre_filo_menor << " con " << aux_filo_menor << " puntos " << endl;
    cout << endl;

    for (int i = 0; i < 19; i++)
    {
        if (jugador[i].proteccion > aux_proteccion)
        {
            nombre_proteccion_mayor = jugador[i].nombre;
            aux_proteccion = jugador[i].proteccion;
        }
    }

    for (int i = 0; i < 19; i++)
    {
        if (jugador[i].proteccion < aux_proteccion_menor)
        {
            nombre_proteccion_menor = jugador[i].nombre;
            aux_proteccion_menor = jugador[i].proteccion;
        }
    }

    cout << "Este es el jugador con mayor proteccion: " << nombre_proteccion_mayor << " con " << aux_proteccion << " puntos " << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Este es el jugador con menor proteccion: " << nombre_proteccion_menor << " con " << aux_proteccion_menor << " puntos " << endl;
    cout << endl;

    for (int i = 0; i < 19; i++)
    {
        if (jugador[i].niveles_de_experiencia > aux_niveles)
        {
            nombre_niveles_mayor = jugador[i].nombre;
            aux_niveles = jugador[i].niveles_de_experiencia;
        }
    }
    for (int i = 0; i < 19; i++)
    {
        if (jugador[i].niveles_de_experiencia < aux_niveles_menor)
        {
            nombre_niveles_menor = jugador[i].nombre;
            aux_niveles_menor = jugador[i].niveles_de_experiencia;
        }
    }

    cout << "Este es el jugador con mayor niveles de experiencia: " << nombre_niveles_mayor << " con " << aux_niveles << " puntos " <<endl;
    cout << "-----------------------------------------" << endl;
    cout << "Este es el jugador con menor niveles de experiencia: " << nombre_niveles_menor << " con " << aux_niveles_menor << " puntos " << endl;
    cout << endl;

    for (int i = 0; i < 19; i++)
    {
        if (jugador[i].agilidad > aux_agilidad)
        {
            nombre_agilidad_mayor = jugador[i].nombre;
            aux_agilidad = jugador[i].agilidad;
        }
    }
    for (int i = 0; i < 19; i++)
    {
        if (jugador[i].agilidad < aux_agilidad_menor)
        {
            nombre_agilidad_menor = jugador[i].nombre;
            aux_agilidad_menor = jugador[i].agilidad;
        }
    }

    cout << "Este es el jugador con mayor agilidad: " << nombre_agilidad_mayor <<  " con " << aux_agilidad << " puntos" << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Este es el jugador con menor agilidad: " << nombre_agilidad_menor << " con " << aux_agilidad_menor << " puntos " << endl;
    cout << endl;
}



