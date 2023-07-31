#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
float r,a;
printf("enter the radius of the circle: ");
scanf("%f",&r);
a=(2*(22/7)*r*r);
printf("the area of the circle is %f ",a);
getch();
}