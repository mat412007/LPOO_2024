#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    printf("Pongamos a prueba la conjetura de Collatz\n");
    int numero;
    printf("Ingresa un numero: ");
    scanf("%d", &numero);
    printf("\n");
    printf("%d ", numero);
    while(numero != 1){
        if(numero % 2 == 0){
            numero = numero / 2;
        }
        else if(numero % 2 != 0){
            numero = (numero * 3) + 1;
        }
        printf("%d ", numero);
    }
    printf("\nConjetura terminada\n");
    return 0;
}