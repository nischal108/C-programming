//using symbbolic constant calculate the area of the circle.
//yehi ho hai constant declare gareko aba pi ko value tala change garna mildai
#include<stdio.h>
#include<conio.h>
#define PI 3.14 // symbolic constant
void main()
{
float r,a;
clrscr();
printf("enter the radius of the circle: ");
scanf("%f",&r);
a=PI*pow(r,2);
//c ma chai  hamro power operator xaina so we use a library function for that
printf("the area of the circle is %f ",a);
getch();
}