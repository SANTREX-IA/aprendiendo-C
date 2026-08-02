//Bloque 3.2 Ejercicios de For y while

//REaliza un programa que imprima la suma de los numeros pares entre dos y mil


/*#include  <stdio.h>

int main (){
   
   int i;
   float suma;
   suma = 0;

   for (i = 2; i <= 2000; i+=2){
     suma += i;
   }
   
    printf("El resultado de la suma de :%f\n",suma );



	return 0;
}*/

//------------------------------------------------------------------------------------------------------------
//Realioza un programa que calcula la media (promedio) de x número introudcidos por teclados

#include <stdio.h>

int main (){
  int x,y,i;
  float suma ;
   i= 0 ;
   suma = 0;
  printf("Cuantos numeros que quieres calcular el promedio \n");
  scanf ("%i",&x);

  while (i < x){
   printf("Introduce el %i numero\n",i+1);
   scanf("%i",&y);
   suma +=y;
   i++;
  }
 
  suma = suma / x;

  printf("El promedio es : %f\n\n", suma);


	return 0;
}