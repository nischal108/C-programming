
// wap to find which division did a student obtain from the input percentage using only if statement

#include<stdio.h>
#include<conio.h>
void main(){
float per;
clrscr();
printf("enter the percent you obtained : ");
scanf("%f",&per);
if(per>=80)
{
printf("distinction");
}
if(80>per && per>=60)
{
printf("first division");
}
if(60>per && per>=40)
{
printf("second division");
}
if(40>per)
{
printf("failed");
}
getch();
}