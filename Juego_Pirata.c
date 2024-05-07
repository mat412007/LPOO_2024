#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

void dibujarTablero(int x, int y){
    char tablero[8][8];
    for(int i = 0; i < 8; i++){
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
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            printf("%c\t", tablero[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main(int argc, char *argv[]){
    printf("\n");
    srand(time(NULL));
    // Declaramos la ubicacion del Pirata
    int pirata_i = 1 + rand() % 6;
    int pirata_j = 1 + rand() % 6;
    // Creamos el tablero
    dibujarTablero(pirata_i, pirata_j);
    // Declaramos la ubicacion del tesoro
    int tesoro_i = 1 + rand() % 6;
    int tesoro_j = 1 + rand() % 6;
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
    char movimiento;
    bool encontrado = false;
    printf("El tesoro esta en %d y %d\n", tesoro_i, tesoro_j);
    printf("Tenes 50 intentos para encontrar el tesoro\n");
    while(intentos != 0){
        printf("Te quedan %d intentos\n", intentos);
        printf("A donde quieres mover el pirata?\n");
        printf("- Norte(N)\n- Sur(S)\n- Este(E)\n- Oeste(O)\n");
        scanf(" %c", &movimiento);
        if(movimiento == 'N'){
            pirata_i -= 1;
        }
        else if(movimiento == 'S'){
            pirata_i += 1;
        }
        else if(movimiento == 'E'){
            pirata_j += 1;
        }
        else if(movimiento == 'O'){
            pirata_j -= 1;
        }
        dibujarTablero(pirata_i, pirata_j);
        printf("------------------------------------------------------------\n");
        if(pirata_i == 0 || pirata_j == 0 || pirata_i == 7 || pirata_j == 7){
            printf("Te has caido al agua, has perdido");
            break;
        }
        if(pirata_i == tesoro_i && pirata_j == tesoro_j){
            encontrado = !encontrado;
            break;
        }
        intentos--;
    }
    if(encontrado){
        printf("Ganaste, has encontrado el tesoro\n");
    }
    else if(intentos == 0){
        printf("Usaste todos tus intentos. Has perdido\n");
    }
}
