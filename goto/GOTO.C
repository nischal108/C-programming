// wap to display all the numbers between 1 and 100 that are divisible by 5 and 7;

#include<stdio.h>
#include<conio.h>
void main(){
int n = 1;
clrscr();
hello:
if(n%5 == 0 && n%7==0)
printf("%d ",n);
n++;
if(n<=100)
goto hello;
getch();
}