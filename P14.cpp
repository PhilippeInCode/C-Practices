#include<stdio.h>
#include<conio.h>
//FCM Sevilla 25 de Noviembre
//P14
int respuesta;  //variable para guardar la respuesta del usuario
int main()
{
printf("Por favor diga si quiere que salga el nombre del barrio por pantalla(s%c 1, no 0):",161);

scanf ("%d", &respuesta);

//Inicio de la estructura repetitiva “Mientras”

while(respuesta==1)
{

printf("Heli%cpolis", 162);

printf("\nPor favor diga si quiere que vuelva a salir el nombre del barrio por pantalla(s%c 1, no 0):",161);

scanf("%d", &respuesta);

}

//Fin de la estructura repetitiva “Mientras”

printf("Este programa finaliza en este punto. Gracias.");
printf("\nEste programa ha sido realizado por Felipe Chac%cn Montero",162);
getch();
return 0;	
}
