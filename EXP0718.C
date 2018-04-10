//sort out primme number from 2-D array
#include<stdio.h>
#include<conio.h>
void main()
{
int a[100][100],i,j,r,c,k;
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
printf("\nprime numbers are:");
for(i=0;i<r;i++)
{	for(j=0;j<c;j++)
	{
	for(k=2;k<a[i][j];k++)
	{
	if(a[i][j]%k==0)
	break;
	}
	if(k==a[i][j])
	printf("\na[%d][%d]:%d",i,j,a[i][j]);
	}
}
getch();
}
