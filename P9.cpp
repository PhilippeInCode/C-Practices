#include<stdio.h>
#include<conio.h>
//FCM Sevilla 5 de Noviembre 
//P9
int cifra;
int main()
{

printf("Pr%cctica 9",160);	
printf("\nIntroduzca una cantidad entre 1 y 7");
printf("\nPor favor introduzca una cantidad:");
scanf("%d" , &cifra );

 if(cifra==1)
{
	printf("\nLunes");
}
else
{
		
		
		 if(cifra==2)
		{
			printf("\nMartes");
		}

		else
		{

			if(cifra==3)
			{
				printf("\nMi%crcoles", 130);
				}

				else

				{

					if(cifra==4)
					{
						printf("\nJueves");
					}

					else

						{
						if(cifra==5)
						{
						printf("\nViernes");	
						}

						else
						{



							if(cifra==6)
							{
							printf("\nS%cbado", 160);
							}

							else

							{
							printf("\nDomingo");
						}
					}

				}

			}
		}

	}	    	
			
printf("\nEste trabajo ha sido realizado por Felipe Chac%cn Montero",162);
getch();
return 0;
}
