// 2021_10_7_Practica 6_batalla pokemon.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Rodrigo Tapia Robles

#include <iostream>
using namespace std;
int main()
{
        int opcion;
        int hp_eevee = 150, hp_vulpix = 100;
        int ataque_eevee = 30, ataque_vulpix = 25;
        int exito_eevee, exito_vulpix;
        int turno = 1, jugador = 1, oponente = 2, fin = 3;
        int accion_vulpix;
        
        
        printf("Bienvenido a Pokemon humilde.\n Iba Mau caminando en las afueras de la Uni cuando ¡un Vulpix salvaje aparecio!\n");
        printf("¡Eevee ve!\n");
        while (hp_vulpix > 0 && turno != fin)
        {
            printf("VULPIX: HP %d\n", hp_vulpix);
            printf("EEVEE: HP %d\n", hp_eevee);
            if (turno == jugador)
            {
                printf("Elija la acción:\n");
                printf("1. ATACAR\t2. ");
                scanf_s("%d", &opcion);
                if (opcion == 1)
                {
                    printf("¡Eevee uso PLACAJE!\n");
                    
                   
                        hp_vulpix = hp_vulpix - ataque_eevee;
                        printf("¡Eevee hizo %d de daño al vulpix enemigo!\n", ataque_eevee);
                        if (hp_vulpix <= 0)
                        {
                            printf("¡Vulpix ha sido derrotado!");
                        }
                        turno = oponente;
                 
                 
                }
                
               
            }
            else if (turno == oponente)
            {
                printf_s("Turno de Vulpix\n");
                accion_vulpix = (rand() % 2) + 1;
                if (accion_vulpix == 1)
                {
                    printf_s("¡Vulpix uso PLACAJE!\n");
                  
                  
                        hp_eevee = hp_eevee - ataque_vulpix;
                        printf_s("¡Vulpix hizo %d de daño a Eevee!\n", ataque_vulpix);
                        if (hp_eevee <= 0)
                        {
                            printf_s("Eevee ha sido derrotado...");
                        }
                        turno = jugador;
                }
                    
                
            }
            printf_s("\n\n");
        }
        printf_s("Ha terminado el juego, gracias por jugar.\n");
 }

   
    
    
    
    
    













