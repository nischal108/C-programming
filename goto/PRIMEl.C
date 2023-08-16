#include<stdio.h>
#include<conio.h>
void main(){
 int a,b,hcf,i;
 clrscr();
 scanf("%d %d",&a,&b);
 hcf=1;
 i=1;
 tech:
 if(i<=a)
 {
 i++;
 if(a %i==0 && b%i==0)
 hcf=i;
 goto tech;
 }
 printf("%d",hcf);
getch();
}