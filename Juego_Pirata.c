#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void dibujarTablero(int x, int y){
    char tablero[8][8];
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(i == 0 || i == 7){
                tablero[i][j] = '-';
            }
            else if(j == 0 || j == 7){
                tablero[i][j] = '|';
            }
            else{
                tablero[i][j] = 'O';
            }
        }
    }
    tablero[x][y] = 'X';
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            printf("%c ", tablero[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main(int argc, char *argv[]){
    printf("\n");
    srand(time(NULL));
    // Creamos el tablero
    printf("Tenes 50 intentos para encontrar el tesoro\n");
    // Declaramos la ubicacion del Pirata
    int pirata_i = 1 + rand() % 6;
    int pirata_j = 1 + rand() % 6;
    dibujarTablero(pirata_i, pirata_j);
    // Declaramos la ubicacion del tesoro
    int tesoro_i = 1 + rand() % 6;
    int tesoro_j = 1 + rand() % 6;
    
    int intentos = 50;
    char movimiento;

    while(intentos != 0){
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
        if(pirata_i == 0 || pirata_j == 0 || pirata_i == 7 || pirata_j == 7){
            printf("Te has caido al agua, has perdido");
            break;
        }
        dibujarTablero(pirata_i, pirata_j);
        if(pirata_i == tesoro_i && pirata_j == tesoro_j){
            printf("Encontraste el tesoro\n");
            break;
        }
    }
}