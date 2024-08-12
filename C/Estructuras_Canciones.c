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
    printf("3- Buscar cancion\n");
    printf("4- Mostrar todas las canciones\n");
    printf("5- Borrar una cancion\n");
    printf("6- Modificar una cancion\n> ");
    scanf("%d", &eleccion);
    printf("\n");
    return eleccion;
}

void accion_1(struct cancion canciones[100], int numero_cancion){
    struct cancion cancion_nueva;
    while(1){
        printf("Artista de la cancion: ");
        scanf("%s", &cancion_nueva.artista);
        printf("Titulo de la cancion: ");
        scanf("%s", &cancion_nueva.titulo);
        printf("Cuanto dura la cancion(segundos): ");
        scanf("%d", &cancion_nueva.duracion_segundos);
        if(cancion_nueva.duracion_segundos < 0){ printf("Error. La duracion no puede ser negativa\n\n"); continue; }
        printf("Size de la cancion(KB): ");
        scanf("%d", &cancion_nueva.size_KB);
        if(cancion_nueva.size_KB < 0){ printf("Error. El size no puede ser negativo\n\n"); continue; } 
        canciones[numero_cancion] = cancion_nueva;
        break;
    }

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
                // strstr retorna null si el texto introducido no esta presente en la variable en comparacion
                if(strstr(canciones[i].artista, artista_titulo) != NULL || strstr(canciones[i].titulo, artista_titulo) != NULL){
                    imprimir_cancion(canciones, i);
                }
            }
        }
        else if(accion == 4){
            for(int i = 0; i < numero_cancion; i++){
                imprimir_cancion(canciones, i);
            }
        }
        else if(accion == 5){
            int indice_borrar;
            printf("Inserta el numero de la cancion de la lista que deseas borrar, no el indice: ");
            scanf("%d", &indice_borrar);
            for(int i = indice_borrar-1; i < numero_cancion; i++){
                canciones[i] = canciones[i+1];
            }
            numero_cancion--;
        }
        else if(accion == 6){
            int indice_modificar;
            printf("Inserta el numero de la cancion de la lista que deseas modificar, no el indice: ");
            scanf("%d", &indice_modificar);
            indice_modificar--;
            int modificacion;
            printf("Que deseas modificar:\n1- Artista\n2- Titulo\n3- Duracion\n4- Size\n> ");
            scanf("%d", & modificacion);
            while(1){
                if(modificacion == 1){
                    printf("Artista de la cancion: ");
                    scanf("%s", &canciones[indice_modificar].artista);
                }
                else if(modificacion == 2){
                    printf("Titulo de la cancion: ");
                    scanf("%s", &canciones[indice_modificar].titulo);
                }
                else if(modificacion == 3){
                    printf("Cuanto dura la cancion(segundos): ");
                    scanf("%d", &canciones[indice_modificar].duracion_segundos);
                    if(canciones[indice_modificar].duracion_segundos < 0){ printf("Error. La duracion no puede ser negativa\n\n"); continue; }
                }
                else if(modificacion == 4){
                    printf("Size de la cancion(KB): ");
                    scanf("%d", &canciones[indice_modificar].size_KB);
                    if(canciones[indice_modificar].size_KB < 0){ printf("Error. El size no puede ser negativa\n\n"); continue; }
                }
                break;
            }
        }
        else{
            printf("\nOpcion invalida, ingresa una opcion del menu de opciones\n");
            continue;
        }
    }
}