#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//BLANCARTE CORDERO GUILLERMO   MATRICULA:1843282  GPO:016 HORARIO:LUNES 8PM-10PM //

int main(int argc, char *argv[]) {
	
	int x,num=0,cont=0,z=0,i=0,tabla[100];
	printf("Ingrese un numero menor o igual a 100:");
	scanf("%d",&num);
	for(x=1;x<=num;x++){
		cont=0;
		for(z=1;z<=x;z++){
		    if(x%z==0){
		    	cont++;
			}	
		}
	if(cont==2 || z==1 || z==0){
		tabla[i]=x;
		i++;
	}		
}
	for(x=0;x<i;x++){
		printf("%d\n",tabla[x]);
	}
	
	return 0;
}
