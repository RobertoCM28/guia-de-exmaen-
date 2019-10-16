#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int main (void){
int x=12,j=5,k=0;
if(0==x%4){
for(j=0;j<10;j=j+4){
k=k+j;
 }
}
else{
for(j=0;j<10;j=j+2){
k=k+j;
  }
 }
printf("El valor de K es:%d\n",k);
}