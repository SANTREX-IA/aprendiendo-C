//bloque 2.4 Condiciones Multiples y Ejercicios 
//explicacion las condiciones multiples, con un ejercicio 

//Hacer un programa que diga si un numero insertado por teclado se encuentra 1 y 10 o si no lo esta

/*#include <stdio.h>

int main (){
	 
	 int x;

	 printf ("Dame  un numero y te dire si este se encuentra entre 1 y 10. \n");
	 scanf ("%i",&x);

	 if (x > 1 == x < 100){
         printf ("si el numero que me diste si se encuentra entre el 1 y el 10 \n");
	 }else if (x > 100){
	 	printf ("el numero que me diste %i no se encuentra entre el 1 y 10 ya que sale es mayor\n ",x);
	 }else if (x < 1){
	 	printf ("El numero que me diste %i es menor que 1 entonces no esta entre el 1 y  el 10 \n",x);
	 }


	return 0;
}*/


//----------------------------------------------------------------------------------------------------------------------------------------------------
 
/* #include <stdio.h>

int main (){

  int x;

printf("Dame un numero entre el 1 y 10\n");
    
    scanf ("%i",&x);

    if (x >= 1 || x <= 10){                            // la condiccion ( || )es el (Ó) osea una de las dos condicines se tienen que cumplir para ser un true 
    	printf ("%i si se encuentra entre el 1 y el 10\n ",x);

    }else{
    	printf ("%i no se encuentra entre el 1 y el 10\n",x);
    }





	return 0;
}*/




//------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Correccion y mejora del codigo
/*#include <stdio.h>

int main (){

 int x ;

  printf("Dame un numero y te dire si se encuentra ente 1 y 100: \n");

  scanf ("%i", &x);

  if(x >= 1 && x <= 100) {                              //la  condiccion && (y) significa que ambas condiciones se deben cumplir
     printf ("Si %i se ecuentra en 1 y 100: \n",x);
  }else {
  	printf("%i no se ecuentra entre 1 y 100: \n",x);
  }





	return 0;
}*/

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
   //EScribe un programa que acepte 3 numeros, horas, minutos y segundos y devuelva la hora que sera dentro de un segundo, controlando 
   //que sea correcta  (Mi codigo contruido por mi)

/*#include <stdio.h>
#include <time.h>

int main (){

   int segundos,minutos,horas;

   printf("Dame la  hora, minutos y segundos para decirte cuanto sera el siguiente tiempo \n\n");


   printf("Dame la segundos: \n");
   scanf ("%i",&segundos);

  printf ("Dame los minutos:\n");
  scanf("%i",&minutos);

 	printf ("Dame los horas:\n");
 	scanf ("%i", &horas);

 	// validar segundos
   if (segundos >= 0 && segundos <= 59){
   }else{
   	printf("Los segundos que me diste se salen del limite \n");
   }
   // validacion minutos
   if (minutos >= 0 && minutos<=59){
   }else{
      printf("Los minutos que  me diste se salen del limite\n");
   }

   // validar hora
   if (horas  >= 0 && horas <= 23){

   } else {
      printf("Las horas que me diste se salen del liminte \n");
   }
      
 

    //conteo de segundos
   if(segundos < 59  ){
        segundos ++;
     }else if (segundos == 59 ){
      segundos = 00;
      minutos ++;
   }


   //conteo de minutos
   if(minutos < 59  ){
        minutos ++;
     }else if (minutos == 59 ){
      minutos = 00;
      horas ++;
   }

   if(horas < 23  ){
        horas ++;
     }else if (horas == 23 ){
      horas  = 00;

   }
 

      if (horas  && minutos && segundos){
         printf("%i:%i:%i \n",horas,minutos,segundos);
      }
	return 0;
}*/

//------------------------------------------------------------------------------------------------------------------------------------
//codigo del video

#include <stdio.h>


int main (){

   int h, m, seg;

   printf ("Introduce valor horas: ");
    scanf ("%i", &h);
   printf ("Introduce valor minutos: ");
    scanf ("%i", &m);
   printf ("Introduce valor segundos: ");
    scanf ("%i", &seg);
   
   if (h<= 23 && m<= 59 && seg<= 59 ){
    seg+=1;

    if (seg == 59){
     m +=1;
     seg = 0;
   }

    if (m == 59){
     h +=1;
     m = 0;
  }

    if (h == 23){
     h=0;

    printf ("La hora es : %i,%i,%i. \n",h,m,seg);
   }else {
      printf ("La hora introducida no es correcta.\n");
   }
  } 
   return 0;
}