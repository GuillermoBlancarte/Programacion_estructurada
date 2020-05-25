#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Blancarte Cordero Guillermo Gpo:016  Matricula:1843282  Horario:Lunes 8pm-10pm //

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
}alumnos[10];

int main(){
	
	int i,num;
	printf("Cuantos alumnos desea registrar:");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++){
		printf("\nIngresa tu matricula:");
		fflush(stdin);
		gets(alumnos[i].stuid);
		while(strcmp (alumnos [i-1].stuid, alumnos [i].stuid)== 1){
				printf("\n\nERROR\nMatricula repetida");
				printf("\n\nIngrese otra matricula:");
				scanf(" %s",&alumnos[i].stuid);
		}
		fflush(stdin);
		printf("Ingrese su primer nombre:");
		gets(alumnos[i].nombre);
		fflush(stdin);
		printf("Ingrese su apellido paterno:");
		gets(alumnos[i].apepa);
		printf("Ingrese su apellido materno:");
		gets(alumnos[i].apema);
		printf("Ingrese su fecha de nacimiento:");
		gets(alumnos[i].Fecha);
		printf("Ingrese el nombre de la institucion:");
		gets(alumnos[i].escue);
		fflush(stdin);
		printf("Ingrese su grado:");
		gets(alumnos[i].Grado);
		printf("Ingrese el nombre de su carrera:");
		gets(alumnos[i].carrera);
		printf("Ingrese su genero:");
	    scanf("%[^\n]",&alumnos[i].Genero);
	}
	
	printf("\n\tRegistro");
	for(i=1;i<=num;i++){
		printf("\nMatricula:%s\n",alumnos[i].stuid);
		printf("Nombre:%s\n",alumnos[i].nombre);
		printf("Apellido paterno:%s\n",alumnos[i].apepa);
		printf("Apellido materno:%s\n",alumnos[i].apema);
		printf("Fecha de nacimiento:%s\n",alumnos[i].Fecha);
		printf("Nombre de la institucion:%s\n",alumnos[i].escue);
		printf("Grado:%s\n",alumnos[i].Grado);
		printf("Carrera:%s\n",alumnos[i].carrera);
		printf("Genero:%s\n",alumnos[i].Genero);
	}
	return 0;
}
