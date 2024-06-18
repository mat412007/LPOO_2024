#include <stdio.h>
#include <stdlib.h>

struct persona{
    char nombre[20];
    int dia_nacimiento;
    int mes_nacimiento;
    int year;
};

void datos(struct persona personas[8], int indice){
    printf("Nombre: ");
    scanf("%s", &personas[indice].nombre);
    printf("Dia de nacimiento: ");
    scanf("%d", &personas[indice].dia_nacimiento);
    printf("Mes de nacimiento: ");
    scanf("%d", &personas[indice].mes_nacimiento);
    printf("Year de nacimiento: ");
    scanf("%d", &personas[indice].year);
    printf("\n");
}

void imprimir_datos(struct persona personas[8], int indice){
    printf("------------------------------\n");
    printf("Nombre: %s\n", personas[indice].nombre);
    printf("Dia de nacimiento: %d\n", personas[indice].dia_nacimiento);
    printf("Mes de nacimiento: %d \n", personas[indice].mes_nacimiento);
    printf("Year de nacimiento: %d\n", personas[indice].year);
    printf("------------------------------\n");
}

int main(int argc, char *argv[]){
    struct persona personas[8];
    for(int i = 0; i < 8; i++){
        datos(personas, i);
    }
    while(1){
        int numero_mes;
        printf("\nInserta un numero de mes y veamos los datos de quienes aparecen\n");
        printf("Si deseas terminar con esto, inserta el valor 0\n> ");
        scanf("%d", &numero_mes);
        if(numero_mes == 0){
            break;
        }
        for(int i = 0; i < 8; i++){
            if(personas[i].mes_nacimiento == numero_mes){
                imprimir_datos(personas, i);
            }
        }
    }
}