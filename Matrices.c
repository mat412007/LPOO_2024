#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, char *argv[]){
    srand(time(NULL));
    printf("Cuantas matrices deseas imprimir?\n");
    int cantidad;
    scanf("%d", &cantidad);
    printf("Cuantos elementos quieres que haya en cada una?\n");
    int elementos;
    scanf("%d", &elementos);
    printf("\n");
    int matrices[cantidad][elementos];
    for(int i = 0; i < cantidad; i++){
        for(int x = 0; x < elementos; x++){
                matrices[i][x] = rand() % 10;
        }
    }
    for(int i = 0; i < cantidad; i++){
        for(int x = 0; x < elementos; x++){
                printf("%d ",matrices[i][x]);
        }
        printf("\n");
    }
}