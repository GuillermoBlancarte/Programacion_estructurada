#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Blancarte Cordero Guillermo Gpo:016  Matricula:1843282  Horario:Lunes 8pm-10pm //

int fibbonacci(int n);
int registrar(int alumnos);
char imprimir(int alumnos);

int main(){
	int numero=0,alumnos=0,n=0;
	printf("Ingrese un numero:");
	scanf("%d",&numero);
	int suma= numero+fibbonacci(n);
	printf("%d + %d = %d",numero,fibbonacci(n),suma);
	printf("\n\nIngrese cuantos alumnos desea registrar:");
	scanf("%d",&alumnos);
	registro();
	return 0;
}

int fibbonacci(int n) {
   if(n == 0){
      return 0;
   } else if(n == 1) {
      return 1;
   } else {
      return (fibbonacci(n-1) + fibbonacci(n-2));
   }
}

int registro(int alumnos){
struct registro{
	char stuid[7]; //Matricula del estudiante//
	char nombre[100]; //Nombre del alumno//
	char apepa[100]; //Primer apellido//
	char apema[100]; //Segundo apellido//
	char Fecha[10]; //Fecha de nacimiento//
	char escue[30];//Nombre de la escuela//
	char  Grado[30]; //Grado del alumno//
	char carrera[30];//Carrera del alumno//
	char Genero[30];//Genero del alumno//
}estud[10];

	int i,num;
	printf("Cuantos alumnos desea registrar:");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++){
		printf("\nIngresa tu matricula:");
		fflush(stdin);
		gets(estud[i].stuid);
		while(strcmp (estud[i-1].stuid,estud[i].stuid)== 1){
				printf("\n\nERROR\nMatricula repetida");
				printf("\n\nIngrese otra matricula:");
				scanf(" %s",&estud[i].stuid);
		}
		fflush(stdin);
		printf("Ingrese su primer nombre:");
		gets(estud[i].nombre);
		fflush(stdin);
		printf("Ingrese su apellido paterno:");
		gets(estud[i].apepa);
		printf("Ingrese su apellido materno:");
		gets(estud[i].apema);
		printf("Ingrese su fecha de nacimiento:");
		gets(estud[i].Fecha);
		printf("Ingrese el nombre de la institucion:");
		gets(estud[i].escue);
		fflush(stdin);
		printf("Ingrese su grado:");
		gets(estud[i].Grado);
		printf("Ingrese el nombre de su carrera:");
		gets(estud[i].carrera);
		printf("Ingrese su genero:");
	    scanf("%[^\n]",&estud[i].Genero);
	}
	printf("\n\tRegistro");
	for(i=1;i<=num;i++){
		printf("\nMatricula:%s\n",estud[i].stuid);
		printf("Nombre:%s\n",estud[i].nombre);
		printf("Apellido paterno:%s\n",estud[i].apepa);
		printf("Apellido materno:%s\n",estud[i].apema);
		printf("Fecha de nacimiento:%s\n",estud[i].Fecha);
		printf("Nombre de la institucion:%s\n",estud[i].escue);
		printf("Grado:%s\n",estud[i].Grado);
		printf("Carrera:%s\n",estud[i].carrera);
		printf("Genero:%s\n",estud[i].Genero);
    }
}
