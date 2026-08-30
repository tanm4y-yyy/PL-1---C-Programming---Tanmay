//Program-8- write a c program to swap two no. temprory variable
//user define value




#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,temp;
clrscr();
printf("\n Enter first number:");
scanf("%d",&a);
printf("\n Enter second number:");
scanf("%d",&b);
temp=a;
a=b;
b=temp;
printf("\n After swapping:\n");
printf("\n First number=%d\n",a);
printf("\n Second number=%d\n",b);
getch();
}