//2-D array pass and calculate sum and display
#include<stdio.h>
#include<conio.h>
void sum(int a[][100],int,int);
void main()
{
int a[100][100],i,j,r,c;
clrscr();
printf("\nenter no. of rows and column");
scanf("%d%d",&r,&c);
printf("\nenter %d elements in array",r*c);
for(i=0;i<r;i++)
{	for(j=0;j<c;j++)
	{
	scanf("%d",&a[i][j]);
	}
}
sum(a,r,c);
getch();
}
void sum(int a[][100],int r,int c)
{
int i,j,sum=0;
for(i=0;i<r;i++)
{	for(j=0;j<c;j++)
	{
	sum=sum+a[i][j];
	}
}
printf("sum=%d",sum);
getch();
}


