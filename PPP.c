#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
    srand(time(NULL));
    int ronda = 1;
    int puntaje_jugador = 0;
    int puntaje_maquina = 0;
    while(ronda <= 5){
        printf("\nThis is round number %d", ronda);
        int vuelta = 1;
        while(vuelta <= 3){
            if(puntaje_jugador == 3 || puntaje_maquina == 3){
                break;
            }
            printf("\nVuelta numero %d\n", vuelta);
            printf("What do you choose?\n1- Piedra\n2- Papel\n3- Tijera\n");
            int opcion1;
            scanf("%d", &opcion1);
            int opcion2 = 1 + rand() % 3; 
            if(opcion1 == opcion2){
                printf("Empate\n");
            }
            else if(opcion1 == 1 && opcion2 == 2){
                printf("Punto para la maquina\n");
                puntaje_maquina++;
            }
            else if(opcion1 == 2 && opcion2 == 1){
                printf("Punto para el jugador\n");
                puntaje_jugador++;
            }
            else if(opcion1 == 1 && opcion2 == 3){
                printf("Punto para el jugador\n");
                puntaje_jugador++;
            }
            else if(opcion1 == 3 && opcion2 == 1){
                printf("Punto para la maquina\n");
                puntaje_maquina++;
            }
            else if(opcion1 == 2 && opcion2 == 3){
                printf("Punto para la maquina\n");
                puntaje_maquina++;
            }
            else if(opcion1 == 3 && opcion2 == 2){
                printf("Punto para el juagdor\n");
                puntaje_jugador++;
            }
            vuelta++;
            printf("Resultado:\nJugador -> %d\nMaquina -> %d\n", puntaje_jugador, puntaje_maquina);
        }
        if(puntaje_jugador == 3 || puntaje_maquina == 3){
            break;
        }
        ronda++;
    }

    if(puntaje_jugador < puntaje_maquina){
        printf("La maquina gana\n");
    }
    else if(puntaje_jugador > puntaje_maquina){
        printf("El jugador gana\n");
    }
    else if(puntaje_jugador == puntaje_maquina){
        printf("Empate. Nadie gana");
    }
}