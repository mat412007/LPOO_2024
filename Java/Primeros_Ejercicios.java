import java.util.Scanner;

public class Primary_Class {

    static boolean primo(int numero) {
		for(int i = numero-1; i != 1; i--) {
			if(numero % i == 0) {
				return false;
			}
		}
		return true;
	}

	public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Que ejercicio deseas corregir?: ");
		int ejercicio = sc.nextInt();

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
            case 2:
                for(int i = 50; i <= 100; i++) {
			
			        if(primo(i) == true) {
			        	System.out.println(i + " es primo");
			        }
			        else {
			        	System.out.println(i + " no es primo");
			        }
			
		        }
            case 3:
                
        }
	}

}