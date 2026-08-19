#include<stdio.h>
#include<conio.h>
void main()
{
int rollnum;
float per;
char grade;
printf("\n Enter student Grade:");
scanf("%d",&rollnum);
printf("\n Enter student percentage:");
scanf("%f",&per);
printf("\n Enter student Grade:");
scanf("%c",&grade);
printf("\n-----	Student Information -----\n");
printf("\n Roll number is:%d",rollnum);
printf("\n Percentage is:%f",per);
printf("\n Grade :%c",grade);
getch();
}