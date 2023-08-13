#include<stdio.h>
#include<conio.h>
int main(){
 float percent, tmark, mark1, mark2, mark3, mark4, mark5;
 printf("enter the mark you have obtaine in  5 subjects : ");
 scanf("%d%d%d%d%d",&mark1,&mark2, &mark3, &mark4, &mark5);
 tmark = mark1+mark2+mark3+mark4+mark5;
 percent = (tmark/500)*100;
if(percent>=80)
printf("distinction");
else if (percent>=60)
printf("first division");
else if(percent>=40)
printf("second division");
else
printf("failed");
return 0;
}