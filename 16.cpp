#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main (void){
int a=9,i;
for (i=0;i<100;i++){
 if((a==a%4)||(i%2)==0){
  printf("%d\n",a);
  }
 }
}