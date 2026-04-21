 //bloque 7: errores que se suelen temer al momento de programar
 /* 1.- guardar en cpp osea debemos de guarda en  -> .c porque si no, no se va a poder ejecutar el archivo en la terminal*/
  //2.- la ausencia de   ; 


  #include <stdio.h>  // es una libreria

int main () {

 printf("\nhola mundo.\n")	<---- ahi esta el error , no esta el punto y coma ;

 return 0;
 }

 //4.-llamar a variables de no existen

 #include <stdio.h>  

int main () {

	int a;
	a = 10 ;

 printf("\nhola mundo.\n");	
 printf ("el valor de a = %i" as);  <------ aqui esta el error le agrege una "s" cosa que no existe dentro de codigo ahi le debo de colocar una "a" por es asi como se llama la variable

 return 0;
}