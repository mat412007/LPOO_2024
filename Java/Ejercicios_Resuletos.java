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
            	

        }
        
    }

}
