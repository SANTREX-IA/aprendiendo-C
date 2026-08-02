//bloque 2.3 Estructuras  if /else anidadas y switch
//Realiza un programa en C que lea un númer entre 1 y 5 y devuekva el dia de la semana
//correspondiente:Para 1 lunes , 2 martes, etc

/* #include <stdio.h>

int main (){
	
int x;
printf ("introduce un numero entre 1 y 4: \n\n");
  scanf ("%i",&x);

  if (x == 1){
  	printf ("lunes \n");
  } 
  if (x == 2 ){
  	printf ("Martes \n");
  }
  if (x == 3){
  	printf ("Miercoes \n");
  }
 if (x == 4){
   printf ("Jueves \n");
 }

	return 0;
}*/

//Esta de forma menos eficiente

//_____________________________________________________________________________________________________________________

/*#include <stdio.h>

int main (){
int x;

printf ("introduce un numero entre 1 y 4: \n\n");
  scanf ("%i",&x);

  if (x == 1){
  	printf ("lunes \n");
  } 
  else if (x == 2){
  	printf("Martes\n");
  }else if (x == 3){
  	printf ("Miercoes\n");
  }else if (x == 4 ){
    printf ("Jueves\n");
  }
  else {
  	printf ("El numero intrdodido es incorrecto\n");
  }

  return 0;
}*/


//-------------------------------------------------------------------------------------------------------------------------------------
//Estrustutura switch


#include <stdio.h>

int main (){

  int x;

  printf("Introduce un numero entre 1 y 4 : \n\n");
   scanf ("%i", &x);
   
   switch (x){
   case 1: printf ("lUNES.\n"); break;
   case 2: printf ("MARTES.\n");break;
   case 3: printf  ("MIERCOLES\n");break;
   case 4 : printf ("JUEVES.\n");break;
   default: printf ("el numero no es correcto.\n");
   }


  return 0;
}