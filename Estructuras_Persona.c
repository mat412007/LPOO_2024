#include <stdio.h>

struct persona{
    char nombre[20];
    char apellido[20];
    int edad;
};

int main(){
    struct persona usuario;
    printf("Ingresa tu nombre: ");
    scanf("%s", &usuario.nombre);
    printf("Ingresa tu apellido: ");
    scanf("%s", &usuario.apellido);
    printf("Ingresa tu edad: ");
    scanf("%d", &usuario.edad);
    printf("\n%s, %s, %d", usuario.nombre, usuario.apellido, usuario.edad);
}