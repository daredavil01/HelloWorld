//sort out even-odd from 2-D array
#include<stdio.h>
#include<conio.h>
void main()
{
int a[100][100],i,j,r,c;
clrscr();
printf("\nenter no. of rows and column");
scanf("%d%d",&r,&c);
printf("\nenter %d elements",r*c);
for(i=0;i<r;i++)
{	for(j=0;j<c;j++)
	{
	scanf("%d",&a[i][j]);
	}
}
printf("\neven nummbers are:");
for(i=0;i<r;i++)
{	for(j=0;j<c;j++)
	{
	if(a[i][j]%2==0)
	printf("\na[%d][%d]:%d",i,j,a[i][j]);
	}
}
printf("odd numbers are:");
for(i=0;i<r;i++)
{	for(j=0;j<c;j++)
	{
	if(a[i][j]%2==1)
	printf("\na[%d][%d]:%d",i,j,a[i][j]);
	}
}
getch();
}
