import java.util.Scanner;

// javac -target 8 -source 8 file.java / javac --release 8 introduction.java

public class Primeros_Ejercicios {

    static boolean primo(int numero) {
		for(int i = numero-1; i != 1; i--) {
			if(numero % i == 0) {
				return false;
			}
		}
		return true;
	}

    static boolean repeticion() {
        Scanner input = new Scanner(System.in);
        while(true){
            System.out.print("\nDeseas corregir otro ejercicio? Y o N: ");
            String answer = input.nextLine().trim(); // trim() elimina los espacios al comienzo y al finañ
            if(answer.equalsIgnoreCase("Y")){ // Compara con la letra en mayuscula y minuscula
                return true;
            }
            else if(answer.equalsIgnoreCase("N")){
                return false;
            }      
        }
    }

    static void calculadora() {
        Scanner input = new Scanner(System.in);
        System.out.print("Que deseas hacer:\n1- Suma\n2- Resta\n3- Multiplicacion\n4- Division\n> ");
        int opcion = input.nextInt();
        int numero_1;
        int numero_2;
        while(true){
            switch(opcion){
                case 1:
                    System.out.print("Ingresa dos numeros para sumar: ");
                    numero_1 = input.nextInt();
                    numero_2 = input.nextInt();
                    System.out.println("\n" + numero_1 + " + " + numero_2 + " = " + (numero_1 + numero_2));
                    break;
                case 2:
                    System.out.print("Ingresa dos numeros para restar: ");
                    numero_1 = input.nextInt();
                    numero_2 = input.nextInt();
                    System.out.println("\n" + numero_1 + " - " + numero_2 + " = " + (numero_1 - numero_2));
                    break;
                case 3:
                    System.out.print("Ingresa dos numeros para multiplicar: ");
                    numero_1 = input.nextInt();
                    numero_2 = input.nextInt();
                    System.out.println("\n" + numero_1 + " * " + numero_2 + " = " + (numero_1 * numero_2));
                    break;
                case 4:
                    System.out.print("Ingresa dos numeros para dividir: ");
                    numero_1 = input.nextInt();
                    numero_2 = input.nextInt();
                    System.out.println("\n" + numero_1 + " / " + numero_2 + " = " + (numero_1 / numero_2));
                    break;
                default:
                    System.out.println("Opcion no permitida. Ingresa un numero del 1 al 4");
            }
        }
        
    }

	public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        while(true){
            System.out.print("\nQue ejercicio deseas corregir?: ");
		    int ejercicio = input.nextInt();
            System.out.println("");
            switch(ejercicio){
                case 1:
                    for(int i = 1; i <= 100; i++) {
		            	if(i % 2 == 0) {
		            		System.out.println(i + ": Par");
		            	}
		            	else {
		            		System.out.println(i);
		            	}
		            }
                    break;
                case 2:
                    for(int i = 50; i <= 100; i++) {
                    
		    	        if(primo(i) == true) {
		    	        	System.out.println(i + " es primo");
		    	        }
		    	        else {
		    	        	System.out.println(i + " no es primo");
		    	        }
    
		            }
                    break;
                case 3:
                    while(true) {
                        System.out.print("Ingresa un numero: ");
                        int numero = input.nextInt();
                        if((primo(numero) == true) && numero > 100){
                            System.out.println("Has ingresado un numero primo mayor a 100\nEs el fin");
                            break;
                        }
                        System.out.println("");
                    }
                    break;
                case 4:
                    calculadora();
                    break;
                case 5:
                    String[] comida = {"Arroz", "Manzanas", "Papas", "Huevos", "Harina"};
                    String[] muebles = {"Almohadas", "Sillas", "Silloncito", "Cuadro", "Mesa"};
                    String[] ropa = {"Camperas", "Medias", "Zapatos", "Shorts", "Remeras"};
                    System.out.println("Que lista de compras pendientes deseas ver?");
                    System.out.print("1- Comida\n2- Muebles\n3- Ropa\n> ");
                    String[] lista = new String[5];
                    int num_lista = input.nextInt();
                    System.out.println("");
                    if(num_lista == 1){ 
                        lista = comida; 
                    }
                    else if(num_lista == 2){ 
                        lista = muebles; 
                    }
                    else if(num_lista == 3){ 
                        lista = ropa; 
                    }
                    int num = 1;
                    System.out.println("Lista seleccionada:");
                    for(String a: lista){ // Bucle for-each
                        System.out.println(num + "- " + a); // Imprime el numero de arma y su nombre
                        num++; // Se aumenta el numero al pasar a la siguiente arma
                    }
                    break; // Salir del switch una vez terminado
                default:
                    System.out.println("Ingresaste un numero de ejercicio fuera de rango\nLas opciones son de 1 a 5\nIntentelo de nuevo");
                    continue;
            }

            boolean repeat = repeticion();

            if(repeat == true){ // Comprobamos si hay que corregir otro ejercicio
                continue; 
            }
            else{ 
                break; 
            }
        }
        
	}

}