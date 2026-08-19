#include<stdio.h>
#include<conio.h>
void main()
{
float radius, area;
clrscr();
printf("\n Enter the radius of the circle:");
scanf("%f",& radius);
area=(3.14*radius*radius);
printf("\n Area of circle = %f", area);
getch();
}