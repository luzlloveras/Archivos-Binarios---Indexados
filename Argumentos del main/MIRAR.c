/* ARGUMENTOS DEL MAIN */  
/* LINEA DE COMANDOS */
/* MIRAR  12  PEPE */

#include <stdio.h>
#include <stdlib.h>

int main( int argc , char ** argv )
{
		int I ;
		
		if ( argc != 3 ) {
				printf("\n\n CANTIDAD DE ARGUMENTOS INCORRECTA\n\n");
				exit(1);
		};
		
		for ( I = 0 ; I < atoi(*(argv+1)) ; I++)
				printf ("\n\n  \t %s " , *(argv+2) );
		
		printf("\n\n\n\n");
		return 0 ;
}





