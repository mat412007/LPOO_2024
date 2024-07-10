#include <stdio.h>
#include <stdbool.h>

void ingresar_numeros(int *numeros) {
    for(int i = 0; i < 5; i++) {
        printf("Ingresa el valor numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
}

void ordenar_numeros(int *numeros){
    for(int i = 0; i < 4; i++){
        int menor = numeros[i];
        int indice;
        for(int j = i; j < 5; j++){
            if(numeros[j] <= menor){
                menor = numeros[j];
                indice = j;
            }
        }
        numeros[indice] = numeros[i];
        numeros[i] = menor;
    }
}

void cargar_matriz(int filas, int columnas, int matriz[filas][columnas]){
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            printf("El valor de la posicion %d %d es: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void escribir_matriz(int filas, int columnas, int matriz[filas][columnas]){
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            printf("| %3d\t", matriz[i][j]);
        }
        printf("|\n");
    }
}

void sumar_matrices(int filas, int columnas, int matriz_A[filas][columnas], int matriz_B[filas][columnas], int suma[filas][columnas]){
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            suma[i][j] = matriz_A[i][j] + matriz_B[i][j];
        }
    }
}

void multiplicar_matrices(int filas, int columnas, int recorrer,int matriz_A[filas][recorrer], int matriz_B[recorrer][columnas], int multiplicacion[filas][columnas]){
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            for(int x = 0; x < recorrer; x++) {
                multiplicacion[i][j] += matriz_A[i][x] * matriz_B[x][j];
            }
        }
    }
}

int main(int argc, char *argv[]) {
    int ejercicio;
    printf("Que ejercicio deseas corregir?\n> ");
    scanf("%d", &ejercicio);
    switch(ejercicio) {
        case 1: {
            int a, b, c, d, e;
            int numeros[5];
            ingresar_numeros(numeros);
            ordenar_numeros(numeros);
            a = numeros[0];
            b = numeros[1];
            c = numeros[2];
            d = numeros[3];
            e = numeros[4];
            printf("\na = %d", a);
            printf("\nb = %d", b);
            printf("\nc = %d", c);
            printf("\nd = %d", d);
            printf("\ne = %d", e);
            break;
        }
        case 6: {
            int filas_A = 0;
            int columnas_A = 0;
            int filas_B = 0;
            int columnas_B = 0;
            int matriz_A[20][20];
            int matriz_B[20][20];
            bool dos_matrices = false;
            while(1){ 
                // int transpuesta[filas][columnas];
                int determinante;
                printf("\nMenu: \n");
                printf("1- Cargar matriz\n");
                printf("2- Escribir matriz\n");
                printf("3- Sumar matrices\n");
                printf("4- Multiplicar matrices\n");
                printf("5- Calcular determinante\n");
                printf("6- Matriz transpuesta\n");
                printf("7- Salir\n");
                int menu;
                printf("> ");
                scanf("%d", &menu);
                switch(menu){
                    case 1: {
                        printf("Deseas cargar una matriz o dos?\n> ");
                        int cantidad_matrices;
                        scanf("%d", &cantidad_matrices);
                        if(cantidad_matrices == 1 || cantidad_matrices == 2){
                            dos_matrices = false;
                            printf("Matriz A:\n");
                            printf("Filas: ");
                            scanf("%d", &filas_A);
                            printf("Columnas: ");
                            scanf("%d", &columnas_A);
                            printf("Matriz A:\n");
                            cargar_matriz(filas_A, columnas_A, matriz_A);
                        }
                        if(cantidad_matrices == 2){
                            dos_matrices = true;
                            printf("\nMatriz B:\n");
                            printf("Filas: ");
                            scanf("%d", &filas_B);
                            printf("Columnas: ");
                            scanf("%d", &columnas_B);
                            printf("Matriz B:\n");
                            cargar_matriz(filas_B, columnas_B, matriz_B);
                        }
                        if(cantidad_matrices != 1 && cantidad_matrices != 2){
                            printf("Error. Solo puede haber una o dos matrices\n");
                            continue;
                        }
                        break;
                    }
                    case 2: {
                        printf("Matriz A:\n");
                        escribir_matriz(filas_A, columnas_A, matriz_A);
                        if(dos_matrices){
                            printf("\nMatriz B:\n");
                            escribir_matriz(filas_B, columnas_B, matriz_B);
                        }
                        break;
                    }
                    case 3: {
                        if(dos_matrices == false){
                            printf("Error. Se necesitan dos matrices para una suma\n");
                            continue;
                        }
                        if(filas_A != filas_B || columnas_A != columnas_B){
                            printf("Error. Solo se pueden sumar matrices que sean del mismo tamaño\n");
                            continue;
                        }
                        int suma[filas_A][columnas_A];

                        sumar_matrices(filas_A, columnas_A, matriz_A, matriz_B, suma);

                        escribir_matriz(filas_A, columnas_A, suma);
                        break;
                    }
                    case 4: {
                        if(dos_matrices == false){
                            printf("Error. Se necesitan dos matrices para una multiplicacion\n");
                            continue;
                        }
                        if(columnas_A != filas_B){
                            printf("Error. El numero de columnas de la primera debe ser igual al de filas de la segunda\n");
                            continue;
                        }
                        int multiplicacion[20][20];
                        
                        multiplicar_matrices(filas_A, columnas_B, columnas_A, matriz_A, matriz_B, multiplicacion);

                        escribir_matriz(filas_A, columnas_B, multiplicacion);
                        break;
                    } 
                    default: {
                        printf("Opcion invalida\nIntentalo de nuevo\n");
                        continue;
                    } 
                }
            }
        }
    }
}


/* #include <stdio.h>
int main() {
    int x, *y; // Definimos un entero y un puntero
    x=10; // Valor del entero
    y=&x; // Direccion del puntero
    printf("%d %d %d",y,*y, &y); // El primero y tercero están mal, ya que estos imprimen direcciones de la memoria, el del medio imprime el valor guardado en la sección de memoria que el puntero apunta 
	return 0;
} */



/* #include <stdio.h>
void carga (int n, int Vector[]); // Declaracion de funciones del programa
void imprimir (int n, int Vector[]);
 
int main(){
    int n=5; // Inicio un entero con 5 de valor
    int V[n]; // Inicio una matriz de enteros de n elementos
    carga (n,V); // Ingresamos los numeros a la matriz V
    imprimir (n,V); // Imprimimos los elementos de la matriz V verticalmente
    printf("\n");
    for (int i=0; i<n; i++){ // Imprimimos los elementos de la matriz V horizontalmente
        printf("%5d",V[i]);
    }
    return 0;
}

void carga (int n, int Vector[]){ // Funcion para llenar la matriz
    int i;
    for (i=0; i<n; i++){
        printf("ingrese el valor de la posicion %d: ",i);
        scanf("%d",&Vector[i]);
     }
}
void imprimir (int n, int Vector[]){ // Funcion para imprimir la matriz
    for (int i=0; i<n; i++){
        printf("\n %5d",Vector[i]);
	}
    printf("\n");
} */



/* #include <stdio.h>
void carga (int n, int Vector[]); // Declaracion de funciones del programa
void imprimir (int n, int Vector[]);
void ordenar (int n, int Vector[]);

int main(){
    int n=5; // Inicio un entero con 5 de valor
    int V[n]; // Inicio una matriz de tamaño n
    carga (n,V); // Ingresamos los elementos de V
    imprimir (n,V); // Imprimimos los elementos de V en el mismo orden que fueron ingresados
    ordenar (n,V);
    imprimir (n,V); // Imprimimos la matriz V con su nuevo orden verticalmente
    printf("\n");
    for (int i=0; i<n; i++){ // Imprimimos la matriz V con su nuevo orden horizontalmente
        printf("%5d",V[i]);
	}
	return 0;
}

void carga (int n, int Vector[]){ // Funcion para insertar elementos en la matriz
    for (int i=0; i<n; i++){
        printf("ingrese el valor de la posicion %d: ",i);
        scanf("%d",&Vector[i]);
    }
}
void imprimir (int n, int Vector[]){ // Funcion para imprimir la matriz verticalmente
    for (int i=0; i<n; i++){
        printf("\n %5d",Vector[i]);
	}
    printf("\n");
}
void ordenar (int n, int Vector[]){ // Funcion de intercambio y orden de valores
    int aux;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (Vector[i]>Vector[j]){ // Intercambia ambos valores de posicion
                aux=Vector[i];
                Vector[i]=Vector[j];
                Vector[j]=aux;
            }
 	    }
    }
    printf("\n");
} */


/* 
#define N 10
#include <stdio.h>
void leer_matriz(int A[N][N], int filas, int columnas); // Declaraciones de funciones del programa
void escribir_matriz(int A[N][N], int filas, int columnas);
void multiplicar(int A[N][N], int B[N][N], int C[N][N], int m, int n, int p);

void leer_matriz(int A[N][N], int filas, int columnas) { // Funcion para insertar los elementos de la matriz
    int i, j;
    for (i=0; i<filas; i++)  {
        for (j=0; j<columnas; j++)  {
            printf("Ingresa la entrada [%d][%d]: ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }
}
void escribir_matriz(int A[N][N], int filas, int columnas){ // Funcion para imprimir las matrices
    int i, j;
    for (i=0; i< filas; i++)  {
        for (j=0; j<columnas; j++)   {
            printf("\t%d", A[i][j]);
        }
    printf("\n");
    }
}
void multiplicar (int A[N][N], int B[N][N], int C[N][N], int m, int n, int p) { // Funcion que multiplica 2 matrices cuando el largo o ancho de una es igual al largo o ancho de la otra
    int i, j, k;
    for(i=0; i< m; i++)
        for(k=0; k< p; k++)
            C[i][k]=0;
            for (i=0; i< m; i++)
                for (j=0; j< n; j++)
                    for (k=0; k< p; k++)
                        C[i][k] = C[i][k] + A[i][j]*B[j][k];
}
int main ()  {
    int m, n, p; // Declaro tres variables enteras
    int A[N][N], B[N][N], C[N][N]; // Declaro tres matrices del mismo tamaño
    printf("\n Datos de la Matriz A: \n"); 
    printf("Filas: ");                           	
    scanf("%d", &m);
    printf("Columnas: "); 	 // Lleno de valores las primeras dos matrices
    scanf("%d", &n);
    leer_matriz(A, m, n);
    printf("\n Datos de la Matriz B: \n");
    printf("Columnas: ");	            	
    scanf("%d", &p);
    leer_matriz(B, n, p);
    printf("\n Matriz A:\n");  
    escribir_matriz(A, m, n);
    printf("\n Matriz B: \n");  
    escribir_matriz(B, n, p);
    multiplicar(A, B, C, m, n, p); // Lleno la tercera matriz con los valores de la multiplicacion de las 2 primeras
    printf("\n Matriz AxB: \n");   
    escribir_matriz(C, m, p);
}
 */
