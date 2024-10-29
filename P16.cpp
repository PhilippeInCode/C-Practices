#include<stdio.h>
#include<conio.h>
//FCM Sevilla 3 de Diciembre 2019
//P16
float cifra1;
//float cifra2;
int contador;
float resultado;
int main()
{
	printf("Pr%cctica 16 TIC2",160);
printf("\nEste programa se llama la mitad de un n%cmero",163);
printf("\nPor favor introduzca una cantidad:");
scanf("%f",&cifra1);
while(cifra1!=0)
{
resultado=cifra1/2;
printf("\nLa mitad de %.2f es: %.2f",cifra1,resultado);
contador++;
printf("\nPor favor introduzca una cantidad:");
scanf("%f",&cifra1);
}

printf("\nHa introducido %d cifras distintas de 0",contador);
printf("\nEste programa ha sido realizado por Felipe Chac%cn Montero",162);
getch();
return 0;

}
