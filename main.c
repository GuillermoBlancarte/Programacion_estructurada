#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*Blancarte Cordero Guillermo Matricula:1843282  Gpo:016  Horario: Lunes 8pm-10pm  fecha:10-feb-2020 */

int main(int argc, char *argv[]) {
	
	/*Datos de tipo entero*/
	int a=7,b=3,c=0,oper=0;
	
	c = a+b;
	printf("%d + %d = %d\n",a,b,c);
	c= a-b;
	printf("%d - %d = %d\n",a,b,c);
    c = a*b;
	printf("%d * %d = %d\n",a,b,c);
	c = a/b;
	printf("%d / %d = %d\n",a,b,c);
	c = a % b;
	printf("%d mod %d = %d\n",a,b,c);
	c = a>b;
	printf("%d es mayor que %d\n",a,b);
	c= a<b;
	printf("%d es menor que %d\n",b,a);
	
	//Operadors de incremento y decremento//
	c = a++;
	printf("%d\n",c);
	c= ++a;
	printf("%d\n",c);
	c = b--;
	printf("%d\n",c);
	c= --b;
	printf("%d\n",c);
	
	/*Operadores de comparacion*/
	c= b<a;
	printf("%d es menor a %d\n",b,a);
	c= a>b;
	printf("%d no es mayor a %d\n",b,a);
	c= b<=a;
	printf("%d es menor o igual a %d\n",b,a);
	c= a>=b;
	printf("%d es mayor o igual a %d\n",a,b);
	c = a==b;
	printf("%d no es igual a %d\n",a,b);
	
	/*Datos de tipo caracter*/
	char car1=65,car2=66,res=0;
	
	res= car1==car2;
	printf("\n%c  no es igual a %c\n",car1,car2);
	
	res= car1<car2;
	printf("%c es menor que %c\n",car1,car2);
	
	res = car2>car1;
	printf("%c es mayor que %c\n",car2,car1);
	
	//Operaciones booleanas//
	
	oper= a-b && b+a;
	printf("\n%d\n",oper);
	
	oper= a-b || b+a;
	printf("%d\n",oper);
	
	oper= a-b != b+a;
	printf("%d\n",oper);
	
	oper= a-b == b+a;
	printf("%d\n",oper);
	
	oper= a-b < b+a;
	printf("%d\n",oper);
	
	oper= a-b > b+a;
	printf("%d\n",oper);
	
	//Operador ternario//
	int valormayor= (a > b) ? 7 : 3;
	printf("\nValor mayor es:%d",a,b);
	
	return 0;
}
