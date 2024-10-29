#include<stdio.h>
#include<conio.h>
//FCM Sevilla 7 de Noviembre	
//P10	
int cifra;
int main()
{
printf("Pr%cctica 10. TIC2",160);
printf("\nEste programa pide una cifra y tiene que indicar si esta cifra es 0,1 u otra cifra distinta");
printf("\nPor favor introduzca una cifra:");	
scanf("%d", &cifra);
switch (cifra)
{
case 0:
printf("Es cero");
break;
case 1:	
printf("Es uno");
break;
default:
printf("No es un 1 ni un 0");
}
printf("\nEste trabajo ha sido realizado por Felipe Chac%cn Montero",162);
getch();
return 0;
}

