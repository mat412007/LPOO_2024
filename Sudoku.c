#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

// Imprime el tablero
void imprimirTablero(int tablero[9][9]) {
    for(int i = 0; i < 9; i++) {
        if(i % 3 == 0 && i != 0) {
            printf("--------------------------------\n");
        }
        for(int j = 0; j < 9; j++) {
            if(j % 3 == 0 && j != 0) {
                printf(" |");
            }
            if(tablero[i][j] == 0) {
                printf("   ");
            } 
            else{
                printf(" %2d", tablero[i][j]);
            }
        }
        printf("\n");
    }
}

// Verifica si cierto numero es valido para cierta posicion
bool esValido(int tablero[9][9], int fila, int columna, int numero) {
    int inicioFila = fila - fila % 3;
    int inicioColumna = columna - columna % 3;
    for(int i = 0; i < 9; i++) {
        if(tablero[fila][i] == numero || tablero[i][columna] == numero || 
            tablero[inicioFila + i / 3][inicioColumna + i % 3] == numero) {
            return false;
        }
    }
    return true;
}

// Crea el tablero lleno de numeros
bool resolverSudoku(int tablero[9][9]) {
    for(int fila = 0; fila < 9; fila++) {
        for(int columna = 0; columna < 9; columna++) {
            if(tablero[fila][columna] == 0) {
                for(int numero = 1; numero <= 9; numero++) {
                    if (esValido(tablero, fila, columna, numero)) {
                        tablero[fila][columna] = numero;
                        if(resolverSudoku(tablero)) {
                            return true;
                        }
                        tablero[fila][columna] = 0;
                    }
                }
                return false;
            }
        }
    }
    return true;
}

// Inserta ceros de manera aleatoria para que el usuario llene sus posiciones
void backtracking(int tablero[9][9], int numCeros) {
    srand(time(NULL));
    for(int i = 0; i < numCeros; i++) {
        int fila = rand() % 9;
        int columna = rand() % 9;
        while(tablero[fila][columna] == 0) {
            fila = rand() % 9;
            columna = rand() % 9;
        }
        tablero[fila][columna] = 0;
    }
}

// Crea el tablero con espacios para completar
void crearTablero(int tablero[9][9], int dificultad) {
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            tablero[i][j] = 0;
        }
    }

    resolverSudoku(tablero);

    switch(dificultad) {
        case 1: 
            backtracking(tablero, 18 + rand() % 10); 
            break;
        case 2: 
            backtracking(tablero, 30 + rand() % 10); 
            break;
        case 3: 
            backtracking(tablero, 40 + rand() % 10); 
            break;
        default: 
            backtracking(tablero, 30 + rand() % 10); 
            break;
    }
}

// Verifica si el tablero esta completo y el juego ha acabado
bool tableroCompleto(int tablero[9][9]) {
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            if(tablero[i][j] == 0) {
                return false;
            }
        }
    }
    return true;
}

int main(int argc, char *argv[]){
    int tablero[9][9] = {0};
    printf("Seleccione la dificultad:\n1. Facil\n2. Normal\n3. Dificil\n> ");
    int dificultad;
    scanf("%d", &dificultad);
    crearTablero(tablero, dificultad);
    printf("Tablero inicial:\n");
    imprimirTablero(tablero);

    int intentos = 3;
    int fila, columna, numero;

    while(tableroCompleto(tablero) == 0 && intentos > 0) {
        printf("Ingrese fila: ");
        scanf("%d", &fila);
        printf("Ingrese columna: ");
        scanf("%d", &columna);
        printf("Ingrese el numero: ");
        scanf("%d", &numero);


        if(fila < 1 || fila > 9 || columna < 1 || columna > 9 || numero < 1 || numero > 9) {
            printf("Ingrese numeros válidos\n");
            continue;
        }

        fila--; 
        columna--;

        if(tablero[fila][columna] == 0 && esValido(tablero, fila, columna, numero)) {
            tablero[fila][columna] = numero;
            printf("\nMovimiento valido. \nTablero actual:\n");
            imprimirTablero(tablero);
        } 
        else{
            printf("\nMovimiento invalido. \nIntente de nuevo.\n");
            intentos--;
        }

        if(intentos == 0) {
            printf("Perdiste. \nSe acabaron los intentos.\n");
            return 0;
        }
    }

    if(tableroCompleto(tablero)) {
        printf("\n¡Felicidades, completaste el Sudoku!\n");
    }
}


/*
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
*/


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
