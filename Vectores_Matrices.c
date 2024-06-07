#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void llenar_matriz_simple(int columnas, float matriz[columnas]){
    for(int i = 0; i < columnas; i++){
        printf("Numero N%d: ", i + 1);
        scanf("%f", &matriz[i]);
    }
}

void imprimir_matriz_simple(int columnas, float matriz[columnas]){
    printf("[ ");
    for(int i = 0; i < columnas; i++){
        printf("%.0f ", matriz[i]);
    }
    printf("]\n");
}

void llenar_matriz(int filas, int columnas, float matriz[filas][columnas]){
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            printf("Inserta el valor de la posicion [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    } 
}

void imprimir_matriz(int filas, int columnas, float matriz[filas][columnas]){
    for(int x = 0; x < filas; x++){
        printf("[ ");
        for(int y = 0; y < columnas; y++){
            printf("%.0f ", matriz[x][y]);
        }
        printf("]\n");
    }
}

void orden_inverso(int columnas, float matriz[columnas]){
    printf("[ ");
    for(int i = columnas; i > 0; i--){
        printf("%.0f ", matriz[i-1]);
    }
    printf("]\n");
}

int main(int argc, char *argv[]){
    int ejercicio;
    int dias_meses[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char *meses[12] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    int dia_mes;
    float numeros[10];
    int vectorX[2];
    int vectorY[2];
    float matriz3x3[3][3];
    printf("Que ejercicio deseas corregir?\n> ");
    scanf("%d", &ejercicio);
    switch(ejercicio){
        case 1:
            printf("\nInserta 4 numeros\n");
            float numeros[4];
            float promedio = 0;
            llenar_matriz_simple(4, numeros);
            printf("\n");
            imprimir_matriz_simple(4, numeros);
            for(int i = 0; i < 4; i++) promedio += numeros[i];
            printf("Media aritmetica = %.2f", promedio/4);
            break;
        case 2:
            printf("\nInserta 5 numeros\n");
            float numeros2[5];
            llenar_matriz_simple(5, numeros2);
            printf("\nOrden original:\n");
            imprimir_matriz_simple(5, numeros2);
            printf("\nOrden invertido:\n");
            orden_inverso(5, numeros2);
            break;
        case 3:
            printf("\nInserta un numero de mes\n> ");
            int mes;
            scanf("%d", &mes);
            printf("\nEl mes de %s tiene %d dias", meses[mes - 1], dias_meses[mes - 1]);
            break;
        case 4:
            printf("\nInserta un numero de mes\n> ");
            scanf("%d", &mes);
            printf("Inserta un numero de dia de mes\n> ");
            scanf("%d", &dia_mes);
            int numero_dia = 0;
            for(int i = 0; i < mes; i++){
                numero_dia += dias_meses[i];
            }
            printf("\nEl dia %d del mes %s es el dia %d",  dia_mes, meses[mes - 1], numero_dia - (dias_meses[mes - 1] - dia_mes));
            break;
        case 5:
            printf("\nInserta un numero de mes\n> ");
            scanf("%d", &mes);
            printf("Inserta un numero de dia de mes\n> ");
            scanf("%d", &dia_mes);  
            int fin = 0;
            for(int i = mes; i < 12; i++){
                fin += dias_meses[i];
            }       
            printf("\nEl dia %d del mes %s es cuando hay %d dias restantes",  dia_mes, meses[mes - 1], fin + (dias_meses[mes - 1]) - dia_mes);   
            break;
        case 6:
            printf("\nInserta 10 numeros\n");
            llenar_matriz_simple(10, numeros);
            printf("\nOrden original:\n");
            imprimir_matriz_simple(10, numeros);
            printf("\nOrden invertido:\n");
            orden_inverso(10, numeros);
            break;
        case 7:
            printf("\nIngresa 10 numeros\n");
            promedio = 0;
            llenar_matriz_simple(10, numeros);
            for(int i = 0; i < 10; i++){
                promedio += numeros[i];
            }
            printf("\nLa media es %.2f", promedio/10);
            printf("\nLos valores por encima de la media son: [ ");
            for(int i = 0; i < 10; i++){
                if(numeros[i] > promedio/10){
                    printf("%.0f ", numeros[i]);
                }
            }
            printf("]");
            break;
        case 8:
            printf("\nIngresa 10 numeros\n");
            float mayor;
            llenar_matriz_simple(10, numeros);
            for(int i = 0; i < 10; i++){
                promedio += numeros[i];
                mayor = numeros[i];
            } 
            printf("\n[ ");
            for(int i = 0; i < 10; i++){
                if(numeros[i] > mayor){
                    mayor = numeros[i];
                }
                printf("%.0f ", numeros[i]);
            }
            printf("]\n");
            printf("El mayor es %.0f", mayor);
            break;
        case 9:
            printf("\nCalculemos la diferencia de dos vectores\n");
            int D[2];
            printf("Inserta las coordenadas del primer vector: ");
            scanf("%d %d", &vectorX[0], &vectorX[1]);
            printf("Inserta las coordenadas del segundo vector: ");
            scanf("%d %d", &vectorY[0], &vectorY[1]);
            D[0] = vectorX[0] - vectorY[0];
            D[1] = vectorX[1] - vectorY[1];
            printf("A = (%d, %d)\nB = (%d, %d)\n", vectorX[0], vectorX[1], vectorY[0], vectorY[1]);
            printf("La diferencia es: D = (%d, %d)", D[0], D[1]);
            break;
        case 10:
            printf("\nCalculemos el producto escalar de dos vectores\n");
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
            int product_vec[3];
            printf("Inserta las coordenas del vector M: ");
            scanf("%d %d %d", &vectorX[0], &vectorX[1], &vectorX[2]);
            printf("Inserta las coordenas del vector N: ");
            scanf("%d %d %d", &vectorY[0], &vectorY[1], &vectorY[2]);
            product_vec[0] = vectorX[1]*vectorY[2] - vectorX[2]*vectorY[1];
            product_vec[1] = vectorX[2]*vectorY[0] - vectorX[0]*vectorY[2];
            product_vec[2] = vectorX[0]*vectorY[1] - vectorX[1]*vectorY[0];
            printf("X = (%d, %d, %d)\nY = (%d, %d, %d)\n", vectorX[0], vectorX[1], vectorX[2], vectorY[0], vectorY[1], vectorY[2]);
            printf("El producto vectorial es: (%d, %d, %d)", product_vec[0], product_vec[1], product_vec[2]);
            break;
        case 12:
            printf("\nVerifiquemos si dos vectores son linealmente dependientes\n");
            int vectorM[2];
            int vectorN[2];
            int dependientes;
            printf("Inserta las coordenadas del vector V: ");
            scanf("%d %d", &vectorM[0], &vectorM[1]);
            printf("Inserta las coordenadas del vector W: ");
            scanf("%d %d", &vectorN[0], &vectorN[1]);
            dependientes = vectorM[0]*vectorN[1] - vectorM[1]*vectorN[0];
            printf("V = (%d, %d)\nW = (%d, %d)\n", vectorM[0], vectorM[1], vectorN[0], vectorN[1]);
            if(dependientes == 0){
                printf("Los vectores son linealmente dependientes");
            }
            else{
                printf("Los vectores no son linealmente dependientes");
            }
            break;
        case 13:
            printf("\nUna matriz traspuesta\n");
            float matriz[2][2];
            float traspuesta[2][2];
            llenar_matriz(2, 2, matriz);
            for(int i = 0; i < 2; i++){
                for(int j = 0; j < 2; j++){
                    traspuesta[j][i] = matriz[i][j];
                }
            }    
            printf("\nMatriz normal:\n");
            imprimir_matriz(2, 2, matriz);
            printf("\nMatriz traspuesta:\n");
            imprimir_matriz(2, 2, traspuesta);
            break;
        case 14:
            printf("\nEl determinante de una matriz 3x3\n");
            llenar_matriz(3, 3, matriz3x3);
            printf("\n");
            imprimir_matriz(3, 3, matriz3x3);
            float determinante = matriz3x3[0][0]*((matriz3x3[1][1]*matriz3x3[2][2]) - (matriz3x3[1][2]*matriz3x3[2][1])) - matriz3x3[0][1]*((matriz3x3[1][0]*matriz3x3[2][2]) - (matriz3x3[1][2]*matriz3x3[2][0])) + matriz3x3[0][2]*((matriz3x3[1][0]*matriz3x3[2][1]) - (matriz3x3[1][1]*matriz3x3[2][0]));
            printf("\n\nEl determinante de la matriz es: %.2f", determinante);
            break;
        case 15:
            printf("\nLa matriz adjunta de una matriz 3x3:\n");
            llenar_matriz(3, 3, matriz3x3);
            printf("\n");
            imprimir_matriz(3, 3, matriz3x3);
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
                }
            }
            printf("La matriz adjunta es:\n");
            imprimir_matriz(3, 3, matriz_adjunta);

    }
}