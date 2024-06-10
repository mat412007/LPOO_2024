#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

bool rep_columna(int tablero[9][9], int columna, int numero){
    for(int fila = 0; fila < 9; fila++){
        if(numero == tablero[fila][columna]){
            return true;
        }
    }
    return false;
}

bool rep_fila(int tablero[9][9], int fila, int numero){
    for(int columna = 0; columna < 9; columna++){
        if(numero == tablero[fila][columna]){
            return true;
        }
    }
    return false;
}

void llenar_tablero(int tablero[9][9]){
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            tablero[i][j] = 0;
        }
    }
    int numero;
    bool fila_no_repetido;
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            numero = rand() % 9 + 1;
            fila_no_repetido = true;
            for(int x = 0; x < 9; x++){
                if(numero == tablero[i][x]){
                    j--;
                    fila_no_repetido = false;
                    break;
                }
            }
            /*
            for(int x = 0; x < 9; x++){
                if(numero == tablero[x][i]){
                    j--;
                    fila_no_repetido = false;
                    break;
                }
            }
            */
            if(fila_no_repetido){
                tablero[i][j] = numero;
            }
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
    for(int i = 0; i < 9; i++) {
        printf("|");
        for(int j = 0; j < 9; j++) {
            printf(" %d", tablero[i][j]);
            if((j + 1) % 3 == 0) {
                printf(" |");
            }
        }
        printf("\n");
        if((i + 1) % 3 == 0) {
            linea_horizontal();
        }
    }
}

int main(int argc, char *argv[]){
    srand(time(NULL));
    printf("Vamos a jugar al Sudoku\n");
    printf("\n");
    int vidas = 3;
    int tablero[9][9];
    llenar_tablero(tablero);
    imprimir_tablero(tablero);
    
}



/*
void llenar_tablero(int tablero[9][9]){
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            int numero;
            do {
                numero = rand() % 9 + 1; 
            } while (rep_fila(tablero, i, numero) || rep_columna(tablero, j, numero));
            tablero[i][j] = numero;
        }
    }
}
*/
