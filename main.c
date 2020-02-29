#include <stdio.h>
#include <stdlib.h>

//Blancarte Cordero Guillermo Gpo:016  Matricula:1843282  Horario:Lunes 8pm-10pm  fecha:17-feb-2020//

int main(int argc, char *argv[]) {
	char letra =0;
	printf("Oprima una tecla:");
	scanf(" %c",&letra);
	
	if (letra>=48 && letra<=57){
		printf("Su caracter es un entero\n");
        printf("Numero en el codigo ascci:%d\n", letra);
	}else
	    if (letra>=65 && letra<=90){
	    	printf("Su caracter es una letra mayuscula\n");
            printf("Numero en el codigo ascci:%d\n", letra);
		}else
		    if (letra>=97 && letra<=122){
		    	printf("Su caracter es una letra minuscula\n");
                printf("Numero en el codigo ascci:%d\n", letra);
			}
	return 0;
}
