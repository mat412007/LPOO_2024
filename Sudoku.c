#include <stdio.h>
#include <stdlib.h>

void llenar_tablero(int tablero[9][9]){
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            tablero[i][j] = j + 1;
        }
    }
}

void linea_horizontal(){
    for(int x = 0; x < 25; x++){
        if(x % 8 == 0){
            printf("|");
        }
        else{
            printf("-");
        }
    }
    printf("\n");
}

void imprimir_tablero(int tablero[9][9]){
    linea_horizontal();
    for(int i = 1; i <= 9; i++){
        printf("|");
        for(int j = 1; j <= 9; j++){
            printf(" %d", tablero[i-1][j-1]);
            if(j % 3 == 0 && j != 0){
                printf(" |");
            }

        }
        printf("\n");
        if(i % 3 == 0){
            linea_horizontal();
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
    imprimir_tablero(tablero);
    
}