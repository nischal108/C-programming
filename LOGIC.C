//logical operators  && and || or ! not
//c ma bollean nabhako le garda c am chai condition ko answer is either  0 or 1
//not is an unary operator as it only requires one operand
// increment and decrement operators are also unary operators| x++ increases the value of x by
//logical operator && || !



//          bitwise operator  & | ~ >> << ^           (bitwise and, bitwise or ......)
//logical operator le chai expression haru lai jodne kaam garxa ( 0 (false) or non zero (true))
// 5 && 9 gives answer 1 , kina bhane 5 is non zero matlab true same with 9 and true and true gives true so answer is one ( this is how logical operator works)
// 5 & 9   gives answer 5 ,esle chai bit by bit and garxa 5 and 9 are converted to 16 bit binary number and 16 ota and gate lagxa tya ra answer niklinxa
// similarly hamile  |   or gate ni use garna mixa
//   ~      eslai tilde bhaninxa
//   ^      c ma power ko function nei hunx atehi bhayera  ^  means exor ( exclusive or)   same input low output  , diff input high output
//   >>     this is a bit wise right shift operator  esle right tira shift garxa sab digit lai and the leftmost becomes 0 (vacant) and the rightmost falls ( harauxa)
//   <<     mathi ko ulto kaam garxa matlab left tira shift garxa
//  esto operator haru chai embedded system ko programming ma use hunxa like in robotics not in high level language


#include<stdio.h>
#include<conio.h>
void main()
{
//using increment operator
int x= 5, y=6,a,b;
clrscr();
a= x++;              // post increment operator  ( a  ko value chai 5 nei hunxa tara abaa arko choti dekhi chai x ko value 6 bhayo
		    // (if we use it to directly print suru ma print statement lai original x ko value dinxa ani background ma value badauxa , print chai original value hunxa
b= ++y;            //pre increment operator  ( b ko value nei 7 hunxa 6 wala yo statement bhanda mathi matra hunxa aba y ko value ni 7 bhayo ra b ma ni 7 aayo
		   // ( esma chai badne chai ho tara esle chai suru ma aafu lai badauxa ani print statement lai aafnu value dinxa so, yaha chai hamro print statement le badheko


x= x+20 ;          // ( requires more t states, slow hunxa)
x+=20;             //this is a shorthand expression for above statement( mathi ko statement ko more simpler and faster version)
// other shorthand are : -= ,  %=(x % =2 ---> x = x % 2 ), *=,  /=  x=y=20;( esle y ko value 20 hunxa  ra  x  ra y 2tai ko value 20 bhayo tara eni haru independent xa change in y doesn't affect the value in x as they are not relatable to each other , precedence ko aadhar ma right bata left tira solve gardai aaune )

sizeof(x);       // this shows the   memory size used by x
sizeof(3.45F);   // this shows the size of float data 3.45

getch();
}