// wap to generate
// 0, 1, 1, 2, 3, 5, 8

#include<stdio.h>
#include<conio.h>
void main()
{
 int first=0,second=1,n,i=2;
 clrscr();
 printf("fibnacci series :\n %d \n %d\n",first,second);
 up:
 n=first+second;
 printf("%d \n",n);
 first=second;
 second=n;
 i++;
 if(i<10)
 goto up;
getch();
}