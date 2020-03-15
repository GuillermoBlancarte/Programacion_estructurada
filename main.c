#include <stdio.h>
#include <stdlib.h>

//BLANCARTE CORDERO GUILLERMO   MATRICULA:1843282  GPO:016 HORARIO:LUNES 8PM-10PM  FECHA:2-MARZO-2020//

int main(int argc, char *argv[]) {
	int num=0,i=0,suma=0,prom=0;
do{
	printf("Ingrese un numero positivo o si desea terminar ingrese un numero negativo:");
	scanf("%d",&num);
	suma= suma+num;
	i=i+1;
}	while(num>=0);

    prom=suma/i;
    printf("\nEl promedio de los numeros ingresado es:%d",prom);
    
	return 0;
}
