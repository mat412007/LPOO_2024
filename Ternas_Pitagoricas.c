#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){
    printf("Hallemos la terna pitagorica de un triangulo rectangulo\n");
    float opuesto;
    float adyacente;
    float hipotenusa;
    printf("Que valor deseas averiguar?\n");
    printf("1- Opuesto\n2- Adyacente\n3- Hipotenusa\n");
    int opcion;
    printf("Inserta el numero de tu eleccion: ");
    scanf("%d", &opcion);
    printf("\n");
    if(opcion == 1){
        printf("Deseas averiguar el opuesto\n");
        printf("Inserta el valor de la hipotenusa: ");
        scanf("%f", &hipotenusa);
        printf("Inserta el valor del adyacente: ");
        scanf("%f", &adyacente);
        printf("\n");
        opuesto = pow(hipotenusa, 2) - pow(adyacente, 2);
        printf("El opuesto es igual a %.0f\n", sqrt(opuesto)); 
    }
    else if(opcion == 2){
        printf("Deseas averiguar el adyacente\n");
        printf("Inserta el valor de la hipotenusa: ");
        scanf("%f", &hipotenusa);
        printf("Inserta el valor del opuesto: ");
        scanf("%f", &opuesto);
        printf("\n");
        opuesto = pow(hipotenusa, 2) - pow(opuesto, 2);
        printf("El adyacente es igual a %.0f\n", sqrt(opuesto)); 
    }
    else if(opcion == 3){
        printf("Deseas averiguar la hipotenusa\n");
        printf("Inserta el valor del opuesto: ");
        scanf("%f", &opuesto);
        printf("Inserta el valor del adyacente: ");
        scanf("%f", &adyacente);
        printf("\n");
        opuesto = pow(opuesto, 2) + pow(adyacente, 2);
        printf("La hipotenusa es igual a %.0f\n", sqrt(opuesto)); 
    }
}