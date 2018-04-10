//additiion,subtraction,multi,division,module of 2 2-D arrays
#include<stdio.h>
#include<conio.h>
void add();
void sub();
void multi();
void division();
void module();
void main()
{
int n;
clrscr();
printf("enter operation");
printf("\nenter add:0\nsub:1\nmulti:2\ndivision:3\nmodule:4");
scanf("%d",&n);
switch(n)
{
case 0:
add();
break;
case 1:
sub();
break;
case 2:
multi();
break;
case 3:
division();
break;
case 4:
module();
}
getch();
}
void add()
{
int a[100][100],b[100][100],c[100][100],r,m,i,j;
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
	c[i][j]=a[i][j]+b[i][j];
	}
}
for(i=0;i<r;i++)
{	for(j=0;j<m;j++)
	{
	printf("\t%d",c[i][j]);
	}
	printf("\n");
}
}
void sub()
{
int a[100][100],b[100][100],c[100][100],r,m,i,j;
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
}
void multi()
{
int a[100][100],b[100][100],c[100][100],r,m,i,j,k;
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
		for(k=0;k<r;k++)
		{
		c[i][j]=a[i][k]*b[k][j];
		}
	}
}
for(i=0;i<r;i++)
{	for(j=0;j<m;j++)
	{
	printf("\t%d",c[i][j]);
	}
	printf("\n");
}
}
void division()
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
	c[i][j]=a[i][j]/b[i][j];
	}
}
for(i=0;i<r;i++)
{	for(j=0;j<m;j++)
	{
	printf("\t%d",c[i][j]);
	}
	printf("\n");
}
}
void module()
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
	c[i][j]=a[i][j]+b[i][j];
	}
}
for(i=0;i<r;i++)
{	for(j=0;j<m;j++)
	{
	printf("\t%d",c[i][j]);
	}
	printf("\n");
}
}


