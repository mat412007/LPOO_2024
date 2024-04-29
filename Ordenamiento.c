#include <stdio.h>
#include <conio.h>

int main(int argc, char *arv[]){
    int max = 1000;
    int aux;
    int cn;
    int n[max];
    printf("Dimension del Vector: ");
    scanf("%d", &cn);
    for(int i = 0; i < cn; i++){
        printf("Ingrese el elemento: ");
        scanf("%d", &n[i]);
    }

    for(int i = 1; i < cn; i++){
        for(int j = 0; j < cn; j++){
            if(n[j] < n[j+1]){
                aux = n[j+1];
                n[j+1] = n[j];
                n[j] = aux;
            }
        }
    }

    for(int i = 0; i < cn; i++){
        printf("\n%d", n[i]);
    }
}