#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    printf("Veamos unos ejercicos de código de C!\n");
    printf("¿Que ejercicio desea ver: ");
    int inicio;
    scanf("%d", &inicio);
    switch(inicio){
        case 1:
            printf("\nComo hallar tres numeros consecutivos que den como resultado un numero multiplo de 3\n");
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
        case 3:
            printf("\nDeterminar si un valor numérico positivo, mayor que cero ingresado es par o impar\n");
            printf("Ingresa un numero: ");
            int par_impar;
            scanf("%d", &par_impar);
            if(par_impar < 0){
                printf("\nError. El numero debe ser positivo\n");
                break;
            }
            else if(par_impar % 2 == 0){
                printf("El numero es par\n");
            }
            else if(par_impar % 2 != 0){
                printf("El numero es impar\n");
            }
        case 4:
            printf("\nIngresa las notas de 4 pruebas de un alumno y la nota de tarea, se pide determinar si el alumno aprobó o no la materia (se aprueba con 6)\n");
            printf("Ingresa las 4 notas de pruebas: ");
            float nota_prueba_1;
            float nota_prueba_2;
            float nota_prueba_3;
            float nota_prueba_4;
            scanf("%f %f %f %f", &nota_prueba_1, &nota_prueba_2, &nota_prueba_3, &nota_prueba_4);
            printf("Ingresa la nota de tarea: ");
            float nota_tarea;
            scanf("%f", &nota_tarea);
            printf("El total es %.0f float\n", nota_prueba_1 + nota_prueba_2 + nota_prueba_3 + nota_prueba_4 + nota_tarea);
            float aprobado = (nota_prueba_1 + nota_prueba_2 + nota_prueba_3 + nota_prueba_4 + nota_tarea) / 5;
            printf("Obtuviste un %.2f\n", aprobado);
            if(aprobado < 6){
                printf("Desaprobado\n");
            }
            else if(aprobado >= 6){
                printf("Aprobado\n");
            }
        case 5:
            printf("\nDada una nota escriba “Aprobado” ó “Reprobado” según la nota ingresada, pero además si la nota de aprobación es mayor o igual a 8, escriba .felicitaciones. y si la nota es 1, escriba “Debes esforzarte más”\n");
            printf("Ingrese la nota: ");
            int nota;
            scanf("%d", &nota);
            if(nota < 6){
                printf("Desaprobado\n");
                if(nota == 1){
                    printf("Debes esforzarte mas\n");
                }
            }
            else if(nota >= 6){
                printf("Aprobado\n");
                if(nota >= 8){
                    printf("Felicitaciones");
                }
            }
        case 6:
            printf("\nDado un alquiler, se pide determinar  cuánto paga en impuesto por concepto de alquiler, considerando la siguiente escala de cobro:  sueldo <= 202	 →0%% impuesto,  202 < sueldo <= 607 → 5%%,  607 < sueldo <= 1.013 →10%%, 1.013 < sueldo <= 1.418 →15%%, 1.418 < sueldo → 25%%\n");
            printf("¿Cual es tu sueldo($)? => ");
            int sueldo;
            scanf("%d", &sueldo);
            int impuesto;
            if(sueldo <= 202){
                impuesto = 0;
            }
            else if(sueldo > 202 && sueldo <= 607){
                impuesto = 5;
            }
            else if(sueldo > 607 && sueldo <= 1013){
                impuesto = 10;
            }
            else if(sueldo > 1013 && sueldo <= 1418){
                impuesto = 15;
            }
            else if(sueldo > 1418){
                impuesto = 25;
            }

    }
}