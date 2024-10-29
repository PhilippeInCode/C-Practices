#include<stdio.h>
#include<conio.h>
//FCM Sevilla 7 de Noviembre
//P11
int cifra1;
int cifra2;
int main()
{
	printf("Pr%cctica 11 TIC2",160);
	printf("\nPedir dos cantidades enteras y decir el mayor o si son iguales");
	printf("\nPor favor introduzca una cantidad: ");
	scanf("%d" , &cifra1);
	printf("\nPor favor introduzca una cantidad: ");
	scanf("%d" , &cifra2);

	if (cifra1==cifra2)
	{
		printf("Son iguales");
	
	}
	else
		{
					if(cifra1>cifra2)	
					{
						
					printf("%d es mayor que %d", cifra1, cifra2);
					
					}
					
				
					
					else
					{
					printf("%d es mayor que %d", cifra2, cifra1);									
					}
		}
					
printf("\nEsta pr%cctica ha sido realizada por Felipe Chac%cn Montero",160,162);		
getch();
return 0;
   }
