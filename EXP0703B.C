//subtraction of 2 2-D arrays
#include<stdio.h>
#include<conio.h>
void main()
{
int a[100][100],b[100][100],c[100][100],r,m,i,j;
clrscr();
printf("enter no. of rows and column");
scanf("%d%d",&r,&m);
printf("\nenter elements of first array");
for(i=0;i<r;i++)
{	for(j=0;j<m;j++)
	{
	scanf("%d",&a[i][j]);
	}
}
printf("\nenter elements of second array");
for(i=0;i<r;i++)
{	for(j=0;j<m;j++)
	{
	scanf("%d",&b[i][j]);
	}
}
for(i=0;i<r;i++)
{	for(j=0;j<m;j++)
	{
	c[i][j]=a[i][j]-b[i][j];
	}
}
for(i=0;i<r;i++)
{	for(j=0;j<m;j++)
	{
	printf("\t%d",c[i][j]);
	}
	printf("\n");

}
getch();
}
