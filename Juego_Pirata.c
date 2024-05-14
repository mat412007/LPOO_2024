#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

void dibujarTablero(char tablero[8][8],int x, int y){ // Funcion para dibujar el tablero
    for(int i = 0; i < 8; i++){ // Bucles para llenar el tablero segun corresponda
        for(int j = 0; j < 8; j++){
            if(i == 0 && j == 7 || i == 7 && j == 0){
                tablero[i][j] = 'P';
            }
            else if(i == 0 || i == 7 || j == 0 || j == 7){
                tablero[i][j] = 'A';
            }
            else{
                tablero[i][j] = 'O';
            }
        }
    }
    tablero[x][y] = 'X';
    for(int i = 0; i < 8; i++){ // Bucle para imprimir el tablero ya hecho
        for(int j = 0; j < 8; j++){
            printf("%c\t", tablero[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char *argv[]){
    char tablero[8][8];
    printf("\n");
    srand(time(NULL));
    // Declaramos la ubicacion del Pirata
    int pirata_i = 1 + rand() % 6;
    int pirata_j = 1 + rand() % 6;
    // Declaramos la ubicacion del tesoro
    int tesoro_i = 1 + rand() % 6;
    int tesoro_j = 1 + rand() % 6;
    // Dibujamos el tablero de introduccion
    dibujarTablero(tablero, pirata_i, pirata_j);
    if(pirata_i == tesoro_i && pirata_j == tesoro_j){ // Me aseguro de que el tesoro y el pirata nunca aparezcan en la misma posicion
        if(pirata_i < 4){
            pirata_i++;
        }
        else if(pirata_j < 4){
            pirata_j++;
        }
        else if(pirata_i > 3){
            pirata_i--;
        }
        else if(pirata_j > 3){
            pirata_i--;
        }
    }
    
    int intentos = 50;
    char movimiento[2];
    bool encontrado = false;
    printf("Tenes 50 intentos para encontrar el tesoro\n");
    while(intentos != 0){ // Bucle del juego con 50 intentos
        printf("Te quedan %d intentos\n", intentos);
        printf("A donde quieres mover el pirata?\n");
        printf("- Norte(N)\n- Sur(S)\n- Este(E)\n- Oeste(O)\n- Noretse(NE)\n- Noroeste(NO)\n- Sureste(SE)\n- Suroeste(SO)\n");
        scanf("%s", &movimiento);
        if(strcmp(movimiento, "N") == 0){
            pirata_i -= 1;
        }
        else if(strcmp(movimiento, "S") == 0){
            pirata_i += 1;
        }
        else if(strcmp(movimiento, "E") == 0){
            pirata_j += 1;
        }
        else if(strcmp(movimiento, "O") == 0){
            pirata_j -= 1;
        }
        else if(strcmp(movimiento, "NE") == 0){
            pirata_i -= 1;
            pirata_j += 1;
        }
        else if(strcmp(movimiento, "NO") == 0){
            pirata_i -= 1;
            pirata_j -= 1;
        }
        else if(strcmp(movimiento, "SE") == 0){
            pirata_i += 1;
            pirata_j += 1;
        }
        else if(strcmp(movimiento, "SO") == 0){
            pirata_i += 1;
            pirata_j -= 1;
        }
        else{
            printf("Acabas de insertar un movimiento invalido. Intentalo de nuevo\n");
            intentos++;
        }
        dibujarTablero(tablero, pirata_i, pirata_j);
        printf("------------------------------------------------------------\n");
        if(pirata_i == 0 || pirata_j == 0 || pirata_i == 7 || pirata_j == 7){ 
            if(pirata_i == 0 && pirata_j == 7 || pirata_i == 7 && pirata_j == 0){
                printf("Ten cuidado, estan en un puente colgante. Sali de ahi\n");
            }
            else{
                printf("Te has caido al agua, has perdido\n");
                break;
            }
        }
        else if(pirata_i == tesoro_i && pirata_j == tesoro_j){
            encontrado = !encontrado;
            break;
        }
        intentos--;
    } // Mensaje de victoria o derrota
    if(encontrado){
        printf("Ganaste, has encontrado el tesoro\n");
    }
    else if(intentos == 0){
        printf("Usaste todos tus intentos. Has perdido\n");
    }
}
