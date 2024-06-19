#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct persona{
    char nombre[20];
    char direccion[20];
    int telefono;
    int edad;
};

int menu(){
    int accion;
    printf("\n1- Mostrar la lista de todos los nombres\n");
    printf("2- Mostrar las personas de una cierta edad\n");
    printf("3- Mostrar las personas cuya inicial sea la que el usuario indique\n");
    printf("4- Salir del programa\n> ");
    scanf("%d", &accion);
    return accion;
}

int datos(struct persona personas[50]){
    char buffer[100];
    int cantidad = 0;
    for(int i = 0; i < 50; i++) {
        printf("Introduce tu nombre: ");
        fgets(personas[i].nombre, 20, stdin);
        // Eliminar el carácter de nueva línea
        personas[i].nombre[strcspn(personas[i].nombre, "\n")] = '\0'; // strcspn retorna el indice de posicion del otro caracter
        // Comprobar si el nombre está vacío
        if (strcmp(personas[i].nombre, "") == 0) {
            break;
        }

        printf("Introduce tu direccion: ");
        fgets(personas[i].direccion, 20, stdin);
        personas[i].direccion[strcspn(personas[i].direccion, "\n")] = '\0';

        printf("Introduce tu telefono: ");
        fgets(buffer, sizeof(buffer), stdin);
        personas[i].telefono = atoi(buffer); // atoi convierte el texto de fgets a int

        printf("Introduce tu edad: ");
        fgets(buffer, sizeof(buffer), stdin);
        personas[i].edad = atoi(buffer);

        printf("\n");
        cantidad++;
    }
    return cantidad;
}

int main(){
    struct persona personas[50];
    int cantidad = datos(personas);
    while(1){
        int accion = menu();
        if(accion == 1){
            for(int i = 0; i < cantidad; i++){
                printf("- %s\n", personas[i].nombre);
            }
        }
        else if(accion == 2){
            int edad;
            printf("Inserta la edad de las personas de las cuales deseas obtener informacion: ");
            scanf("%d", &edad);
            for(int i = 0; i < cantidad; i++){
                if(personas[i].edad == edad){
                    printf("-------------------------\n");
                    printf("Nombre: %s\n", personas[i].nombre);
                    printf("Direccion: %s\n", personas[i].direccion);
                    printf("Telefono: %d\n", personas[i].telefono);
                    printf("Edad: %d\n", personas[i].edad);
                    printf("-------------------------\n");
                }
            }
        }
        else if(accion == 3){
            char inicial;
            printf("Inserta la inicial de las personas de las cuales deseas obtener informacion: ");
    
            // Leer el primer carácter después de limpiar el buffer de entrada
            while ((getchar()) != '\n'); // Limpiar el buffer de entrada
            inicial = getchar(); // Leer el carácter de inicial
            for(int i = 0; i < cantidad; i++){
                if(personas[i].nombre[0] == inicial){
                    printf("-------------------------\n");
                    printf("Nombre: %s\n", personas[i].nombre);
                    printf("Direccion: %s\n", personas[i].direccion);
                    printf("Telefono: %d\n", personas[i].telefono);
                    printf("Edad: %d\n", personas[i].edad);
                    printf("-------------------------\n");
                }
            }
        }
        else if(accion == 4){
            break;
        }
    }
}
