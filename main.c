#include <stdio.h>
#include <stdlib.h>

//BLANCARTE CORDERO GUILLERMO   MATRICULA:1843282  GPO:016 HORARIO:LUNES 8PM-10PM  FECHA:2-MARZO-2020//
int main(int argc, char *argv[]) {
	int i=0,n=0,num=0,sum=0,prom=0;
	printf("Ingrese un numero positivo o si desea terminar ingrese un numero negativo:");
	scanf("%d",&num);
	if(num<0){
		printf("Error\n");
	}
	while(num>=0){
		sum =sum+num;
		i=i+1;
		printf("Ingrese un numero positivo o si desea terminar ingrese un numero negativo:");
		scanf("%d",&num);
	}
	prom=sum/i;
	printf("\nEl promedio de los numeros ingresados es:%d",prom);
	return 0;
}
