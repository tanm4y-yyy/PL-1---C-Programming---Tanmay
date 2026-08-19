#include <stdio.h>
#include <conio.h>
void main()
{
 int a,b,temp;
 clrscr();
 a=111;
 b=222;
 printf("\n Before swapping:");
 printf("\n a=%d,b=%d\n",a,b);
 temp=a;
 a=b;
 b=temp;
 printf("\n After swapping:");
 printf("\na=%d,b=%d\n",a,b);
 getch();
 }