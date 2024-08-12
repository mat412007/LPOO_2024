#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    printf("Ahora veremos algunos programas que toman numeros e imprimen diferentes resultados segun la funcion del programa\n");
    int p = 1;
    switch(p){
        case 1:
            printf("Este programa determina si un numero es positivo o negativo\n");
            printf("Ingresa un numero: ");
            int x;
            scanf("%d", &x);
            printf("\n");
            if(x > 0){
                printf("El numero %d es positivo\n", x);
            }
            else if(x < 0){
                printf("El numero %d es negativo\n", x);
            }
            else if(x == 0){
                printf("El numero es igual a 0\n");
            }
        case 2:
            printf("Este programa determina si un numero es par o impar\n");
            printf("Ingresa un numero: ");
            int y;
            scanf("%d", &y);
            printf("\n");
            if(y % 2 == 0){
                printf("El %d es par\n", y);
            }
            else if(y % 2 != 0){
                printf("El %d es impar\n", y);
            }
            else if(y == 0){
                printf("El numero es igual a 0\n");
            }
        case 3:
            printf("Este programa determina si un numero es multiplo de 2 o de 3\n");
            printf("Ingresa un numero: ");
            int z;
            scanf("%d", &z);
            printf("\n");
            if(z % 2 == 0 && z % 3 == 0){
                printf("El %d es multiplo de 2 y de 3\n", z);
            }
            else if(z % 2 != 0 && z % 3 != 0){
                printf("El %d no es multiplo ni de 2 ni de 3\n", z);
            }
            else if(z % 2 != 0 && z % 3 == 0){
                printf("El %d es multiplo de 3 pero no de 2\n", z);
            }
            else if(z % 2 == 0 && z % 3 != 0){
                printf("El %d es multiplo de 2 pero no de 3\n", z);
            }
        case 4:
            printf("Este programa determina cual es el mayor de 3 numeros\n");
            printf("Ingresa 3 numeros: ");
            int n1;
            int n2;
            int n3;
            scanf("%d %d %d", &n1, &n2, &n3);
            printf("\n");
            if(n1 == n2 && n2 == n3){
                printf("Los tres numeros son iguales\n");
            }
            else if(n1 > n2 && n1 > n3){
                printf("El %d es el mayor\n", n1);
            }
            else if(n2 > n1 && n2 > n3){
                printf("El %d es el mayor\n", n2);
            }
            else if(n3 > n1 && n3 > n2){
                printf("El %d es el mayor\n", n3);
            }
            else if(n1 == n2 && n1 > n3){
                printf("Empate entre el primer y segundo numero\n");
            }
            else if(n1 == n3 && n1 > n2){
                printf("Empate entre el primer y tercer numero\n");
            }
            else if(n2 == n3 && n2 > n1){
                printf("Empate entre el segundo y tercer numero\n");
            }
    }
    printf("Este es el final del programa\n");
}