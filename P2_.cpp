#include <stdio.h>
#include <conio.h>
//10-10-2019 FCM Sevilla
//P2
int cifra;
int resultado;
int main ()
{
printf ("Este programa pide una cantidad entera y devuelve el doble de la misma.");
printf ("\nPorfavor dame una cantidad entera:");
scanf("%d",&cifra);
resultado=cifra*2;
printf("El resultado es %d.",resultado);
getch ();
return 0;
}

