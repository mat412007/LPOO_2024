#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void imprimir_matriz_simple(int columnas, int matriz[columnas]){
    printf("[ ");
    for(int i = 0; i < columnas; i++){
        printf("%d ", matriz[i]);
    }
    printf("]\n");
}

void imprimir_matriz(int filas, int columnas, int matriz[filas][columnas]){
    for(int x = 0; x < filas; x++){
        printf("[ ");
        for(int y = 0; y < columnas; y++){
            printf("%d ", matriz[x][y]);
        }
        printf("]\n");
    }
}

void orden_inverso(int columnas, int matriz[columnas]){
    printf("[ ");
    for(int i = columnas-1; i >= 0; i--){
        printf("%d ", matriz[i]);
    }
    printf("]\n");
}

int main(int argc, char *argv[]){
    int ejercicio;
    printf("Que ejercicio deseas corregir?\n> ");
    scanf("%d", &ejercicio);
    switch(ejercicio){
        case 1:
            printf("\nInserta 4 numeros\n");
            int numeros[4];
            float promedio = 0;
            for(int i = 0; i < 4; i++){
                printf("Numero N%d: ", i + 1);
                scanf("%d", &numeros[i]);
                promedio += numeros[i];
            }
            printf("\n");
            imprimir_matriz_simple(4, numeros);
            printf("Media aritmetica = %.2f", promedio/4);
            break;
        case 2:
            printf("\nInserta 5 numeros\n");
            int numeros2[5];
            for(int i = 0; i < 5; i++){
                printf("Numero N%d: ", i + 1);
                scanf("%d", &numeros2[i]);
            }
            printf("Orden original:\n");
            imprimir_matriz_simple(5, numeros2);
            printf("Orden invertido:\n");
            orden_inverso(5, numeros2);
            break;
        case 3:
            printf("\nInserta un numero de mes\n> ");
            int mes;
            scanf("%d", &mes);
            int dias_meses[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
            char *meses[12] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
            printf("\nEl mes de %s tiene %d dias", meses[mes - 1], dias_meses[mes - 1]);
            break;
        case 4:
            printf("\nInserta un numero de mes\n> ");
            int dias_meses2[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
            char *meses2[12] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
            int mes2;
            scanf("%d", &mes2);
            printf("Inserta un numero de dia de mes\n> ");
            int dia_mes;
            scanf("%d", &dia_mes);
            int numero_dia = 0;
            for(int i = 0; i < mes2; i++){
                numero_dia += dias_meses2[i];
            }
            printf("\nEl dia %d del mes %s es el dia %d",  dia_mes, meses2[mes2 - 1], numero_dia - (dias_meses2[mes2 - 1] - dia_mes));
            break;
        case 5:
            printf("\nInserta un numero de mes\n> ");
            int dias_meses3[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
            char *meses3[12] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
            int mes3;
            scanf("%d", &mes3);
            printf("Inserta un numero de dia de mes\n> ");
            int dia_mes2;
            scanf("%d", &dia_mes2);  
            int fin = 0;
            for(int i = mes3; i < 12; i++){
                fin += dias_meses3[i];
            }       
            printf("\nEl dia %d del mes %s es cuando hay %d dias restantes",  dia_mes2, meses3[mes3 - 1], fin + (dias_meses3[mes3 - 1]) - dia_mes2);   
            break;
        case 6:
            printf("\nInserta 10 numeros\n");
            int numeros3[10];
            for(int i = 0; i < 10; i++){
                printf("Numero N%d: ", i + 1);
                scanf("%d", &numeros3[i]);
            }
            printf("\n[ ");
            for(int i = 9; i >= 0; i--){
                printf("%d ", numeros3[i]);
            }
            printf("]");
            break;
        case 7:
            printf("\nIngresa 10 numeros\n");
            float numeros4[10];
            promedio = 0;
            for(int i = 0; i < 10; i++){
                printf("Numero N%d: ", i + 1);
                scanf("%f", &numeros4[i]);
                promedio += numeros4[i];
            }
            printf("\nLa media es %.2f", promedio/10);
            printf("\n[ ");
            for(int i = 0; i < 10; i++){
                if(numeros4[i] > promedio/10){
                    printf("%.0f ", numeros4[i]);
                }
            }
            printf("]");
            break;
        case 8:
            printf("\nIngresa 10 numeros\n");
            int mayor;
            for(int i = 0; i < 10; i++){
                printf("Numero N%d: ", i + 1);
                scanf("%f", &numeros4[i]);
                promedio += numeros4[i];
                mayor = numeros4[i];
            } 
            printf("\n[ ");
            for(int i = 0; i < 10; i++){
                if(numeros4[i] > mayor){
                    mayor = numeros4[i];
                }
                printf("%.0f ", numeros4[i]);
            }
            printf("]\n");
            printf("El mayor es %d", mayor);
            break;
        case 9:
            printf("\nCalculemos la diferencia de dos vectores\n");
            int vectorA[2];
            int vectorB[2];
            int D[2];
            printf("Inserta las coordenadas del primer vector: ");
            scanf("%d %d", &vectorA[0], &vectorA[1]);
            printf("Inserta las coordenadas del segundo vector: ");
            scanf("%d %d", &vectorB[0], &vectorB[1]);
            D[0] = vectorA[0] - vectorB[0];
            D[1] = vectorA[1] - vectorB[1];
            printf("A = (%d, %d)\nB = (%d, %d)\n", vectorA[0], vectorA[1], vectorB[0], vectorB[1]);
            printf("La diferencia es: D = (%d, %d)", D[0], D[1]);
            break;
        case 10:
            printf("\nCalculemos el producto escalar de dos vectores\n");
            int vectorX[3];
            int vectorY[3];
            int product_esc;
            printf("Inserta las coordenas del vector X: ");
            scanf("%d %d %d", &vectorX[0], &vectorX[1], &vectorX[2]);
            printf("Inserta las coordenas del vector Y: ");
            scanf("%d %d %d", &vectorY[0], &vectorY[1], &vectorY[2]);
            product_esc = vectorX[0]*vectorY[0] + vectorX[1]*vectorY[1] + vectorX[2]*vectorY[2];
            printf("X = (%d, %d, %d)\nY = (%d, %d, %d)\n", vectorX[0], vectorX[1], vectorX[2], vectorY[0], vectorY[1], vectorY[2]);
            printf("El producto escalar es: %d", product_esc);
            break;
        case 11:
            printf("\nCalculemos el producto vectorial de dos vectores\n");
            int vectorM[3];
            int vectorN[3];
            int product_vec[3];
            printf("Inserta las coordenas del vector M: ");
            scanf("%d %d %d", &vectorM[0], &vectorM[1], &vectorM[2]);
            printf("Inserta las coordenas del vector N: ");
            scanf("%d %d %d", &vectorN[0], &vectorN[1], &vectorN[2]);
            product_vec[0] = vectorM[1]*vectorN[2] - vectorM[2]*vectorN[1];
            product_vec[1] = vectorM[2]*vectorN[0] - vectorM[0]*vectorN[2];
            product_vec[2] = vectorM[0]*vectorN[1] - vectorM[1]*vectorN[0];
            printf("X = (%d, %d, %d)\nY = (%d, %d, %d)\n", vectorM[0], vectorM[1], vectorM[2], vectorN[0], vectorN[1], vectorN[2]);
            printf("El producto vectorial es: (%d, %d, %d)", product_vec[0], product_vec[1], product_vec[2]);
            break;
        case 12:
            printf("\nVerifiquemos si dos vectores son linealmente dependientes\n");
            int vectorV[2];
            int vectorW[2];
            int dependientes;
            printf("Inserta las coordenadas del vector V: ");
            scanf("%d %d", &vectorV[0], &vectorV[1]);
            printf("Inserta las coordenadas del vector W: ");
            scanf("%d %d", &vectorW[0], &vectorW[1]);
            dependientes = vectorV[0]*vectorW[1] - vectorV[1]*vectorW[0];
            printf("V = (%d, %d)\nW = (%d, %d)\n", vectorV[0], vectorV[1], vectorW[0], vectorW[1]);
            if(dependientes == 0){
                printf("Los vectores son linealmente dependientes");
            }
            else{
                printf("Los vectores no son linealmente dependientes");
            }
            break;
        case 13:
            printf("\nUna matriz traspuesta\n");
            int matriz[2][2];
            int traspuesta[2][2];
            for(int i = 0; i < 2; i++){
                for(int j = 0; j < 2; j++){
                    printf("Inserta el valor de la posicion [%d][%d]: ", i, j);
                    scanf("%d", &matriz[i][j]);
                    traspuesta[j][i] = matriz[i][j];
                }
            }    
            printf("\nMatriz normal:\n");
            for(int i = 0; i < 2; i++){
                printf("[ ");
                for(int j = 0; j < 2; j++){
                    printf("%d ", matriz[i][j]);
                }
                printf("]\n");
            }
            printf("\nMatriz traspuesta:\n");
            for(int i = 0; i < 2; i++){
                printf("[ ");
                for(int j = 0; j < 2; j++){
                    printf("%d ", traspuesta[i][j]);
                }
                printf("]\n");
            }
            break;
        case 14:
            printf("\nEl determinante de una matriz 3x3\n");
            int matriz3x3[3][3];
            for(int x = 0; x < 3; x++){
                for(int y = 0; y < 3; y++){
                    printf("Inserta el valor de posicion [%d][%d]: ", x, y);
                    scanf("%d", &matriz3x3[x][y]);
                }
            }
            printf("\n");
            for(int x = 0; x < 3; x++){
                printf("[ ");
                for(int y = 0; y < 3; y++){
                    printf("%d ", matriz3x3[x][y]);
                }
                printf("]\n");
            }
            float determinante = matriz3x3[0][0]*((matriz3x3[1][1]*matriz3x3[2][2]) - (matriz3x3[1][2]*matriz3x3[2][1])) - matriz3x3[0][1]*((matriz3x3[1][0]*matriz3x3[2][2]) - (matriz3x3[1][2]*matriz3x3[2][0])) + matriz3x3[0][2]*((matriz3x3[1][0]*matriz3x3[2][1]) - (matriz3x3[1][1]*matriz3x3[2][0]));
            printf("\nEl determinante de la matriz es: %.0f", determinante);
            break;
        case 15:
            printf("\nLa matriz adjunta de una matriz 3x3:\n");
            for(int x = 0; x < 3; x++){
                for(int y = 0; y < 3; y++){
                    printf("Inserta el valor de posicion [%d][%d]: ", x, y);
                    scanf("%d", &matriz3x3[x][y]);
                }
            }
            printf("\n");
            for(int x = 0; x < 3; x++){
                printf("[ ");
                for(int y = 0; y < 3; y++){
                    printf("%d ", matriz3x3[x][y]);
                }
                printf("]\n");
            }
            printf("\n");
            float matriz_adjunta[3][3];
            float submatriz[2][2];
            int subi;
            int subj;
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    subi = 0;
                    for(int x = 0; x < 3; x++){
                        if(i == x){
                            continue;
                        }
                        subj = 0;
                        for(int y = 0; y < 3; y++){
                            if(j == y){
                                continue;
                            }
                            submatriz[subi][subj] = matriz3x3[x][y];
                            subj++;
                        }
                        subi++;
                    }         
                    matriz_adjunta[i][j] = (submatriz[0][0] * submatriz[1][1]) - (submatriz[0][1] * submatriz[1][0]);
                    if((i+j+2) % 2 != 0){
                        matriz_adjunta[i][j] *= -1;
                    }
                    for(int m = 0; m < 2; m++){
                        printf("[ ");
                        for(int n = 0; n < 2; n++){
                            printf("%.0f ", submatriz[m][n]);
                        }
                        printf("]\n");
                    }
                    printf("\n");
                }
            }
            printf("\nLa matriz adjunta es:\n");
            for(int x = 0; x < 3; x++){
                printf("[ ");
                for(int y = 0; y < 3; y++){
                    printf("%.0f ", matriz_adjunta[x][y]);
                }
                printf("]\n");
            }

    }
}