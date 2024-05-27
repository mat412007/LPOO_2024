#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int ejercicio;
    printf("Que ejercicio deseas corregir?\n> ");
    scanf("%d", &ejercicio);
    switch(ejercicio){
        case 1:
            printf("\nInserta 4 numeros\n");
            int numeros[4];
            float promedio = 0;
            for(int i = 0; i < 4; i++){
                printf("Numero N%d: ", i + 1);
                scanf("%d", &numeros[i]);
                promedio += numeros[i];
            }
            printf("\n[ ");
            for(int i = 0; i < 4; i++){
                printf("%d ", numeros[i]);
            }
            printf("]\nMedia aritmetica = %.2f", promedio/4);
        case 2:
            printf("\nInserta 5 numeros\n");
            int numeros2[5];
            for(int i = 0; i < 5; i++){
                printf("Numero N%d: ", i + 1);
                scanf("%d", &numeros2[i]);
            }
            printf("\n[ ");
            for(int i = 4; i >= 0; i--){
                printf("%d ", numeros2[i]);
            }
            printf("]");
        case 3:
            printf("\nInserta un numero de mes\n> ");
            int dias_meses[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
            char *meses[12] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
            int mes;
            scanf("%d", &mes);
            printf("\nEl mes de %s tiene %d dias", meses[mes - 1], dias_meses[mes - 1]);
        case 4:
            printf("\nInserta un numero de mes\n> ");
            int dias_meses2[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
            char *meses2[12] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
            int mes2;
            scanf("%d", &mes2);
            printf("Inserta un numero de dia de mes\n> ");
            int dia_mes;
            scanf("%d", &dia_mes);
            int numero_dia = 0;
            for(int i = 0; i < mes2; i++){
                numero_dia += dias_meses2[i];
            }
            printf("\nEl dia %d del mes %s es el dia %d",  dia_mes, meses2[mes2 - 1], numero_dia - (dias_meses2[mes2 - 1] - dia_mes));
    }
}