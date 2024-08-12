#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimir_tablero(int tablero[10][10], int jugador_i, int juador_j){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            tablero[i][j] = 1;
        }
    }
    tablero[jugador_i][juador_j] = 8;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("%d ", tablero[i][j]);
        }
        printf("\n");
    }
}

void poner_pozos(int pozos[10][10]){
    int cantidad = 3;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            pozos[i][j] = 1;
        }
    }
    while(cantidad != 0){
        int coordenada_i = rand() % 10;
        int coordenada_j = rand() % 10;
        if((pozos[coordenada_i][coordenada_j] == 0) || (coordenada_i == 0 && coordenada_j == 0) || (coordenada_i == 9 && coordenada_j == 9)){
            continue;
        }
        else{
            pozos[coordenada_i][coordenada_j] = 0;
            cantidad--;
        }
    }
}

void juego(int tablero[10][10], int pozos[10][10], int jugador_i, int jugador_j){
    int movimiento;
    while(1){
        printf("\nHacia donde te deseas mover(inserta el numero):\n1- Arriba\n2- Abajo\n3- Izquierda\n4- Derecha\n> ");
        scanf("%d", &movimiento);
        if(movimiento == 1){
            jugador_i--;
        }
        else if(movimiento == 2){
            jugador_i++;
        }
        else if(movimiento == 3){
            jugador_j--;
        }
        else if(movimiento == 4){
            jugador_j++;
        }
        imprimir_tablero(tablero, jugador_i, jugador_j);
        if(jugador_i == 9 && jugador_j == 9){
            printf("Felicitaciones, has ganado el juego\n");
            break;
        }
        else if(pozos[jugador_i][jugador_j] == 0){
            printf("Lo lamento, has caido en un pozo, has perdido\n");
            break;
        }
    }
}

int main(int argc, char *argv[]){
    srand(time(NULL));
    int tablero[10][10];
    int pozos[10][10];
    int jugador_i = 0;
    int jugador_j = 0;
    poner_pozos(pozos);
    printf("\nComienza el juego!\n");
    printf("Tu eres representado en el tablero por el numero 8\n");
    printf("LLega a la otra esquina del tablero sin caer en ningun pozo\n");
    printf("\nTablero:\n");
    imprimir_tablero(tablero, jugador_i, jugador_j);
    juego(tablero, pozos, jugador_i, jugador_j);
}