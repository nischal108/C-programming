#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("enter the value of a and b : ");
scanf("%d%d",&a,&b);
if(a>b){
printf("%d is greater than %d ",a,b);
}
else{
printf("%d is greater than %d ",b,a);
}
getch();
}
