#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    printf("Veamos unos ejercicos de código de C!\n");
    int inicio = 1;
    printf("\n");
    switch(inicio){
        case 1:
            printf("Como hallar tres numeros consecutivos que den como resultado un numero multiplo de 3\n");
            printf("Inserta un numero: ");
            int con;
            scanf("%d", &con);
            if(con % 3 != 0 || con < 6){
                printf("\nError. El numero debe ser multiplo de 3 y debe ser igual o mayor a 6\n");
                break;
            }
            int con_1 = 1;
            int con_2 = 2;
            int con_3 = 3;
            int sum_con = con_1 + con_2 + con_3;
            while(sum_con != con){
                con_1++;
                con_2++;
                con_3++;
                sum_con = con_1 + con_2 + con_3;
            }
            printf("%d + %d + %d = %d\n", con_1, con_2, con_3, con);
        case 2:
            printf("\nCalcular la media (promedio) de 3 números\n");
            printf("Ingresa tres numeros: ");
            int num_1;
            int num_2;
            int num_3;
            scanf("%d %d %d", &num_1, &num_2, &num_3);
            int promedio = (num_1 + num_2 + num_3) / 3;
            printf("El promedio de %d, %d, %d es igual a %d\n", num_1, num_2, num_3, promedio);
    }
}