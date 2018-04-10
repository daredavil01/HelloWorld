//merge 2 2-D arrays to form a single array
#include<stdio.h>
#include<conio.h>
void main()
{
int a[100][100],b[100][100],c[100][100],i,j,k,l,r1,c1,r2,r3;
clrscr();
printf("enter no. of rows and column in first array");
scanf("%d%d",&r1,&c1);
printf("enter no. of rows in second array");
scanf("%d",&r2);
r3=r1+r2;
printf("enter first array %d elements",(r1*c1));
for(i=0;i<r1;i++)
{	for(j=0;j<c1;j++)
	{
	scanf("%d",&a[i][j]);
	}
}
printf("\nenter second array %d elements",(r2*c1));
for(i=0;i<r2;i++)
{	for(j=0;j<c1;j++)
	{
	scanf("%d",&b[i][j]);
	}
}
for(i=0;i<r1;i++)
{	for(j=0;j<c1;j++)
	{
	c[i][j]=a[i][j];
	}
}
for(i=0,k=r1;i<r2;i++,k++)
{	for(j=0;j<c1;j++)
	{
	c[k][j]=b[i][j];
	}
}
for(i=0;i<r3;i++)
{	for(j=0;j<c1;j++)
	{
	printf("\t%d",c[i][j]);
	}
	printf("\n");
}
getch();
}