// WAP TO INPUT THE MARK OF A SUBJECT AND DECIDE WHETHER THE STUDENTS IS PASS OR FAIL IN THE SUBJECT

#include<stdio.h>
#include<conio.h>
void main(){
 int mark,i;
 clrscr();
 for(i=1;i<=3;i++)
 {
 printf("enter the mark you have obtained = ");
 scanf("%d",&mark);
 if(mark<40){
 printf("sorry!, you have failed the exam \n \n");
 }
 else{
 printf("congratulations ! you have passed the exam \n \n");
 }
}
getch();
}