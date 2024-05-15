#include <stdio.h>
#include <stdlib.h>

void llenar_tablero(int tablero[9][9]){
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            tablero[i][j] = j + 1;
        }
    }
}

int main(int argc, char *argv[]){
    printf("Vamos a jugar al Sudoku\n");
    printf("Que dificultad quieres:\n1- Facil\n2- Normal\n3- Dificil\n");
    int dificultad;
    printf("Inserta el numero aqui: ");
    scanf("%d", &dificultad);
    int vidas = 3;
    int tablero[9][9];
    llenar_tablero(tablero);
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            if(j % 3 == 0 && j != 0){
                printf(" |");
            }
            printf(" %d", tablero[i][j]);
        }
        printf("\n ");
        for(int x = 0; x < 24; x++){
            if(x % 7 == 0){
                printf("|");
            }
            else{
                printf("-");
            }
        }
        printf("\n");
    }
    
}