import java.util.Scanner;

public class Demo{
    
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);

        System.out.print("Que ejercicio deseas corregir: ");
        int ejercicio = in.nextInt();
        switch(ejercicio){
            case 1:
                int numero_1 = 12;
                int numero_2 = 3;
                System.out.println("Suma: " + (numero_1 + numero_2));
                System.out.println("Resta: " + (numero_1 - numero_2));
                System.out.println("Multiplicacion: " + (numero_1 * numero_2));
                System.out.println("Division: " + (numero_1 / numero_2));
                System.out.println("Modulo: " + (numero_1 % numero_2));
                break;
                
            case 2:
                numero_1 = 15;
                numero_2 = 20;
                if(numero_1 > numero_2){
                    System.out.println("El " + numero_1 + " es mayor que el " + numero_2);
                }
                else if(numero_1 < numero_2){
                    System.out.println("El " + numero_2 + " es mayor que el " + numero_1);
                }
                else if(numero_1 == numero_2){
                    System.out.println("Ambos numeros son iguales");
                }
                break;
                
            case 3:
                String nombre = "Matias";
                System.out.println("Bienvenido, " + nombre);
                break;
                
            case 4:
                System.out.print("Ingrese su nombre: ");
                nombre = in.next();
                System.out.println("Bienvenido, " + nombre);
                break;
                
            case 5:
                double PI = Math.PI;
                System.out.print("Introduce un radio: ");
                double radio = in.nextDouble();
                double area = PI * Math.pow(radio, 2);
                System.out.println("El area del circulo es igual a " + area);
                break;
                
            case 6:
                System.out.print("Ingresa un numero cualquiera: ");
                int divisible_2 = in.nextInt();
                if(divisible_2 % 2 == 0){
                    System.out.println("El " + divisible_2 + " es divisible entre 2");
                }
                else if(divisible_2 % 2 != 0){
                    System.out.println("El " + divisible_2 + " no es divisible entre 2");
                }
                break;
                
            case 7:
            	System.out.print("Inserta un numero: ");
            	int codigo_ASCII = in.nextInt();
            	char caracter = (char) codigo_ASCII;
            	System.out.println("El numero " + codigo_ASCII + " representa el caracter " + caracter);
            	break;
            	
            case 8:
                System.out.print("Ingresa un caracter: ");
                caracter = in.next().charAt(0);
                codigo_ASCII = (int) caracter;
                System.out.println("El codigo ASCII de " + caracter + " es " + codigo_ASCII);
                break;
                
            case 9:
            	System.out.print("Ingresa el precio del producto: ");
            	double precio = in.nextDouble();
            	double IVA = 0.21;
            	precio = precio + (precio * IVA);
            	System.out.println("El precio con la IVA es igual a " + precio);
            	break;
            	
            case 10:
            	int contador = 1;
            	while(contador <= 100) {
            		System.out.print(contador + "\t");
            		if(contador % 10 == 0) {
            			System.out.print("\n");
            		}
            		contador++;
            	}
            	break;
            	
            case 11:
            	for(int i = 1; i <= 100; i++) {
            		System.out.print(i + "\t");
            		if(i % 10 == 0) {
            			System.out.print("\n");
            		}
            	}
            	break;
            	
            case 12:
            	for(int i = 1; i <= 100; i++) {
            		if(i % 2 == 0 && i % 3 == 0) {
            			System.out.print(i + "\t");
            		}
            		if(i % 24 == 0) {
            			System.out.print("\n");
            		}
            	}
            	break;
            	
            case 13:
            	System.out.print("Ingresa el numero de ventas: ");
            	int numero_ventas = in.nextInt();
            	double precio_venta;
            	double suma_ventas = 0;
            	contador = 0;
            	while(contador < numero_ventas) {
            		System.out.print("Introduce el precio de la venta " + (contador+1) + " : ");
            		precio_venta = in.nextDouble();
            		suma_ventas += precio_venta; 
            		contador++;
            	}
            	System.out.println("\nEl precio total de todas las ventas es igua a $" + suma_ventas);
            	break;
            	
            case 14:
            	System.out.print("Introduce el valor de a: ");
                int a= in.nextInt();
                System.out.print("Introduce el valor de b: ");
                int b= in.nextInt();
                System.out.print("Introduce el valor de c: ");
                int c= in.nextInt();
         
                double discriminante = Math.pow(b, 2) - (4 * a * c);
                System.out.println("El discrimante es igual a " + discriminante);
         
                if (discriminante > 0){
                    double x = ((b * (-1)) + Math.sqrt(discriminante)) / (2 * a);
                    double y = ((b * (-1)) - Math.sqrt(discriminante)) / (2 * a);
         
                    System.out.println("El valor de x es "+ x +" y el valor de y es "+ y);
                }
                else{
                    System.out.println("El discriminante es negativo");
                }
                break;
              
            case 15:
            	int numero;
            	do {
            		System.out.print("Ingresa un numero: ");
                	numero = in.nextInt();
            	} while(numero < 0);
            	System.out.println("Has ingresado un numero valido, el " + numero);
            	break;
            
            case 16:
            	boolean contraseña_correcta = false;
            	String contraseña = "cataratasdaigual";
            	String contraseña_input;
            	int intentos = 3;
            	do {
            		System.out.print("Cual es la contraseña: ");
            		contraseña_input = in.next();
            		if(contraseña_input.equals(contraseña)) { // Comparacion de Strings en Java
            			System.out.println("\nEnhorabuena");
            			contraseña_correcta = true;
            			break;
            		}
            		intentos--;
            	} while(intentos != 0);
            	if(!contraseña_correcta) {
            		System.out.println("\nHas desperdiciado los 3 intentos");
            	}
            	break;
            	
            case 17:
            	System.out.print("Introduce un dia de la semana: ");
            	String dia_semana = in.next();
            	dia_semana = dia_semana.substring(0,1).toUpperCase()  + dia_semana.substring(1);
            	switch(dia_semana){
            		case "Lunes":
            		case "Martes":
            		case "Miercoles":
            		case "ueves":
            		case "Viernes":
            			System.out.println("Es un dia laboral");
            			break;
            		case "Sabado":
            		case "Domingo":
            			System.out.println("Es un dia festivo");
            			break;
            		default:
            			System.out.println("No es un dia de la semana");
            	}
            	break;
            	
            case 18:
            	System.out.print("Introduce un numero: ");
            	numero_1 = in.nextInt();
            	System.out.print("Introduce un numero: ");
            	numero_2 = in.nextInt();
            	if(numero_2 < numero_1) { // Aseguramos que el numero 1 siempre sea el menor
            		int cambio = numero_1;
            		numero_1 = numero_2;
            		numero_2 = cambio;
            	}
            	
            	for(int i = 0; i < 10; i++) {
            		if(i % 5 == 0) {
            			System.out.print("\n");
            		}
            		System.out.print((int) Math.floor(numero_1 + Math.random() * (numero_2 - numero_1 + 1)) + "\t"); // El +1 hace falta porque sino el numero_2 se excluye
            	}
            	break;
            	
            case 19:
            	System.out.print("Ingresa un numero: ");
            	numero = in.nextInt();
            	int numero_copia = numero;
            	int cantidad_cifras = 1;
            	while(true) {
            		if(numero/10 != 0) {
            			numero = numero / 10;
            		}
            		else {
            			break;
            		}
            		cantidad_cifras++;
            	}
            	System.out.println("El numero " + numero_copia + " tiene " + cantidad_cifras + " cifras");
            	break;
            	
            case 20:
            	System.out.print("Ingresa un numero: ");
            	numero = in.nextInt();
            	boolean es_primo = true;
            	
            	for(int i = 2; i < numero; i++) {
            		if(numero % i == 0) {
            			es_primo = false;
            		}
            	}
            	
            	if(!es_primo) {
            		System.out.println(numero + " no es un numero primo");
            	}
            	else {
            		System.out.println(numero + " es un numero primo");
            	}

        }
        
    }

}
