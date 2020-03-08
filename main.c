#include <stdio.h>
#include <stdlib.h>

/* Blancarte Cordero Guillermo  Matricula:1843282 GPO:016  Horario:Lunes 8pm-10pm*/

int main(int argc, char *argv[]) {
	int num=0,num2=0,sum=0,resta=0,mul=0,div=0,op=0;
	char res=0;
	printf("Que operacion desea realizar:");
	scanf("%c",&res);
	switch(res){
		case '+' : printf("Ingrese un numero:");
		scanf("%d",&num);
		printf("Ingrese otro numero:");
		scanf("%d",&num2);
		sum = num+num2;
		printf("SUMA = %d",sum);
		break;
		case '-' : printf("Ingrese un numero:");
		scanf("%d",&num);
		printf("Ingrese otro numero:");
		scanf("%d",&num2);
		printf("Si desea restar el primer numero menos el segundo presione uno si no presione dos:"),
		scanf("%d",&op);
		if(op==1){
			resta = num-num2;
		}else
		    if(op==2){
		        resta = num2-num;
		}
		printf("RESTA = %d",resta);
		break;
		case '*' : printf("Ingrese un numero:");
		scanf("%d",&num);
		printf("Ingrese otro numero:");
		scanf("%d",&num2);
		mul = num*num2;
		printf("MULTIPLICACION = %d",mul);
		break;
		case '/' : printf("Ingrese un numero:");
		scanf("%d",&num);
		printf("Ingrese otro numero:");
		scanf("%d",&num2);
		printf("Si desea dividir el primer numero entre el segundo presione uno si no presione dos:"),
		scanf("%d",&op);
		if(op==1){
			mul = num/num2;
		}else
		    if(op==2){
		        mul = num2/num;
		}
		printf("Division = %d",mul);
		break;
	}
	
	
	
	return 0;
}
