#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//BLANCARTE CORDERO GUILLERMO   MATRICULA:1843282  GPO:016 HORARIO:LUNES 8PM-10PM //

int main(int argc, char *argv[]) {
	
    int a[4][4],i,j,esc=0;
	printf("\tMATRIZ DE [3X3]\n\n");
	for(i=1;i<=3;i++){
		for(j=1;j<=3;j++){
			printf("Introducir el valor de [%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n\nIngrese un valor escalar(entero):");
	scanf("%d",&esc);
	
	for(i=1;i<=3;i++){
		for(j=1;j<=3;j++){
		    a[i][j]*= esc;
		    printf("[%d]",a[i][j]);
		}
		    printf("\n");
	}
	
	return 0;
}
