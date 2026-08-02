//bloqeue 2.2 : Ampliacion de Estructuras Selectivas

//Ejercicio: Realizar un programa que lea de la entrada estándar un numero positivo y 
//escriba en la salida estándar si es par o impar


/*INICIO

    declarar numero

    leer numero

    MIENTRAS numero < 0 HACER
        mostrar "Ingresa un numero positivo"
        leer numero
    FIN MIENTRAS

    SI (numero % 2 == 0 ) ENTONCES
        mostrar "El numero es par"
    SINO
        mostrar "El numero es impar"
    FIN SI

FIN*/

/*
#include <stdio.h>

int main (){

	int x;
	
	printf ("Dame un numero y te dire si es par o impar \n");

	scanf ("%i",&x);

	while (x <0){
		printf("El  numero que me diste es negativo, ingresa un numero positivo \n");
       scanf ("%i",& x);
        
    }

    if (x%2 == 0){
        printf("El numero que me diste es par \n");
        }else{
            printf("El numero que me diste es impar\n");
        }
    
	return 0;
}*/


//----------------------------------------------------------------------------------------------------------------------------------
// Realiza un programa que lea 3 números enteros positivos distintos  e imprima el 
//mayor  y el menor valor de los 3 . Intente que el programa realice el menor número de
//comparaciones psoible entre los numeros.

#include <stdio.h>

int main(){
    
    int numero1,numero2,numero3 ;
    int max, min;

     printf ("\nDame 3 numeros y te dare el mayor y el menor \n\n\n ");

   printf ("Dame el primer numero: \n");
   scanf ("%i",&numero1);

   printf ("Dame el segundo numero: \n");
    scanf("%i",&numero2);

    printf ("Dame el tercer numero: \n");
    scanf ("%i",& numero3);

  /*if (numero1 > numero2){
    if (numero1 > numero2){
         max = numero1;
    }
  else {
        max = numero2;
   }
}
  else {
    if (numero2 > numero3){
    max = numero3;
    }
  }*/

  if (numero1 < numero2){
    if (numero1 < numero2){
         min = numero1;
    }
  else {
        min = numero2;
   }
}
  else {
    if (numero2 < numero3){
    min = numero3;
    }
  }

  printf ("el numero mayor es %i y el menor es %i \n\n", max, min);

    return 0;
}




//----------------------------------------------------------------------------------------------------------------------------------
// Realiza un programa que lea 3 números enteros positivos distintos  e imprima el 
//mayor  y el menor valor de los 3 . Intente que el programa realice el menor número de
//comparaciones psoible entre los numeros.
//MEJOR VERSION 

/*seudocodigo:
Inicio

1. Pedir al usuario el primer número
   Guardar en numero1

2. Pedir al usuario el segundo número
   Guardar en numero2

3. Pedir al usuario el tercer número
   Guardar en numero3

4. Inicializar mayor = numero1
   Inicializar menor = numero1

5. Comparar numero2 con mayor
      Si numero2 > mayor, entonces mayor = numero2
   Comparar numero2 con menor
      Si numero2 < menor, entonces menor = numero2

6. Comparar numero3 con mayor
      Si numero3 > mayor, entonces mayor = numero3
   Comparar numero3 con menor
      Si numero3 < menor, entonces menor = numero3

7. Imprimir mayor y menor

Fin

*/
/*#include <stdio.h>

int main (){
 
   int numero1,numero2,numero3;
   int nummayor, nummenor;

   printf ("\nDame 3 numeros y te dare el mayor y el menor \n\n\n ");

   printf ("Dame el primer numero: \n");
   scanf ("%i",&numero1);

   printf ("Dame el segundo numero: \n");
    scanf("%i",&numero2);

    printf ("Dame el tercer numero: \n");
    scanf ("%i",& numero3);

   nummayor = numero1;  
   nummenor = numero1;

    // Comparar numero2
    if (numero2 > nummayor) nummayor = numero2;
    if (numero2 < nummenor) nummenor = numero2;

    // Comparar numero3
    if (numero3 > nummayor) nummayor = numero3;
    if (numero3 < nummenor) nummenor = numero3;
  
   printf("El mayor es %i y el menor es %i\n", nummayor, nummenor);

   
    return 0;
}*/

/* cuando usamos 
   // Comparar numero2
    if (numero2 > nummayor) nummayor = numero2;
    if (numero2 < nummenor) nummenor = numero2;

    // Comparar numero3
    if (numero3 > nummayor) nummayor = numero3;
    if (numero3 < nummenor) nummenor = numero3;

    if (numero2 > nummayor)
Se pregunta: ¿El segundo número es mayor que el mayor que tenemos hasta ahora?
Si sí, actualizamos nummayor para que ahora almacene numero2.
Si no, no pasa nada y nummayor sigue siendo numero1.
if (numero2 < nummenor)
Se pregunta: ¿El segundo número es menor que el menor que tenemos hasta ahora?
Si sí, actualizamos nummenor para que ahora almacene numero2.
Si no, no pasa nada y nummenor sigue siendo numero1.

y en el caso de numero3
Exactamente lo mismo que con numero2, solo que ahora comparamos con los valores actualizados de nummayor y nummenor:

nummayor puede ser numero1 o numero2 dependiendo de cuál era mayor.
nummenor puede ser numero1 o numero2 dependiendo de cuál era menor.

Si numero3 es mayor que el mayor actual, actualizamos nummayor.
Si numero3 es menor que el menor actual, actualizamos nummenor.*/