//read name and display it
//run time
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i;
char nm1[6];
clrscr();
printf("enter 5 characters");
for(i=0;i<6;i++)
{
scanf("%c",&nm1[i]);
}
for(i=0;i<6;i++)
{
printf("%c",nm1[i]);
}
getch();
}
