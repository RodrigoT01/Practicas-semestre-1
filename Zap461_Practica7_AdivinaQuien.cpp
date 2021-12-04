// 2021_10_11_Practica7_Adivina_quien.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Rodrigo Tapia Robles

#include <iostream>

using namespace std;

bool respuesta;


int main()
{
    
    cout << "En este juego solo estan registrados los siguientes personajes: " << endl;
    cout << ", Goku\n, Vegeta\n, Nappa\n, Raditz\n, Broly\n, Caulifla\n, Kale\n, Gine\n, Gohan\n, Goten\n, Trunks\n, Bra\n, Pan\n, Yamcha\n, Krilin\n, Maestro Roshi\n, Ten Shin Han\n, Bulma\n, Milk\n, Launch\n, Piccolo\n, Dende\n, Kamisama\n, Numero 16\n, Numero 17\n, Numero 18\n";
    cout << "Piensa en un personaje de Dragon Ball de la lista y yo tratare de adivinarlo mediante unas preguntas." << endl;
    cout << "Responde 1 para si o 0 para no." << endl;
    
    cout << "Primera pregunta: Tu personaje es un saiyajin?" << endl;
    cin >> respuesta;


    if (respuesta == 1)
    {
        cout << "Tu personaje es un saiyajin de raza pura?" << endl;
        cin >> respuesta;

        if (respuesta == 1)
        {

            cout << "Tu personaje es hombre?" << endl;
            cin >> respuesta;

            if (respuesta == 1)
            {
                cout << "Tu personaje esta casado?" << endl;
                cin >> respuesta;

                if (respuesta == 1)
                {
                    cout << "Tu personaje es el principe de los saiyajin?" << endl;
                    cin >> respuesta;

                    if (respuesta == 1)
                    {
                        cout << "Tu personaje es... VEGETA!!!" << endl;

                        return 0;


                    }
                    else (respuesta == 0);
                    {
                        cout << "Tu personaje usa ropa naranja?" << endl;
                        cin >> respuesta;

                        if (respuesta == 1)
                        {
                            cout << "Tu personaje es... GOKU!!!" << endl;

                            return 0;

                        }
                        else (respuesta == 0);
                        {
                            cout << "Te falta calle no le sabes" << endl;

                            return 0;
                      
                        }

                    
                    
                    }

                }
                else (respuesta == 0);
                {
                    cout << "Tu personajes fue compañero de vegeta?" << endl;
                    cin >> respuesta;

                    if (respuesta == 1)
                    {
                        cout << "Tu personaje es pelon?" << endl;
                        cin >> respuesta;

                        if (respuesta == 1)
                        {
                            cout << "Tu personaje es... NAPPA!!!" << endl;

                            return 0;
                        }
                        else (respuesta == 0);
                        {
                            cout << "Tu personaje tenia el pelo largo?" << endl;
                            cin >> respuesta;

                            if (respuesta == 1)
                            {
                                cout << "Tu personaje es... RADITZ!!!" << endl;

                                return 0;
                            }
                            else (respuesta == 0);
                            {
                                cout << "Te falta calle, ve mas dragon ball" << endl;

                                return 0;
                            }


                        }


                    }
                    else (respuesta == 0);
                    {
                        cout << "Tu personaje es considerado el legendario super saiyajin?" << endl;
                        cin >> respuesta;

                        if (respuesta == 1)
                        {
                            cout << "Tu personaje es... BROLY!!!" << endl;

                            return 0;
                        }
                        else (respuesta == 0);
                        {
                            cout << "Te falta calle, ve mas dragon ball" << endl;

                            return 0;
                        }



                    }
                
                
                
                }

            }
            else (respuesta == 0);
            {
                cout << "Tu personajes es de otro universo?" << endl;
                cin >> respuesta;

                if (respuesta == 1)
                {
                    cout << "Tu personaje es la lider de los sayajin en su universo?" << endl;
                    cin >> respuesta;
                    
                    if (respuesta == 1)
                    {
                        cout << "Tu personaje es... CAULIFLA!!!" << endl;

                        return 0;
                    }
                    else (respuesta == 0);
                    {
                        cout << "Tu personaje es... KALE!!!" << endl;

                        return 0;
                    }
                }
                else (respuesta == 0);
                {
                    cout << "Tu personaje es... GINE!!!" << endl;

                    return 0;
                }

            }


        }
        else (respuesta == 0);
        {
            cout << "Es un saiyajin hibrido?" << endl;
            cin >> respuesta;

            if (respuesta == 1)
            {
                cout << "Tu personaje es hijo de goku?" << endl;
                cin >> respuesta;

                if (respuesta == 1)
                {
                    cout << "Tu personaje es el hijo mayor?" << endl;
                    cin >> respuesta;

                    if (respuesta == 1)
                    {
                        cout << "Tu personaje es... GOHAN!!!" << endl;
                        
                        return 0;
                    
                    }
                    
                    else (respuesta == 0);
                    {
                        cout << "Tu personaje es... GOTEN!!!" << endl;

                        return 0;
                        
                     
                        


                    }
                }
                else (respuesta == 0);
                {
                    cout << "Tu personaje es hijo de vegeta?" << endl;
                    cin >> respuesta;

                    if (respuesta == 1)
                    {
                        cout << "Tu personaje es hombre?" << endl;
                        cin >> respuesta;

                        if (respuesta == 1)
                        {
                            cout << "Tu personajes es... TRUNKS!!!" << endl;

                            return 0;

                        }
                        else (respuesta == 0);
                        {
                            cout << "Tu personaje es... BRA!!!" << endl;
                            
                            return 0;

                            
                        }
                    }
                    else (respuesta == 0);
                    {
                        cout << "Tu personaje es hija de gohan?" << endl;
                        cin >> respuesta;

                        if (respuesta == 1)
                        {
                            cout << "Tu personaje es... PAN!!!" << endl;

                            return 0;
                        }
                        else (respuesta == 0);
                        {
                            cout << "Te falta calle, ve mas dragon ball" << endl;

                            return 0;
                        }
                    }
                
                
                }
            
            
            }
            else (respuesta == 0);
            {
                cout << "No existe otra raza de saiyajin, te falta calle" << endl;

                return 0;
            
            }

        
        
        }
    
    }
    else (respuesta==0);
    {
        cout << "Tu personaje es un humano?" << endl;
        cin >> respuesta;

        if (respuesta == 1)
        {
            cout << "Tu personaje es hombre?" << endl;
            cin >> respuesta;

            if (respuesta == 1)
            {
                cout << "Tu personaje tiene pelo o alguna vez tuvo?" << endl;
                cin >> respuesta;

                if (respuesta == 1)
                {
                    cout << "Tu pesonaje alguna vez salio con bulma?" << endl;
                    cin >> respuesta;

                    if (respuesta == 1)
                    {
                        cout << "Tu personaje es... YAMCHA!!!" << endl;

                        return 0;
                    }
                    else (respuesta == 0);
                    {
                        cout << "Tu personaje fue maestro de goku?" << endl;
                        cin >> respuesta;

                        if (respuesta == 1)
                        {
                            cout << "Tu personaje es... EL MAESTRO ROSHI!!!" << endl;

                            return 0;
                        }
                        else (respuesta == 0);
                        {
                            cout << "Tu personaje es el mejor amigo de goku?" << endl;
                            cin >> respuesta;

                            if (respuesta == 1)
                            {
                                cout << "Tu personaje es... KRILIN!!!" << endl;

                                return 0;
                            }
                            else (respuesta == 0);
                            {
                                cout << "Te falta calle, no le sabes" << endl;

                                return 0;
                            }
                        }
                    }


                }
                else (respuesta == 0);
                {
                    cout << "Tu personaje tiene un tercer ojo?" << endl;
                    cin >> respuesta;

                    if (respuesta == 1)
                    {
                        cout << "Tu personaje es... TEN SHIN HAN!!!" << endl;

                        return 0;
                    }
                    else (respuesta == 0);
                    {
                        cout << "Te falta calle, ve mas dragon ball" << endl;

                        return 0;
                    }
                }



            }
            else (respuesta == 0);
            {
                cout << "Tu personaje tiene el pelo azul?" << endl;
                cin >> respuesta;

                if (respuesta == 1)
                {
                    cout << "Tu personaje es muy inteligente?" << endl;
                    cin >> respuesta;

                    if (respuesta == 1)
                    {
                        cout << "Tu personaje es... BULMA!!!" << endl;

                        return 0;
                    }
                    else (respuesta == 0);
                    {
                        cout << "Tu personaje tiene cambios de personalidad bruscos?" << endl;
                        cin >> respuesta;

                        if (respuesta == 1)
                        {
                            cout << "Tu personaje es... LAUNCH!!!" << endl;

                            return 0;
                        }
                        else (respuesta == 0);
                        {
                            cout << "Te falta calle, ve mas dragon ball" << endl;

                            return 0;
                        
                        
                        }
                    }



                }
                else (respuesta == 0);
                {
                    cout << "Tu personaje tiene el pelo negro?" << endl;
                    cin >> respuesta;

                    if (respuesta == 1);
                    {
                        cout << "Tu personaje es esposa de goku?" << endl;
                        cin >> respuesta;

                        if (respuesta == 1);
                        {
                            cout << "Tu personaje es... MILK!!!" << endl;

                            return 0;


                        }
                        
                    


                    }
                    
                }
               


            }

        }
        else (respuesta == 0);
        {
            cout << "Tu personaje es un namek?" << endl;
            cin >> respuesta;

            if (respuesta == 1)
            {
                cout << "Tu personaje fue enemigo de goku alguna vez?" << endl;
                if (respuesta == 1)
                {
                    cout << "Tu personaje es... PICCOLO" << endl;

                    return 0;
                }
                else (respuesta == 0);
                {
                    cout << "Tu personje es un niño?" << endl;
                    cin >> respuesta;

                    if (respuesta == 1)
                    {
                        cout << "Tu personaje es... DENDE!!!" << endl;

                        return 0;

                    }
                    else (respuesta == 0);
                    {
                        cout << "Tu personaje es... KAMISAMA!!!" << endl;

                        return 0;
                    }
                }


            }
            else (respuesta == 0);
            {
                cout << "Tu personaje es un androide?" << endl;
                cin >> respuesta;

                if (respuesta == 1)
                {
                    cout << "Tu personaje es mujer?" << endl;
                    cin >> respuesta;

                    if (respuesta == 1)
                    {
                        cout << "Tu personaje es... NUMERO 18!!!" << endl;

                        return 0;
                    }
                    else (respuesta == 0);
                    {
                        cout << "Tu personaje es hermano de numero 18?" << endl;
                        cin >> respuesta;

                        if (respuesta == 1)
                        {
                            cout << "Tu personaje es... NUMERO 17!!!" << endl;

                            return 0;
                        }
                        else (respuesta == 0);
                        {
                            cout << "Tu personaje es... NUMERO 16!!!" << endl;

                            return 0;
                        }

                    }
                }
                else (respuesta == 0);
                {
                    cout << "Solo hay 4 tipos de razas en este juego: Saiyajin, Humano, Namek y Androide" << endl;

                    return 0;


                }
            }
        }


    
    
    
    
    
    
    
    
    
    }




}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
