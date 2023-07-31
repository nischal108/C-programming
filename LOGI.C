// Wap to input marks of 5 subjects and decide if he has fialed or passed all the subject
#include<stdio.h>
#include<conio.h>
void main()
{
int m1,m2,m3,m4,m5;     //space halna mildaina bich ma
clrscr();printf("enter the marks of 5 subjects : ");        //, use gare space dinu parena
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);               //data halda space didai halne comma nahalne
if(m1>=40 && m2>=40 && m3>=40 && m4>=40 && m5>=40){
printf("passed");
}
else {
printf("failed");
}

getch();
}