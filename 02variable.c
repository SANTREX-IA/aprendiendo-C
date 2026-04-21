//  BLOQUE 1.3 VARIBLE:una varible es la forma de ponerle un nombre a un espaci de la memoria donde se guarda un dato
/*se supone ques esta es un forma de poner un comentario */
#include <stdio.h>

int  main (){
	int x;        //esta es una varible de tipo entero ya que existen 3 tipos de variables y el que vamos a usar se llama "int" que es una variable de tipo entero  (numeros) sin punto decimal
    float y;     //esta es una variable de tipo flotante son numeros que tienen uno o más decimales, tambien se pueden usar enteros(pero no es recomendable)
    double y2;   // son lo mismo pero tiene 64 bits y esto nos permite almacenar mas numeros siendo el limite 2 elevado por los 64 bits
    char z ;     // son variables de tipo caracter normalmente almacenan letras aunque sea numeros lo va entender que va ser una letra


    x = 5;
    y = 10.5 ;
    y2 = 20.9;
    z = 'a';
   /* printf(" valor de x es %i.\n", x );
    printf(" valor de y : %f.\n", y);
    printf(" valor de y2:%f.\n", y2);
    printf("valor de z: %c.\n",z);*/

    /* ahora tambien podemos con un solo printf imprimir varias variables*/
    printf("valor de x es %i.\n valor de y es: %f.\n valor de y2 es:%f.\n valor de z: %c.\n",x,y,y2,z);
	return 0;
}
