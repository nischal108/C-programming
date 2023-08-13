// calculate sum and difference from the two numbers input by the user
//also the product, quotient and remainder
#include<stdio.h>
#include<conio.h>
void main(){
//declaring the necessary variables
int num1,num2;
int sum,difference,product,quotient,rem;
clrscr();
//asking the user to input two numbers
printf("enter the two numbers you would like to run operation on : ");
scanf("%d, %d",&num1,&num2);
//performing the necessary calculations
sum = num1 +num2;
difference = num1 - num2;
product = num1* num2;
quotient = num1 / num2;
rem = num1 % num2;
//displaying the result
printf("the sum : %d, difference: %d, product %d, quotient %d, and remainder : %d",sum, difference, product, quotient, rem);
getch();
}