#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
    srand(time(NULL));
    int ronda = 1; // Declaro la variable para enumerar las rondas
    int puntaje_jugador = 0; // Declaro los puntajes de el usuario y la maquina
    int puntaje_maquina = 0;
    int puntos_jugador; // Declaro los puntos que cada uno gana en cada ronda
    int puntos_maquina;
    char *movimientos[3] = {"Piedra", "Papel", "Tijera"}; // Declaro una matriz con las 3 posibles opciones de movimiento
    while(ronda <= 5){ // Inicio el loop de las 5 rondas
        printf("\nRonda numero %d", ronda);
        int vuelta = 1; // Declaro la variable para enumerar las rondas
        puntos_jugador = 0; // Declaro que los puntos de cada uno se vuelvan 0
        puntos_maquina = 0;
        while(vuelta <= 3){ // Inicio el loop de las 3 vueltas poor ronda
            printf("\nVuelta numero %d\n", vuelta);
            printf("Cual es tu eleccion?\n1- Piedra\n2- Papel\n3- Tijera\n");
            int opcion1; // Declaro la opcion del usuario
            scanf("%d", &opcion1); // El usuario inserta su opcion
            int opcion2 = 1 + rand() % 3; // La maquina elige una opcion al azar
            printf("%s -><- %s\n", movimientos[opcion1-1], movimientos[opcion2-1]);
            if(opcion1 == opcion2){ // Empate si eligieron lo mismo
                printf("Empate\n");
            }
            else if(opcion1 == 1 && opcion2 == 2 || opcion1 == 3 && opcion2 == 1 || opcion1 == 2 && opcion2 == 3){ // Situaciones en las que la maquina gana la vuelta
                puntos_maquina++;
            }
            else if(opcion1 == 2 && opcion2 == 1 || opcion1 == 1 && opcion2 == 3 || opcion1 == 3 && opcion2 == 2){ // Situaciones en las que el usario gana la vuelta
                puntos_jugador++;
            }
            else if(opcion1 != 1 && opcion1 != 2 && opcion1 != 3){
                printf("Opcion no valida. Debes ingresar 1, 2 o 3\n");
                printf("Reiniciaremos la vuelta\n");
                vuelta--;
            }
            if(puntos_jugador == 2 || puntos_maquina == 2){ // Cuando cualquiera obtiene 2 puntos en una sola ronda, la gana automaticamente
                break;
            }
            vuelta++;
        }
        if(puntos_jugador < puntos_maquina){ // Mensaje de que la maquina gano la ronda y un punto para su puntaje
            printf("Punto para la maquina\n");
            puntaje_maquina++;
        }
        else if(puntos_jugador > puntos_maquina){ // Mensaje de que el usuario gano la ronda y un punto para su puntaje
            printf("Punto para el jugador\n");
            puntaje_jugador++;
        }
        printf("Resultado:\nJugador -> %d\nMaquina -> %d\n", puntaje_jugador, puntaje_maquina);
        printf("------------------------------");
        if(puntaje_jugador == 3 || puntaje_maquina == 3){ // Cuando cualquiera obtiene 3 puntos en su puntaje, gana el juego automáticamente
            break;
        }
        ronda++;
    }

    // Mensajes para declarar quien gano la partida o si acabo en empate
    if(puntaje_jugador < puntaje_maquina){
        printf("\nLa maquina gana\n");
    }
    else if(puntaje_jugador > puntaje_maquina){
        printf("\nEl jugador gana\n");
    }
    else if(puntaje_jugador == puntaje_maquina){
        printf("\nEmpate. Nadie gana");
    }
}