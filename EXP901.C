//ptr scan and print
#include<stdio.h>
#include<conio.h>
void main()
{
int a,*ptr;
clrscr();
printf("enter number");
scanf("%d",&a);
ptr=&a;
printf("address of %u is %u",*ptr,&ptr);
getch();
}