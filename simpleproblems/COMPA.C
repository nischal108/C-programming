// WAP TO INPUT THREE DIFFERENT NUMBERS AND PRINT THE SMALLEST ONE

#include<stdio.h>
#include<conio.h>
void main(){
 int a, b, c;
 clrscr();
 printf("enter the three numbers  : ");
 scanf("%d%d%d",&a,&b,&c);
 if(a<b)
 {
	if(a<c)
	{
		printf("%d",a);
	}
	else
	{
		printf("%d",c);
	}
 }
 else
 {
	printf("%d",b);
 }
getch();
}