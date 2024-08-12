#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int ejercicio;
	printf("Que ejercicio deseas corregir? ");
	scanf("%d", &ejercicio);
	switch(ejercicio){
		case 1:
			printf("Un año es bisiesto o no?\n"); // Descripcion del ejercicio
			int bisiesto; // Declaro variable bisiesto
			printf("Ingresa un año: "); // Linea para ingresar el año
			scanf("%d", &bisiesto); // El usuario ingresa el valor de bisiesto
			printf("\n"); // Linea de espacio
			if(bisiesto % 100 != 0 && bisiesto % 4 == 0 || bisiesto % 100 == 0 && bisiesto % 400 == 0){ // Verifico si el año es bisiesto o no
				printf("%d es bisiesto\n", bisiesto); // Mensaje a imprimir si lo es 
			}
			else{ // Alternativa si no es bisiesto
				printf("%d no es bisiesto\n", bisiesto); // Mensaje a imprimir si no lo es
			}
			break;
		case 2:
			printf("\nUn numero es positivo y entero\n"); // Descripcion del ejercicio
			int numero; // Declaro la variable numero
			printf("Ingresa un numero entero y positivo: "); // Linea para ingresar el numero
			scanf("%d", &numero); // El usuario ingresa el valor de numero
			printf("\n"); // Liea de espacio
			if(numero > 0){ // Si el numero debe ser entero, asi que ahora verificamos si es positivo
				for(int i = 1; i <= 10; i++){
					printf("%d x %d = %d\n", i, numero, i*numero); // Imprimo la tabla del numero
				}
			}
			else{ // Si el numero no cumple con los requisitos
				printf("Lo siento. El numero no cumple con los requisitos\n"); // Mensaje de error
			}
			break;
		case 3:
			printf("\nDeseas comprar entradas para un espectaculo?\n"); // Descripcion del ejercicio
			printf("Solo se pueden comprar hasta 4 entradas y cada una cuesta $1500\n"); // Caracteristica del ejercicio
			int entradas; // Declaro variable entradas
			printf("Cuantas entradas deseas comprar? "); // Linea para ingresar el numero de entradas
			scanf("%d", &entradas); // El usuario ingresa la cantidad de entradas que compra
			printf("\n"); // Linea de espacio
			if(entradas > 4){ // Si sobrepasa el limite de entrdas
				printf("Error. Solo puedes comprar hasta 4 entradas\n"); // Mensaje de error
			}
			else if(entradas == 1){ // Si se compra 1 entrada
				printf("No obtendras ningun descuento\n"); // No hay descuento al comprar una sola
				printf("El precio sera de $%d\n", entradas*1500); // Imprime el precio de las entradas
			}
			else if(entradas == 2){ // Si se compran 2 entradas
				printf("Obtendras un descuento del 10%%\n"); // Descuento al comprar 2 entradas
				printf("El precio sera de $%.0f\n", entradas*1500 * 0.90); // Imprime el precio de las entradas
			}
			else if(entradas == 3){ // Si se compran 3 entradas
				printf("Obtendras un descuento del 15%%\n"); // Descuento al comprar 3 entradas
				printf("El precio sera de $%.0f\n", entradas*1500 * 0.85); // Imprime el precio de las entradas
			}
			else if(entradas == 4){ // Si se compran 4 entradas
				printf("Obtendras un descuento del 20%%\n"); // Descuento al comprar 4 entradas
				printf("El precio sera de $%.0f\n", entradas*1500 * 0.80); // Imprime el precio de las entradas
			}
			break;
		case 4:
			printf("\nEmpresa dedicada al catering\n"); // Descripcion del ejercicio
			int personas; // Declaro variable personas
			int persona_plato; // Declaro variable del precio de cada plato por persona
			printf("A cuantas personas hay que entregar platos? "); // Linea para ingresar el numero de personas
			scanf("%d", &personas); // El usuario ingresa cuantas personas son
			printf("\n"); // Linea de espacio
			if(personas > 300){ // Si son mas de 300 personas
				persona_plato = 4500; // Declaro el precio para mas de 300 personas
				printf("El costo de cada plato por persona es de $%d\n", persona_plato); // Imprimo el precio para mas de 300 personas
			}
			else if(personas > 200 && personas < 300){ // Si hay entre 200 y 300 personas
				persona_plato = 5500; // Declaro el precio entre 200 y 300 personas
				printf("El costo de cada plato por persona es de $%d\n", persona_plato); // Imprimo el precio entre 200 y 300 personas
			} 
			else{ // Si son menos de 200 personas
				persona_plato = 6500; // Declaro el precio para menos de 200 personas
				printf("El costo de cada plato por persona es de %d\n", persona_plato); // Imprimo el precio para menos de 200 personas
			}
			printf("Un plato para cada persona equivale a %d\n", personas*persona_plato); // Imprimo el precio de un plato para cada persona
			break;
		case 5:
			printf("\nAsociacion de vincultores vendiendo uvas\n"); // Descripcion del ejercicio
			printf("Estas son las opciones de venta:\n1-Tipo A y tamaño 1\n2-Tipo A y tamaño 2\n3-Tipo B y tamaño 1\n4-Tipo B y tamaño 2\n"); // Caracteristicas del ejercicio
			int opcion; // Declaro la variable de la opcion de venta
			int precio_kilo; // Declaro la variable del precio de la uva por kilo
			printf("¿Que opcion de venta quieres?(numero): "); // Linea para ingresar la opcion de venta
			scanf("%d", &opcion); // El usuario ingresa la opcion de venta
			printf("\n"); // Linea de espacio
			if(opcion == 1){ // Si tipo es A y tamaño es 1
				precio_kilo = 200; // Declaro el precio si tipo es A y tamaño es 1
				printf("El precio del kilo de uva para la venta sera de $%d\n", precio_kilo); // Imprimo el precio de la uva por kilo
			}
			else if(opcion == 2){ // Si tipo es A y tamaño es 2
				precio_kilo = 300; // Declaro el precio si tipo es A y tamaño es 2
				printf("El precio del kilo de uva para la venta sera de $%d\n", precio_kilo); // Imprimo el precio de la uva por kilo
			}
			else if(opcion == 3){ // Si tipo es B y tamaño es 1
				precio_kilo = 300; // Declaro el precio si tipo es B y tamaño es 1
				printf("El precio del kilo de uva para la venta sera de $%d\n", precio_kilo); // Imprimo el precio de la uva por kilo
			}
			else if(opcion == 4){ // Si tipo es B y tamaño es 2
				precio_kilo = 500; // Declaro el precio si tipo es B y tamaño es 2
				printf("El precio del kilo de uva para la venta sera de $%d\n", precio_kilo); // Imprimo el precio de la uva por kilo
			}
			else{
				printf("Error. Numero de orden no valido\n"); // Mensaje de error
			}
			int cantidad;
			printf("Cuantos kilos deseas ordenar? ");
			scanf("%d", &cantidad);
			printf("\nEl precio total sera de $%d\n", precio_kilo*cantidad);
			break;
	}
}