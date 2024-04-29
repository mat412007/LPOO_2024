#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
    srand(time(NULL));
    int ronda = 1;
    int puntaje_jugador = 0;
    int puntaje_maquina = 0;
    int puntos_jugador;
    int puntos_maquina;
    char *movimientos[3] = {"Piedra", "Papel", "Tijera"};
    while(ronda <= 5){
        printf("\nThis is round number %d", ronda);
        int vuelta = 1;
        puntos_jugador = 0;
        puntos_maquina = 0;
        while(vuelta <= 3){
            printf("\nVuelta numero %d\n", vuelta);
            printf("What do you choose?\n1- Piedra\n2- Papel\n3- Tijera\n");
            int opcion1;
            scanf("%d", &opcion1);
            int opcion2 = 1 + rand() % 3; 
            printf("%s -><- %s\n", movimientos[opcion1-1], movimientos[opcion2-1]);
            if(opcion1 == opcion2){
                printf("Empate\n");
            }
            else if(opcion1 == 1 && opcion2 == 2){
                puntos_maquina++;
            }
            else if(opcion1 == 2 && opcion2 == 1){
                puntos_jugador++;
            }
            else if(opcion1 == 1 && opcion2 == 3){
                puntos_jugador++;
            }
            else if(opcion1 == 3 && opcion2 == 1){
                puntos_maquina++;
            }
            else if(opcion1 == 2 && opcion2 == 3){
                puntos_maquina++;
            }
            else if(opcion1 == 3 && opcion2 == 2){
                puntos_jugador++;
            }
            vuelta++;
        }
        if(puntos_jugador < puntos_maquina){
            printf("Punto para la maquina\n");
            puntaje_maquina++;
        }
        else if(puntos_jugador > puntos_maquina){
            printf("Punto para el jugador\n");
            puntaje_jugador++;
        }
        printf("Resultado:\nJugador -> %d\nMaquina -> %d\n", puntaje_jugador, puntaje_maquina);
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