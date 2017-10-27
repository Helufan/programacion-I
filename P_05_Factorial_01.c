#include<stdio.h>
int factorial(float x)
{
	float n, factor;
	factor=1;
	for(n=x;n>1;n--)
	{
		factor=factor*n;
	}
	printf("El valor del factorial es:%f",factor);
	return factor;
}
int caratula()
{
	
	printf("\n\t\tUniversidad Nacional Autonoma de Mexico\n");
	printf("\tPrograma que calcula el factorial de un n%cmero entero positivo\n",130);
	printf("\n\n\tIntegrantes:\n\tGalvan Lugo Alberto Hazel\n\tLuis %cngel Hern%Cndez Flores\n",181,160);
	printf("\tMonreal Tovar Victor Armando\n\tSantiago Reyes Donovan Ariel\n\tRamirez Chavez Monica\n\n\n");
	system("pause > Hola");
	system("cls");
}
int programa()
{
	float x;
	printf("Ingrese un n%cmero entero positivo:",160);
	scanf("%f",&x);
	factorial(x);

}
int main()
{ 
	caratula();
	int respuesta;
	do{	system("cls");
		programa();
		printf("\nDesea evaluar un nuevo numero? Si=1 No=0:\t");
		scanf("%f",&respuesta);
		

	}while(respuesta==1);
}
