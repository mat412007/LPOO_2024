#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    printf("Cinco ejercicios resueltos a continuacion\n");
    printf("Vamos a recorrerlos uno por uno\n");
    int comienzo = 1;
    printf("\n");
    switch(comienzo){
        case 1:
            printf("Estamos organizando un viaje escolar\n¿Cuantos alumnos crees que deberían ir? : ");
            int alumnos;
            int pago;
            int costo;
            scanf("%d", &alumnos);
            printf("\n");
            if(alumnos >= 100){
                pago = 500;
                costo = alumnos * pago;
            }
            else if(alumnos >= 50 && alumnos <= 99){
                pago = 400;
                costo = alumnos * pago;
            }
            else if(alumnos >= 30 && alumnos <= 49){
                pago = 300;
                costo = alumnos * pago;
            }
            else if(alumnos < 30){
                pago = 0;
                costo = 6000;
            }
            printf("Cada alumno debe pagar $%d y el costo del micro es de %d\n\n", pago, costo);
        case 2:
            printf("Un vendedor desea saber cuanto dinero tendra en el mes tomando en cuenta su salario y comisiones\n");
            printf("Inserta un sueldo base: ");
            int sueldo;
            scanf("%d", &sueldo);
            printf("\n");
            printf("Muy bien, el vendedor recibe un 10%% de eso por cada comision de sus ventas\n");
            int comision = sueldo * 0.1;
            printf("Con eso en cuenta, una comision es igual a $%d\n", comision);
            int com_men = 3 * (sueldo * 0.1);
            printf("Tres comisiones al mes es igual a $%d\n", com_men);
            int total = sueldo + com_men;
            printf("Finalmente el total de dinero al mes es igual a $%d\n\n", total);
        case 3:
            printf("Un alumno desea saber cuál será su calificación final en la materia de Algoritmos\n");
            printf("Para predecir dicho resultado, ingrese los siguientes numeros:\n");
            printf("Tres calificaciones parciales: ");
            int cal_1;
            int cal_2;
            int cal_3;
            scanf("%d %d %d", &cal_1, &cal_2, &cal_3);
            float promedio = (cal_1 + cal_2 + cal_3) / 3;
            printf("\n");
            printf("Calificacion del examen final: ");
            int cal_ef;
            scanf("%d", &cal_ef);
            printf("\n");
            printf("Calificacion trabajo final: ");
            int cal_tf;
            scanf("%d", &cal_tf);
            printf("\n");
            float Cal_F = promedio + cal_ef + cal_tf;
            printf("La calificacion final de la materia es %.2f\n\n", Cal_F);
        case 4:
             printf("Este programa imprime solo numeros pares\n");
             printf("Ingresa 2 numeros: ");
             int N1;
             int N2;
             int extra = N1;
             if(N1 > N2){
                N1 = N2;
                N2 = extra;
             }
             scanf("%d %d", &N1, &N2);
             printf("\n");
             for(int i = 0; N1 < N2; N1++){
                if(N1 % 2 == 0){
                    printf("%d ", N1);
                }
             }
             printf("\n\n");
        case 5:
            printf("¿Donde se encontraran ciertas personas a cierta velocidad?\n");
            int p_1 = 70;
            int p_2 = 150;
            int velocidad = 10;
            int distancia = p_2 - p_1;
            printf("La primera persona esta en el kilometro %d\nLa segunda persona esta en el kilometro %d\nLa distancia entre ellos es %dkm\n", p_1, p_2, distancia);
            printf("Como ambos viajan a una velocidad de %dkm/h, ambos se encontraran a la mitad de la distancia entre ellos\n", velocidad);
            printf("Cada uno recorre %dkm al mismo tiempo y se encuentran en el kilometro %d\n", distancia/2, p_1 + distancia/2);
    }
    printf("\nFinal del programa\n");
}
