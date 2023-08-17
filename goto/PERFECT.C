// wap to find id the entered number is a perfect number or not
#include<stdio.h>
#include<conio.h>
void main(){
 int n, i=1, sum=0;
 clrscr();
 printf("enter the number : ");
 scanf("%d",&n);
 up:
 if(n%i==0)
 sum+=i;
 i++;
 if(i<n)
 goto up;
 if(n==sum)
 printf("perfect");
 else
 printf("not perfect");
getch();
}