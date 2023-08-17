//wap to generate 1,2,4,7,11,........
#include<stdio.h>;
#include<conio.h>;
void main()
{
  int term=1,n=1,c=1;
  clrscr();
  printf("%d \n",term);
  up:
  if(n<10)
  {
  term+=c;
  printf("%d \n",term);
  c++;
  n++;
  goto up;
  }
getch();
}