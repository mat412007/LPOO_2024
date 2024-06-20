#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cancion{
    char artista[20];
    char titulo[20];
    int duracion_segundos;
    int size_KB;
};

int menu_opciones(){
    int eleccion;
    printf("\n1- Nueva cancion\n");
    printf("2- Mostrar titulos de canciones\n");
    printf("3- Buscar cancion\n> ");
    scanf("%d", &eleccion);
    printf("\n");
    return eleccion;
}

void accion_1(struct cancion canciones[100], int numero_cancion){
    struct cancion cancion_nueva;
    printf("Artista de la cancion: ");
    scanf("%s", &cancion_nueva.artista);
    printf("Titulo de la cancion: ");
    scanf("%s", &cancion_nueva.titulo);
    printf("Cuanto dura la cancion(segundos): ");
    scanf("%d", &cancion_nueva.duracion_segundos);
    printf("Size de la cancion(KB): ");
    scanf("%d", &cancion_nueva.size_KB);
    canciones[numero_cancion] = cancion_nueva;
}

void imprimir_cancion(struct cancion canciones[100], int elemento){
    printf("------------------------------\n");
    printf("Artista: %s\n", canciones[elemento].artista);
    printf("Titulo: %s\n", canciones[elemento].titulo);
    printf("Duracion: %d segundos\n", canciones[elemento].duracion_segundos);
    printf("Size: %d KB\n", canciones[elemento].size_KB);
    printf("------------------------------\n");
}

int main(int argc, char *argv[]){
    struct cancion canciones[100];
    int numero_cancion = 0;
    while(1){
        if(numero_cancion == 100){
            printf("La lista ya contiene 100 canciones, es imposible agregar mas\n"); 
            continue;
        }
        int accion = menu_opciones();
        if(accion == 1){
            if(numero_cancion == 100){printf("Error. La lista ya contiene 100 canciones\n"); continue;} 
            accion_1(canciones, numero_cancion);
            numero_cancion++;
        }
        else if(accion == 2){
            printf("Lista de canciones:\n");
            for(int i = 0; i < numero_cancion; i++){
                printf("%d- %s\n", i+1, canciones[i].titulo);
            }
        }
        else if(accion == 3){
            char artista_titulo[20];
            printf("Ingresa el artista o el titulo de la cancion que buscas\n> ");
            scanf("%s", &artista_titulo);
            printf("Canciones encontradas: \n");
            for(int i = 0; i < numero_cancion; i++){
                if(strstr(canciones[i].artista, artista_titulo) != NULL || strstr(canciones[i].titulo, artista_titulo) != NULL){
                    imprimir_cancion(canciones, i);
                }
            }
        }
    }
}