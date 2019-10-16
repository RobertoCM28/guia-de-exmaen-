#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
int main (void){
int n,r1,r2;
float r3;
printf("Conozca la equivalencia de una cantidad de segundos a horas.\n");
printf("Introduzca los segundos:\n");
scanf("%d",&n);
r1=n/3600;
r2=(n%3600)/60;
r3=(fmod(r2,60))/60;
printf("El tiempo en segundos introducido es igual a %d horas con %d minutos y %f segundos.\n",r1,r2,r3);
}