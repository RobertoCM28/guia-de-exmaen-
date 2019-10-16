#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main (void){
float a;
int r1,r2,r3,r4,r5,r6,r7,r8,r9,r10,r11;
printf("Conozca la cantidad minima de billetes y monedas de su salario.\n");
printf("Introduce la cantidad de dinero:\n");	
scanf("%f",&a);

r1=a/1000;
r2=(fmod(a,1000))/500;
r3=(fmod(a,500))/200;
r4=(fmod(a,500)-(r3*200))/100;
r5=(fmod(a,100))/50;
r6=(fmod(a,50))/20;
r7=(fmod(a,50)-(r6*20))/10;
r8=(fmod(a,10))/5;
r9=(fmod(a,5))/2;
r10=(fmod(a,5)-(r9*2))/1;
r11=(fmod(a,1))/0.5;

printf("%d billetes de 1000.\n",r1);
printf("%d billetes de 500.\n",r2); 
printf("%d billetes de 200.\n",r3); 
printf("%d billetes de 100.\n",r4); 
printf("%d billetes de 50.\n",r5); 
printf("%d billetes de 20.\n",r6); 
printf("%d monedas de 10.\n",r7); 
printf("%d monedas de 5.\n",r8); 
printf("%d monedas de 2.\n",r9); 
printf("%d monedas de 1.\n",r10); 
printf("%d monedas de 0,5.\n",r11);   
}