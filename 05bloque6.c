// bloque 6 : ordenamiento metodo burbuja
  // intercambiar los valores  de los numeros enteros introducido por teclado

/*# include <stdio.h>


int main(){
	
 int x,y;

 printf ("el valor de x es:");

  scanf ("%i",&x);

  printf ("el valor de y es:"); 

  scanf ("%i",&y);

  x=y;
  y=x;

  printf("el valor de x es:%i.\n",x);
  printf("el valor de y es:%i.\n",y);


	return 0;
}*/


/*bueno cuando lo imprimimos por la terminar nos va pedir que nosotros le demos valor 
  de "x" y "y", a "x" le di el valor de 5 y a "y" le die el valor de 6, entonces:
  el valor de x es : 5
  el valor de y es :6 

  ya que le asignamos esos valores nos va ejecutar la siguiente linea donde le decimos que

  x=y;
  y=x; 

  va salir que:
  el valor de  x es :6 esto se debe a la instrucciones anteriores  donde nosostros le estamos diciendo que "x"
  ya no vale 5 si no que vale 6
  y cuando se ejecuta la siguiente linea le estamos diciendo que "y" ya no vale 6 (en teoria)porque como antes habiamos dicho que
  "x" vale 5 pero lo cambiamos a 6 ese es el nuevo valor que adquiere "x" y como le estamos diciendo que "y" va pasar a tomar el 
  valor nuevo que habia adquirido "x", por eso se refleja eso en la terminal pero para solucionar ese problema existe el metodo 
  burbuja que se encarga de resolver esos problemas*/

/*--------------------------------------------------------------------------------------------------------------------------------------------------------*/






  /* el metodo burnuja consiste en apollarnos o mas bien en crear una variable auxiliar 
  se escribe asi:
  aux

  */


# include <stdio.h>


int main(){
  
 int x,y, aux;

 printf ("dame un valor para  x que va ser :");

  scanf ("%i",&x);

  printf ("dame un valor para y que va ser:"); 

  scanf ("%i",&y);

  aux= x;                         //eliminamos lo que anteriormente habiamos escrito que x=Y; y que y=X;
  x = y;                          // y ponemos la  variable aux para meter el valor de una de las variables en este caso  "x" entonces le metemos el valor de la otra variable en este caso el valor que tenia "y"
  y = aux;                        //

  printf("ahora el nuevo valor de x es:%i.\n",x);
  printf("ahora el nuevo valor de y es:%i.\n",y);


  return 0;
}

/* dato extra
el metodo burbuja es un metodo de ordemamiento que es el menos eficas para ordenar */

