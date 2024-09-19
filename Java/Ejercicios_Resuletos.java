import java.util.Scanner;

public class Demo{

	static boolean primo(int numero) {
		boolean es_primo = true;
		for(int i = 2; i < numero; i++) {
    		if(numero % i == 0) {
    			es_primo = false;
    		}
    	}
		return es_primo;
	}
	
    public static void main(String[] args) throws InterruptedException{ // Permite el uso de Thread.sleep(1000);
        Scanner in = new Scanner(System.in);
        in.useDelimiter("\n");
        
        int numero_1;
        int numero_2;
        String nombre;
        int codigo_ASCII;
        char caracter;
        int contador;
        int numero;
        boolean es_primo;
        String frase;

        System.out.print("Que ejercicio deseas corregir: ");
        int ejercicio = in.nextInt();
        switch(ejercicio){
            case 1:
                numero_1 = 12;
                numero_2 = 3;
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
                nombre = "Matias";
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
            	codigo_ASCII = in.nextInt();
            	caracter = (char) codigo_ASCII;
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
            	contador = 1;
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
            	do {
            		System.out.print("Ingresa un numero: ");
                	numero = in.nextInt();
            	} while(numero < 0);
            	System.out.println("Has ingresado un numero valido, el " + numero);
            	break;
            
            case 16:
            	boolean contrasena_correcta = false;
            	String contrasena = "cataratasdaigual";
            	String contrasena_input;
            	int intentos = 3;
            	do {
            		System.out.print("Cual es la contrasena: ");
            		contrasena_input = in.next();
            		if(contrasena_input.equals(contrasena)) { // Comparacion de Strings en Java
            			System.out.println("\nEnhorabuena");
            			contrasena_correcta = true;
            			break;
            		}
            		intentos--;
            	} while(intentos != 0);
            	if(!contrasena_correcta) {
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
            	es_primo = true;
            	
            	for(int i = 2; i < numero; i++) {
            		if(numero % i == 0) {
            			es_primo = false;
            		}
            	}
            	
            	if(!es_primo) {
            		System.out.println("El " + numero + " no es un numero primo");
            	}
            	else {
            		System.out.println("El " + numero + " es un numero primo");
            	}
            	break;
            	
            case 21:
            	System.out.println("Numeros prios entre 1 y 100");
            	for(int i = 2; i <= 100; i++) { // El 1 no se considera un numero primo
            		es_primo = primo(i);
            		if(es_primo) {
            			System.out.print(i + "\n");
            		}
            	}
            	break;
            	
            case 22:
            	frase = "La lluvia en Sevilla es una maravilla";
            	char[] vocales = {'a', 'e', 'i', 'o', 'u'};
            	int cantidad_vocales = 0;
            	for(int i = 0; i < frase.length(); i++) {
            		for(char vocal : vocales) {
            			if(frase.charAt(i) == vocal) {
                			cantidad_vocales++;
                		}
            		}
            	}
            	System.out.println("La frase tiene " + cantidad_vocales + " vocales");
            	break;
            	
            case 23:
            	frase = "La lluvia en Sevilla es una maravilla";
            	System.out.println("Frase original: " + frase);
            	System.out.println("Frase moficada: " + frase.replace('a', 'e'));
            	break;
            	
            case 24:
            	frase = "La lluvia en Sevilla es una maravilla";
            	for(int i = 0; i < frase.length(); i++) {
            		codigo_ASCII = (char) frase.charAt(i);
            		System.out.print(codigo_ASCII + " ");
            	}
            	break;
            	
            case 25:
            	System.out.println("Inserta 2 operandos enteros y un signo aritmetico en el siguiente orden");
            	System.out.print("Operando_1 signo_aritmetico Operando_2\n> ");
            	int operando_1 = in.nextInt();
            	String operacion = in.next();
            	int operando_2 = in.nextInt();
            	System.out.print("El resultado es: ");
            	switch(operacion) {
            		case "+":
            			System.out.print(operando_1 + operando_2);
            			break;
            		case "-":
            			System.out.print(operando_1 - operando_2);
            			break;
            		case "*":
            			System.out.print(operando_1 * operando_2);
            			break;
            		case "/":
            			System.out.print((float)operando_1 / operando_2);
            			break;
            		case "^":
            			System.out.print((int)Math.pow(operando_1, operando_2));
            			break;
            		case "%":
            			System.out.print(operando_1 % operando_2);
            			break;
            		default:
            			System.out.print("Error. No disponible");
            			break;
            	}
            	break;
            	
            case 26:
            	System.out.println("Ingresa un numero mayor a 1");
            	numero = 0;
            	do {
            		numero = in.nextInt();
            	} while(numero <= 0);
            	int suma = 0;
            	for(int i = 1; i <= numero; i++) {
            		suma += i;
            	}
            	System.out.println("La suma es igual a " + suma);
            	break;
            	
            case 27:
            	System.out.println("Inserta cualquier cantidad de numeros aleatorios: ");
            	int numeros_introducidos = 0;
            	numero = 0;
            	do {
            		numero = in.nextInt();
            		numeros_introducidos++;
            	} while(numero != -1);
            	System.out.println("Insertaste " + numeros_introducidos + " numeros");
            	break;
            	
            case 28:
            	System.out.print("Ingresa una frase: ");
            	in.nextLine();
            	frase = in.nextLine(); // Ayudan a uqe los nextLine() funcionen si ser influenciados por los otros inputs
            	String frase_sin_espacios = "";
            	for(int i = 0; i < frase.length(); i++) {
            		if(frase.charAt(i) != ' ') {
            			frase_sin_espacios += frase.charAt(i);
            		}
            	}
            	System.out.println("La frase sin espacios es igual a: ");
            	System.out.println(frase_sin_espacios);
            	break;
            	
            case 29:
            	String conjunto_frases = "";
            	do {
            	    in.nextLine(); 
            		System.out.print("Inserta una frase: ");
            		frase = in.nextLine();
            		conjunto_frases += frase;
            	} while(!frase.isEmpty()) ;
            	System.out.println(conjunto_frases);
            	break;
            
            case 30:
                in.nextLine();
                System.out.print("Inserta una frase: ");
                frase = in.nextLine();
                System.out.print("Deseas pasar la frase a:\n1- Mayuscula\n2- Minuscula\n> ");
                numero = in.nextInt();
                if(numero == 1){
                    frase = frase.toUpperCase();
                }
                else if(numero == 2){
                    frase = frase.toLowerCase();
                }
                System.out.println("La frase es: " + frase);
                break;
                
            case 31:
                in.nextLine();
                System.out.print("Inserta una frase: ");
                frase = in.nextLine();
                System.out.println("Esta frase tiene " + frase.length() + " caracteres");
                break;
                
            case 32:
                System.out.print("Inserta una palabra: ");
                String palabra_1 = in.next();
                System.out.print("Inserta otra palabra: ");
                String palabra_2 = in.next();
                if(palabra_1.equals(palabra_2)){
                    System.out.println("Estas palabras son iguales");
                }
                else{
                    System.out.println("Estas palabras no son iguales");
                }
                break;
                
            case 33:
                System.out.print("Inserta una palabra(al menos 6 letras): ");
                String palabra = in.next();
                System.out.println("La cuarta y quinta letra de la palabra son: " + palabra.substring(3, 5));
                break;
                
            case 34:
                System.out.print("Inserta una frase\n> ");
                frase = in.next();
                for(int i = 0; i < frase.length(); i++){ // length lleva parentesis con los Strings, no con los arrays
                    if(frase.charAt(i) == ' '){
                        System.out.print("\n");
                    }
                    else{
                        System.out.print(frase.charAt(i));
                    }
                }
                /*
                String palabras[] = frase.split(" ");
                for(int i=0;i<palabras.length;i++){
                    System.out.println(palabras[i]);
                }
                */
                break;
                
            case 38:
                int mayor;
                int menor;
                int suma_total = 0;
                int suma_positiva = 0;
                int suma_negativa = 0;
                double media;
                contador = 0;
                System.out.print("> ");
                numero = in.nextInt();
                contador++;
                suma_total += numero;
                mayor = numero;
                menor = numero;
                if(numero >= 0){
                    suma_positiva += numero;
                }
                else{
                    suma_negativa -= numero;
                }
                while(numero != -1) {
                    System.out.print("> ");
                    numero = in.nextInt();
                    contador++;
                    suma_total += numero;
                    if(numero >= 0){
                        suma_positiva += numero;
                    }
                    else{
                        suma_negativa -= numero;
                    }
                    if(numero > mayor){
                        mayor = numero;
                    }
                    else if(numero < menor){
                        menor = numero;
                    }
                }
                media = (double) suma_total / contador;
                System.out.println("\nCantidad: " + contador);
                System.out.println("Mayor: " + mayor);
                System.out.println("Menor: " + menor);
                System.out.println("Total: " + suma_total);
                System.out.println("Positiva: " + suma_positiva);
                System.out.println("Negativa: " + suma_negativa);
                System.out.println("Media: " + media);
                break;
                
            case 39:
                int horas = 0;
                int minutos = 0; 
                int segundos = 0;
                
                while(true){
                    if(horas < 10){
                        System.out.print(0);
                    }
                    System.out.print(horas);
                    System.out.print(":");
                    if(minutos < 10){
                        System.out.print(0);
                    }
                    System.out.print(minutos);
                    System.out.print(":");
                    if(segundos < 10){
                        System.out.print(0);
                    }
                    System.out.print(segundos);
                    System.out.print("\n");
                    
                    Thread.sleep(1000);
                    
                    segundos++;
                    if(segundos == 60){
                        segundos = 0;
                        minutos++;
                    }
                    if(minutos == 60){
                        minutos = 0;
                        horas++;
                    }
                    if(horas == 24){
                        horas = 0;
                        minutos = 0; 
                        segundos = 0; 
                    }
                }
    
        }
        
    }

}
