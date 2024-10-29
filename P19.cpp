#include<stdio.h>
#include<conio.h>
//FCM Sevilla 5 de Diciembre 2019
//P19
char letra;
int main()
{
printf("Pr%cctica 18 TIC2\n",160);
	printf("Este programa pide una letra que sea S o N");
	printf("\nPor favor introduzca una letra:");
scanf("%c",&letra);
while(letra!='n'&&letra!='s')
{
	printf("La letra no es ni N ni S");
	printf("\nPor favor introduzca S o N y no otra cosa:");
fflush(stdin);
scanf("%c",&letra);
}
	printf("Has introducido %c",letra);
	printf("\nFin del programa.");
printf("\nEsta pr%cctica ha sido realizada por Felipe Chac%cn Montero",160,162);	
getch ();	
return 0;
}
