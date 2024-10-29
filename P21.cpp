#include<stdio.h>
#include<conio.h>
//FCM Sevilla 10 de Diciembre 2019
//P21
int n;
int contador=10;
int main()
{
printf("Pr%cctica 21 TIC2\n",160);
	printf("\nEste programa te pide una cifra y te devuelve su tabla de multiplicar");	
	printf("\nIntroduzca la cifra de la que desea generar la tabla de multiplicar:");
	scanf("%d",&n);
	
	while(contador>0)
	{
		printf("%d x %d = %d",n , contador,n*contador);
		contador --;
		printf("\n");
	}
	
	
printf("\nEsta pr%cctica ha sido realizada por Felipe Chac%cn Montero",160,162);	
getch ();	
return 0;
}
