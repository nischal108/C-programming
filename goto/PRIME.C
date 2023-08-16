#include<stdio.h>
#include<conio.h>
void main(){
 int n,i;
 clrscr();
 printf("enter the number : ");
 scanf("%d",&n);
 i=2;
 label:
 if(n %i ==0)
	 printf("composite");
 else
 {
	 i++;
	 if(i<=n/2)
	 goto label;
	 printf("prime");
 }
getch();
}