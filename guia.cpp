#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main ()
{
//Ejercicio 1
int a=4, b=10, c=4;
float z, d =1.1;
printf("Ejercicio 1\n");
printf("Realiza la siguinete operacion:z=a+b/c*d \n");
z= a+b/c*d;
printf("El valor de la operacion es:%f \n",z);
// ejercicio 2
printf("Ejercicio 2\n");
int n=2, m=5 ,g;
printf("Realiza las siguientes operaciones \n");
    g=(n+m)==2;
    printf("(n+m)==2:%d\n",g);
    g=(n>m)==!(m==5);
printf("(n>m)==!(m==5):%d\n",g);
    g=(m%n)>5;
printf("(m%n)>5:");
printf("%d",g);
    g=((m-n)*10)%4==1;
printf("((m-n)*10)%4:%d\n",g);
//ejercicio 3
printf("Edjercicio 3\n");
    int x=2, y=80, k=3, h;
    h=x==1;
 printf("x==1:%d\n",h);
    h=!(y==80);
 printf("!(y==80):%d\n",h);
    h=(x>y)||(z<x*2);
printf("(x>y)||(z<x*2):%d\n",h);
    h=(y%x)>(x==1);
printf("(y%x)>(x==1):%d\n",h);
//ejercicio.-4
{
  printf("ejercico 4\n");
	float altura, peso;
	int edad;

	printf("escriba su altura en metros:\n");
	scanf("%f",&altura);
	printf("escriba su edad:\n");
	scanf("%d",&edad);

	peso=altura*100-100+.10*edad*.9;
	printf("el peso recomendado es:%f\n",peso);
}

//ejercicio.-6
  printf("ejercicio 6\n");
  {
	int num,k;
	printf("Escriba un numero:\n");
	scanf("%d",&num);
	k=num%2;
	if(k==0){
	printf("el numero es par\n");
	} else{
		printf("el numero es impar\n");
		}
	}
//ejercicio.-7
  printf("ejercico7\n");
  int num1, num2, num3, mayor, menor;
	printf("escriba el primer numero:");
	scanf("%d",&num1);
	printf("escriba el sgundo numero:");
	scanf("%d",&num2);
	printf("escriba el tercer numero:");
	scanf("%d",&num3);
	if(num1>num2){
		if(num1>num3){
			mayor=num1;
		}
		else {
			mayor=num3;
		}
	}
	else {
		if(num2>num3){
			mayor=num2;
		}
		else {
			mayor=num3;
		}
	}
		printf("el mayor de los 3 es: %d\n",mayor);
{
int cuota,litros,pago;
printf("ejercicio10");
printf("Introduzca la cantidad de litros gastados en el mes:\n");
scanf("%d",&litros);
if(litros<=50){
cuota=0; 
 }
else{
 if(50<litros&&litros<200){
 cuota=10*litros; 
  }
 else
 cuota=20*litros;	
 }
if(cuota<200){
 pago=200;
 }
pago=cuota;
printf("La cantidad de dinero a pagar es de %d pesos.\n",pago); 
}
//ejercicio.-11
printf("ejercicio 11");
{
float n,max=0,min=9999999,d,cont=0,med; 
printf("Maximo,minimo y media de una lista de 10 numeros.\n");
for(d=1;d<=10;d++){
 printf("Introduce un numero:");
 scanf("%f",&n);
  if(n>max){
  max=n; 
  }
  if(n<min){
  min=n;
  }        
 cont=cont+n;
 }
med=cont/d;
printf("El numero mayor es %f y el menor es %f.\nLa media es: %f.",max,min,med);
}

//ejercicio 13
{
int n,d,i;
printf("Conozca si un numero es primo o no.\n");
printf("Introduce un numero:\n");
scanf("%d",&n);
d=0;
for(i=1;i<=n;i++){
 if(n%i==0)
 d++;
 }
if(d==2){
 printf("El numero %d es primo.\n",n);
 }
else
printf("El numero %d no es primo.\n",n); 
}
}
