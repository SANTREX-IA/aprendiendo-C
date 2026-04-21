//Bloque 8 tambien llamado bloque 2.1 estrusctur selectivas
/* son la forma que tiene el codigo cuando queremos que se ejecute cierta o ciertas linas de codigo en funcion
de una condicion*/
/*#include <stdio.h>
int main (){
	
int x;

 x=5;

  if(x == 5);{              //¨"if" significa si  es una condicion.Se tiene que poner doble == porque
                           // lo que se esta haciendo es una comparacion,por eso cando utiliamos x = 5; es porque el igual( = ) significa que es una asignacion , osea que a X le estamos asingnado el valor de 5
    printf("El valor de x es 5.\n");
    }
	return 0;
}*/



/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/


//bueno podemos utiliar diferentes tipos de operadores de comparacion :

/*#include <studio.h>

 int main (){
int x;

x = 5 ;

if (x == 5);{  // bueno aqui te presentamos los diferentes opereadores "=="(igul que) "<"(el menor que), ">"(mayor que);"<=" (menor igual que),">" (el mayor igual que), "!="(distinto que).

  printf ("el valor de X es 5. \n");

}

return 0;
}*/



/*----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

//aqui vamos a probar con el menor que "<"


/*#include <stdio.h>

int main (){

  int x;

  x = 5;

  if (x < 4 ){                           //lo que estamos diciend es que X tiene que se que menor que 4 para que se ejecute ya que el singo "<" significa menor que

   printf ("el valor de x es 5.\n"); //se supone que no se debe de ejecutar
 }
	return 0;
}*/


//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//aqui vamos a probar el mayor que ">"


/*#include <stdio.h>

int main (){

  int x;

  x = 5;

  if (x > 5){                   //aqui le estamos dicien que "x" tiene que ser mayor que 5 

 printf ("el valor de X es 5.\n");   //se supone que no debe de imrpimirse porque no cumple con la condición 
  }

	return 0;
}*/




//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


//aqui vamos a probar el  menor o igual que "<="


/*#include <stdio.h>

int main (){

  int x;

  x = 5;

  if (x  <= 5){               // aqui lo que le estamo diciendo es si es menor o igual que 5  para que


   printf ("el valor de x es 5. \n");    //lo imprima , y como no es menor pero si es igual que 5 lo va a imprimir

  }

	return 0;
}*/



//----------------------------------------------------------------------------------------------------------------------


//aqui vamor a provar el  mayor o igual ">="


/*#include <stdio.h>

int main (){

    int x;

    x = 5;                  //aqui lo que le estamos diciendo si x es mayor o igual que 5 para que  

    if (x >= 5){             // lo imprima, y como "x" no es mayor que 5 pero si es igual que 5 lo va a imprimir


    	printf ("el valor de X es 5.\n");
    }
	return 0;
}*/



//-------------------------------------------------------------------------------------------------------------------------------

// aqui vamor a provar el diferente que "!="

/*#include <stdio.h>

int main(){

int x;

x = 5;


 if (x != 4){

printf ("el valor es diferente de 5.\n ");

 }

   return 0;
}*/ 
 


//---------------------------------------------------------------------------------------------------------------------------------- 

// por ejemplo cuando uno de los datos no cumple con uno de las condiciones junto con el operardor, para que ejecute usaremos
// "else"
/*#include <stdio.h>

int main (){

  int x;


  x = 5 ;


   if (x == 4){

     printf("el valor de x es  5.\n" );
   }
     else{

       printf ("el valor de x No es 5 .\n");
     }

  return 0;
} */


//----------------------------------------------------------------------------------------------------------------------------------------------


//Ejercicio:
/*Vamos a declarar una variable de tipo entero y la iniciamos con un valor entre  1 y 10 por tecado soliciatamos un numero y vemos si hemos acertado*/


/*#include <stdio.h>

#define ENCONTRAR 7

int main (){
 
 int x, y ;

 x = ENCONTRAR;

 printf ("\n Vienvenido al juego de :Adivina que numero estoy pensando.\n\n");

  

   printf ("Introduce el numero que crees qu estoy pensando :\n");
    scanf ("%i" ,&y);

    if (x == y ) {

     printf ("el valor queme diste correcto es  :%i\n",y);
    }else if (x < y){

    printf ("no es %i ya que el que estoy pensando es menor \n ",y);

    }else if (x > y){
      printf ("no es %i ya que el que estoy pensando es mayor  \n ",y);
    }
    




  return 0;
}*/

//----------------------------------------------------------------------------------------------------------------------------------------------------------
//bueno lo que hice aqui esta fuera del bloque 2.1, y esque estaba repasando mis bases en C y pues ya habisto los bucles los switch etc
//entonces sabia que en el codigo anterior podiamos usar un bucle para que se repitiera hasta que diera con el numero "que estaba pensandoo" incluso
//quiero usar max rand (esta me perimite que la maquina o computora elija un numero aletorio en un rango limitado para que el usuario adivine el numero y es un poco más natural)
//asi que de momento en esta parte solo quiero usar un bucle cuando termine este, pienso usar el max rand para que me de numeros aleotrios

#include <stdio.h>

# define ENCONTRAR 50 

int main (){

 int x, y;

  x = ENCONTRAR ;

  printf ("Viendenido al juego de Adivina que estoy pensando.  \n\n ");

  printf ("Bien introduce un numero . \n \n");

  scanf ("%i",&y);

  while (x != y ){
   if (x < y){

    printf ("no es %i ya que el que estoy pensando es menor \n ",y);

    }else if (x > y){
      printf ("no es %i ya que el que estoy pensando es mayor  \n ",y);
    }
    printf ("dame otro numero.\n");
    scanf ("%i", &y);
  

  }
  if (x == y ) {

     printf ("el valor queme diste correcto es  :%i\n",y);
   }

  return 0;
}