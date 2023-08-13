#include<stdio.h>
#include<conio.h>
void main(){
int n= 1, sum = 0;
top:
sum= sum+n;
n++;
if(n<=100)
goto top;
printf("%d",sum);
getch();
}