//bloque 1,5 DE AMPLIACION DE NUESTROS CONOCIMIENTOS EN ASIGACION Y OPERACIONES

/*#include <stdio.h>


int main (){
	
int x,y;        //podemos declarar dos enteros en un solo int en vez de hacerla por separado que igual esta bien
                   //no pasa nada perso se suele usar mejor con un solo int para varias variables

 x = 10;
 y = 2;

  // operaciones basicas:
 x= x + y;
 printf("el vlor de x + y es: %i\n", x );

 x=x-y;
 printf("el vlor de x - y es: %i\n", x );

x= x * y;
printf("el vlor de x * y es: %i\n", x );

 x= x/ y ;
 printf("el vlor de x / y es: %i\n", x );

 x = x % y;                                    // esta tambien es una operacion basica conocida como resto, el resto de dividir  10 entre 2 me tiene que dar 0

printf("el vlor de x de resto y es: %i\n", x );


 return 0 ;

}*/

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// tambien se pueden hacer más operaciones "más complejas" pero para esto necesitamos otra libreria

/*#include <stdio.h>
#include <math.h>    //nos permite hacer operaciones tipo potencia . Tienes que poner en tu terminarl  -lm para que puedas ejecutar el codigo si no 
                     // la libreria #include <math.h> no podra funcionar
 
 
int  main(){
    
 int x,y;

  x=10;
  y=2;

  //operaciones con la liberia math.h

  x = pow (y,x);
  printf(" el valor de y elevadoa  x es: %i\n", x );

    x = sqrt (x);

printf(" el valor de la raiz de  x es: %i\n", x );
    return 0;
}*/

// ahora vamos a enteder las accinaciones para simplificar algunos pasos

#include <stdio.h>


/*int main (){
  
int x,y;        //podemos declarar dos enteros en un solo int en vez de hacerla por separado que igual esta bien
                   //no pasa nada perso se suele usar mejor con un solo int para varias variables

 x = 10;
 y = 2;

  // operaciones basicas:
 x += y;                        // los que estamos haciendo es, en ves de poener x = x +y ; , hacemos es x += y es los mismo y asi podemos hacer con las operaciones basicas como la suma, la resta,la , multiplicacion  y division
 printf("el vlor de x + y es: %i\n", x );

 x -= y;
 printf("el vlor de x - y es: %i\n", x );

x *= y;
printf("el vlor de x * y es: %i\n", x );

 x /=  y ;
 printf("el vlor de x / y es: %i\n", x );

 x %= y;                                    // esta tambien es una operacion basica conocida como resto, el resto de dividir  10 entre 2 me tiene que dar 0

printf("el vlor de x de resto y es: %i\n", x );


 return 0 ;

}*/


//ahora vamos tambien aprender las operaciones de aumento

#include <stdio.h>

int  main(){

  int x;
  x = 10;

  x++;
printf("valor de x aumentado mmá 1 es igual a :%i\n",x );

  x--;
printf("el valor de x reducido a menos 1 es igual a:%i\n",x );

  /* code */
  return 0;
}