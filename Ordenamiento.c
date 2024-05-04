#include <stdio.h>
#include <conio.h>

int main(int argc, char *arv[]){
    int max = 1000;
    int aux;
    int size;
    int n[max];
    int copia[max];
    printf("Dimension del Vector: ");
    scanf("%d", &size);
    for(int i = 0; i < size; i++){
        printf("Ingrese el elemento: ");
        scanf("%d", &n[i]);
        copia[i] = n[i];
    }
 
// Método Burbuja
    for(int i = 1; i < size; i++){
        for(int j = 0; j < size - i; j++){ 
            if(n[j] < n[j+1]){
                aux = n[j+1];
                n[j+1] = n[j];
                n[j] = aux;
            }
        }
    }
    for(int i = 0; i < size; i++){
        printf("\n%d", n[i]);
    }

    printf("\n\n");
// Método por Selección
    for(int i = 0; i < size; i++){
        n[i] = copia[i];
    }
    
    for(int i = 0; i < size - 1; i++){
        int menor = n[i]; // 1
        int intercambio;
        for(int j = i + 1; j < size; j++){
            if(n[j] < menor){
                menor = n[j];
                intercambio = j;
            }
        }
        n[intercambio] = n[i];
        n[i] = menor;
    }
    for(int i = 0; i < size; i++){
        printf("\n%d", n[i]);
    }

    printf("\n\n");
// Método por Inserción
    for(int i = 0; i < size; i++){
        n[i] = copia[i];
    }

    
}