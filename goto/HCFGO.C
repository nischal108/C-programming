//wap to get two numbers from keyboard and calculate their hcf

#include<stdio.h>
#include<conio.h>
void main(){
int a,b,hcf;
clrscr();
printf("enter the numbers you would like to find the hcf of  :  ");
scanf("%d %d",&a,&b);
tech:
hcf = a%b;
if(hcf==0)
printf(" the hcf is %d",b);
else
{
a=b;
b=hcf;
goto tech;
}

getch();
}