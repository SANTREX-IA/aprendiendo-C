//bloque 1.4 marcos, asigancion de valores y operaciones (operaciones con variables)
//---------------------------------------------------------------------------------------------------
/*#include <stdio.h>

/*una macro sirve para definir por ejemplo cada vez que aparesca la plabra PI entendera 
que el valor de PI es 3.1416 siendo este valor que va asustituir el nombre por el valor
 y es un valor que no se puede cambiar ya que esta definida desde un inicio
#define PI 3.1416

int main (){
	
 float x;

  x = PI;
  printf("valor de PI es : %f\n",PI );

  return 0;

}*/

//----------------------------------------------------------------------------------------------------
  //hacemos que un program nos pieda el valor de una variable por teclado

 #include <stdio.h>

#define PI 3.1416
    
int main (){

 float x;
 int y;
  
  x = PI;
  printf("introduce un valor para y: \n");
    scanf ("%i",&y);                              //el scanf, escanea todo lo que metamos por teclado
                                                  // tenemos que por el "&" para cuando queremos meter el valor de una vzriable


     printf ("el valor de y es: %i\n ",y);

  return 0;
  

}

//------------------------------------------------------------------------------------------------------------------------------------
//ahora vamos hacer un programa que pueda hacer operaciones con variables


 /* #include <stdio.h>

#define PI 3.1416
    
int main (){

 float x;
 int y;
  
  x = PI;
  printf("introduce un valor para y: \n");
    scanf ("%i",&y);                              //el scanf, escanea todo lo que metamos por teclado
                                                  // tenemos que por el "&" para cuando queremos meter el valor de una vzriable


     printf ("el valor de y es: %i\n ",y);

     x = x*y;


     printf("el nuevo valor de x es : %f.\n",x);

  return 0;
}*/