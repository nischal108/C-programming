#include<stdio.h>
#include<conio.h>
void main(){
 int n, r, sum=0;
 clrscr();
 printf("enter the number");
 scanf("%d",&n);
 label:
 r= n %10;
 if(r%2 ==0)
 sum +=r;
 n =n/10;
 if(n>0)
 goto label;
 printf("sum of the even numbers is %d",sum);
getch();
}