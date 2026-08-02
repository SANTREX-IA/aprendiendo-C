//Bloque 3.1 Estructura iterativas (o tambien llamados bucles )while y for

//Escribe un programa que lea dos numeros y muestre por pantalla todos los numeros
//comprendidos entre esos numeos dados


//Existen 3 tipos de bucles
// While
// For
// Do While


#include <stdio.h>

int main (){
	
 int x,y,i;                       //nomalmnete para los bucles se usan contadores, suelen ser llamdos "i" y "j", pero los puede llamar como quieras

  printf("Introduce un numero:\n");
    scanf ("%i", &x);

    printf ("Introude un numero mayor al anterior\n");
     scanf ("%i",&y);

     //Bucles For

     for (i = x ++;i < y ; i ++){
     	printf("%i ",i);
     }

     //bucle While para la estructura primero se tiene que iniciar la variable , osea antes de inciar el bucle while se tiene que inicar la vairble
     // y despues se coloca el while dentro del while se tiene que poner la condiccion

     i =  x ++;
     while (i < y){
     	printf("%i ",i);
     	 i++;
     }

     printf ("\n");

	return 0;
}