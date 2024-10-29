#include<stdio.h>
#include<conio.h>
//FCM Sevilla 19 de Diciembre 2019
//P24
int contador;
int numero=1;
int main()
{
	do
	{
	for(contador=1;contador<=10;contador++)
		{
			printf("%d x %d = %d",numero,contador,numero*contador);	
			printf("\n");		
		}
		numero++;
		printf("\n");
	}while(numero<3);
printf("\nEsta pr%cctica ha sido realizada por Felipe Chac%cn Montero",160,162);	
getch ();	
return 0;	
}
