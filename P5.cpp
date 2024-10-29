#include<stdio.h>
#include<conio.h>
#include<math.h>
//FCM Sevilla 22 Octubre 2019
//P5
float radio;
float volumen;
#define PI 3.141592
int main ()
{
printf("Este programa pide el radio de una esfera y te devuelve el volumen de una esfera\n");
printf("Por favor introduzca una cantidad entera:");
scanf("%f", &radio);
volumen=(4/3)*PI*pow(radio,3);
printf("El volumen es %.3f",volumen);
printf("\nEste programa ha sido realizado por Felipe Chac%cn Montero",162);
getch();
return 0;
}

