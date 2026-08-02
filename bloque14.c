//bloque 3.3 Buque Do while, ejemplo y ejercicio
//Hacer un bucle que nos pregunte si queremos continuar y hasta que no escribamos s no pare
// Do while

//ejemplo de como funciona


/*#include <stdio.h>


int main (){
	int i;

	i = 10;*/

	/*while (i< 15){

		printf("Esto no se va ejecutar nunca\n");
		i++;
	}*/

    /*do {
      printf("Esto se ejecuta al menos una vez\n");
      i++;
    }while (i< 15);



	return 0;
}*/

//---------------------------------------------------------------------------------------------------------------------------------------
//Ejercicio

/*#include <stdio.h>

	int main () {
      
      char letra ;

      

        do {
         printf ("Adivina la letra para que puedas detener este bucle \n");
         fflush (stdin);
        scanf (" %c", &letra);

        }while (letra != 's');

        if (letra == 's'){
        	printf ("Haz encontrado la letra \n");
        }


		return 0;
	}*/
//---------------------------------------------------------------------------------------------------------------------------------

	//en este tipo de bucles tambien se pueden poner condiciones multiples


	/*#include <stdio.h>

	int main (){

       char letra ;
       do {
         printf("Adivina la letra para que puedas detener este bucle\n");
          fflush (stdin);
          scanf ("%c",%letra);

       }while (letra != 's'&& letra != 'S');    //Esta es una condicion multiple

       if (letra == 's'){
       	printf ("Haz encontrado la letra")
       }
		return 0;
	}*/


	//--------------------------------------------------------------------------------------------------------------

	//Escribe un programa que lea dos numeros y muestre por pantalla todos los numeros
//comprendidos entre esos numeos dados
//Este codigo ya estaba hecho pero aqui hya problema ya que si el usuario llega a meter un numero menor despues
	// de a ver introducido un numero antes, entonces habria un bug para evitar esto tenemos que hacer que le pida que introdusca ese numoero que sea
	//mayor al primero que introducio con el bucle "do while"


#include <stdio.h>

int main (){
	
 int x,y,i;                       //nomalmnete para los bucles se usan contadores, suelen ser llamdos "i" y "j", pero los puede llamar como quieras

  printf("Introduce un numero:\n");
    scanf ("%i", &x);


    do{                                                    //aqui colocamos el bucle "do while" para cuando el usuario ingresa un numero que no es mayor que ingreso antes
     printf ("Introude un numero mayor al anterior\n");     //entonces hasta que ingrese un numero mayor no va dejar de pedirle ese numero mayor
     scanf ("%i",&y);

   }while (x > y  );

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