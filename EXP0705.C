//2-D array temp of 2 cities
#include<stdio.h>
#include<conio.h>
void main()
{
int a[4][4],i,j;
clrscr();
printf("enter 16 values of temprature for 2 cities");
for(i=0;i<4;i++)
{	for(j=0;j<4;j++)
	{
	scanf("%d",&a[i][j]);
	}
}
for(i=0;i<4;i++)
{	for(j=0;j<4;j++)
	{
	printf("\t%d",a[i][j]);
	}                \
	printf("\n");
}
getch();
}
