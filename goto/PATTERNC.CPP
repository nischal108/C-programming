//wap to generate a series 5,16,8,4,2,1
#include<stdio.h>
#include<conio.h>
void main()
{
 float first=5,second=16,n,c=0;
 clrscr();
 printf("%f \n %f \n",first,second);
 top:
 n= second/2;
 second=n;
 printf("%f \n",n);
 c++;
 if(c<=10)
 goto top;

getch();
}