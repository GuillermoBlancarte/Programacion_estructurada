#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Blancarte Cordero Guillermo Gpo:016  Matricula:1843282  Horario:Lunes 8pm-10pm //

int main(int argc, char *argv[]) {
	int i,j,num;
	char stuid[7]; //Matricula del estudiante//
	char nombre[100]; //Nombre del alumno//
	char apepa[100]; //Primer apellido//
	char apema[100]; //Segundo apellido//
	char Fecha[10]; //Fecha de nacimiento//
	char escue[30];//Nombre de la escuela//
	char  Grado[30]; //Grado del alumno//
	char carrera[30];//Carrera del alumno//
	char Genero[30];//Genero del alumno//
	
	printf("Cuantos alumnos desea regitrar:");
	scanf("%d",&num);
	while(num>=10 || num<0){
		printf("ERROR\ningrese otro numero:");
		scanf("%d",&num);
	}
	fflush(stdin);
	for(i=1;i<num;i++){
	printf("\nIngrese la matricula:");
	scanf("%[^\n]",&stuid[i]);
	fflush(stdin);
	for(j=num;j>=1;j--){
			printf("\n\nERROR\nMatricula repetida");
			printf("\n\nIngrese otra matricula:");
			scanf(" %s",&stuid[i]);}
	fflush(stdin);
	printf("Ingrese su nombre:");
	scanf("%[^\n]",&stuid[i]);;
	fflush(stdin);
	printf("Ingrese su apellido paterno:");
	scanf("%[^\n]",apepa);
	fflush(stdin);
	printf("Ingrese su apellido materno:");
	scanf("%[^\n]",apema);
	fflush(stdin);
	printf("Ingrese su fecha de nacimiento:");
	scanf("%[^\n]",Fecha);
	fflush(stdin);
	printf("Ingrese el nombre de su la institucion");
	scanf("%[^\n]",escue);
	fflush(stdin);
	printf("Ingrese su grado:");
	scanf("%[^\n]",Grado);
	fflush(stdin);
	printf("Ingrese su carrera:");
	scanf("%[^\n]",carrera);
	fflush(stdin);
	printf("Ingrese su genero:");
	scanf("%[^\n]",Genero);
	fflush(stdin);
}
	printf("\n\tRegistro");
	for(i=1;i<=num;i++){
		puts(stuid);
		puts(nombre);
		printf("Apellido paterno:%s\n",apepa);
		printf("Apellido materno:%s\n",apema);
		printf("Fecha de nacimiento:%s\n",Fecha);
		printf("Nombre de la institucion:%s\n",escue);
		printf("Grado:%s\n",Grado);
		printf("Carrera:%s\n",carrera);
		printf("Genero:%s\n",Genero);
	}
	
	return 0;
}
