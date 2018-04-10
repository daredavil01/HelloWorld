//2-d array run time matrix print
#include<stdio.h>
#include<conio.h>
void main()
{
int a[100][100],i,j,r,c;
clrscr();
printf("enter no. of rows and column resp");
scanf("%d%d",&r,&c);
printf("enter array elements");
for(i=0;i<r;i++)
{	for(j=0;j<c;j++)
	{
	scanf("%d",&a[i][j]);
	}
}
for(i=0;i<r;i++)
{	for(j=0;j<c;j++)
	{
	printf("\t%d",a[i][j]);
	}
	printf("\n");
}
getch();
}