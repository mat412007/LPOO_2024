#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void llenar_tablero(char tablero[3][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            tablero[i][j] = '*';
        }
    }
}

void imprimir_tablero(char tablero[3][3]){
    printf("\n|---|---|---|\n");
    for(int i = 0; i < 3; i++){
        printf("|");
        for(int j = 0; j < 3; j++){
            printf(" %c ", tablero[i][j]);
            printf("|");
        }
        printf("\n|---|---|---|\n");
    }
}

void juego(char tablero[3][3]){
    printf("\nQuien desea empezar el juego? (X o O)\n> ");
    char primero;
    char segundo;
    int fila;
    int columna;
    bool ganador = false;
    scanf("%c", &primero);
    if(primero == 'X'){
        segundo = 'O';
    }
    
    else if(primero == 'O'){
        segundo = 'X';
    }
    int espacios = 9;
    char insercion;
    while(espacios != 0){
        if(espacios % 2 != 0){
            insercion = primero;
        }
        else if(espacios % 2 == 0){
            insercion = segundo;
        }
        printf("\nEs el turno de los %c\n", insercion);
        printf("Inserta la fila y columna de donde deseas insertar tu valor(1, 2, 3)\n");
        printf("Numero de fila: ");
        scanf("%d", &fila);
        printf("Numero de columna: ");
        scanf("%d", &columna);
        if(tablero[fila-1][columna-1] == '*'){
            tablero[fila-1][columna-1] = insercion;
        }
        else{
            printf("\nEse espacio ya esta ocupado. Intenta nuevamente\n");
            espacios++;
        }
        imprimir_tablero(tablero);
        for(int i = 0; i < 3; i++){
            if((tablero[i][0] == tablero[i][1]) && (tablero[i][1] == tablero[i][2]) && tablero[i][0] == insercion 
            || (tablero[0][i] == tablero[1][i]) && (tablero[1][i] == tablero[2][i]) && tablero[0][i] == insercion
            || (tablero[0][0] == tablero[1][1]) && (tablero[1][1] == tablero[2][2]) && tablero[0][0] == insercion
            || (tablero[0][2] == tablero[1][1]) && (tablero[1][1] == tablero[2][0]) && tablero[0][2] == insercion){
                printf("\n El ganador es %c\n", insercion);
                ganador = true;
                break;
            }
        }
        if(ganador){
            break;
        }
        espacios--;
    }
    if(ganador == 0){
        printf("\nEl juego ha terminado. Es un empate\n");
    }

}

int main(int argc, char *argv[]){
    char tablero[3][3];
    llenar_tablero(tablero);
    imprimir_tablero(tablero);
    juego(tablero);
}