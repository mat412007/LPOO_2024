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
            
            case 8:

                System.out.print("Ingresa un caracter: ");
                char caracter = in.next().charAt(0);
                int codigo_ASCII = caracter;
                System.out.println("El codigo ASCII de " + caracter + " es " + codigo_ASCII);
                break;
            case 9:

        }
    }

}