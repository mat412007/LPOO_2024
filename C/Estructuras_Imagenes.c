#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct duracion{
    int minutos;
    int segundos;
};

struct imagen{
    char nombre[20];
    int ancho_pixeles;
    int alto_pixeles;
    int size_KB;
    struct duracion duracion;
};

int menu_opciones(){
    int eleccion;
    printf("\n1- Ficha nueva\n");
    printf("2- Ver todas las fichas\n");
    printf("3- Buscar ficha\n> ");
    scanf("%d", &eleccion);
    printf("\n");
    return eleccion;
}

void accion_1(struct imagen imagenes[700], int numero_ficha){
    struct imagen ficha_nueva;
    printf("Nombre de la imagen: ");
    scanf("%s", &ficha_nueva.nombre);
    printf("Ancho(pixeles): ");
    scanf("%d", &ficha_nueva.ancho_pixeles);
    printf("Alto(pixeles): ");
    scanf("%d", &ficha_nueva.alto_pixeles);
    printf("Size de la imagen(KB): ");
    scanf("%d", &ficha_nueva.size_KB);
    printf("Minutos: ");
    scanf("%d", &ficha_nueva.duracion.minutos);
    printf("Segundos: ");
    scanf("%d", &ficha_nueva.duracion.segundos);
    imagenes[numero_ficha] = ficha_nueva;
}

void imprimir_ficha(struct imagen imagenes[700], int elemento){
    printf("------------------------------\n");
    printf("Nombre: %s\n", imagenes[elemento].nombre);
    printf("Ancho: %d\n", imagenes[elemento].ancho_pixeles);
    printf("Alto: %d segundos\n", imagenes[elemento].alto_pixeles);
    printf("Size: %d KB\n", imagenes[elemento].size_KB);
    printf("Minutos: %d\n", imagenes[elemento].duracion.minutos);
    printf("Segundos: %d\n", imagenes[elemento].duracion.segundos);
    printf("------------------------------\n");
}

int main(int argc, char *argv[]){
    struct imagen imagenes[700];
    int numero_ficha = 0;
    while(1){
        if(numero_ficha == 700){
            printf("La lista ya contiene 700 fichas, es imposible agregar mas\n"); 
            continue;
        }
        int accion = menu_opciones();
        if(accion == 1){
            if(numero_ficha == 700){printf("Error. La lista ya contiene 700 fichas\n"); continue;} 
            accion_1(imagenes, numero_ficha);
            numero_ficha++;
        }
        else if(accion == 2){
            printf("Lista de imagenes:\n");
            for(int i = 0; i < numero_ficha; i++){
                printf("%d- %s\n", i+1, imagenes[i].nombre);
            }
        }
        else if(accion == 3){
            char ficha_nombre[20];
            printf("Ingresa el nombre de la ficha que buscas\n> ");
            scanf("%s", &ficha_nombre);
            printf("Fichas encontradas: \n");
            for(int i = 0; i < numero_ficha; i++){
                if(strcmp(imagenes[i].nombre, ficha_nombre) == 0){
                    imprimir_ficha(imagenes, i);
                }
            }
        }
    }
}