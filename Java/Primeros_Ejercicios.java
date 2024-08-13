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

	public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Que ejercicio deseas corregir?: ");
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
                    System.out.println("Ingresa un numero");
                    int numero = input.nextInt();
                    if((primo(numero) == true) && numero > 100){
                        System.out.println("Has ingresado un numero primo mayor a 100\nEs el fin");
                        break;
                    }
                    System.out.println("");
                }
                break;
            case 4:
                System.out.println("5 + 5 = " + (5+5));
                System.out.println("10 - 2 = " + (10-2));
                System.out.println("10 * 10 = " + (10*10));
                System.out.println("25 / 5 = " + (25/5));
                break;
            case 5:
                String[] armas = {"Espada", "Escudo", "Lanza", "Arco", "Flecha", "Hacha"};
                int num_arma = 1;
                System.out.println("Armas de guerra antiguas:");
                for(String a: armas){
                    System.out.println(num_arma + "- " + a);
                    num_arma++;
                }
                break;
            default:
                System.out.println("Ingresaste un numero de ejercicio fuera de rango\nLas opciones son de 1 a 5\nIntentelo de nuevo\n");
        }
	}

}