#include<stdio.h>
#include<conio.h>
//FCM Sevilla 7 de Noviembre
//P9_V2
int cifra;
int main()
{
	printf("Pr%cctica 9_V2 TIC2",160);
	printf("\nPedir una cantidad entre 1 y 7");
	printf("\nPor favor introduzca una cantidad:");
	scanf("%d", &cifra);

	switch (cifra)
	{
	case 1:
		printf("Lunes");
		break;
	case 2:
		printf("Martes");
		break;
	case 3:
		printf("Mi%crcoles",130);
		break;
	case 4:
		printf("Jueves");
		break;
	case 5:
		printf("Viernes");
		break;
	case 6:
		printf("S%cbado",160);	
		break;
	case 7:
		printf("Domingo");
		break;
	default:
		printf("No es una cifra del 1 al 7");
	}
printf("\nEste programa ha sido realizado por Felipe Chac%cn Montero",162);
getch();
return 0;
}

