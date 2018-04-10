//2-D array pass and find maximum
#include<stdio.h>
#include<conio.h>
void largest(int a[][100],int,int);
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
largest(a,r,c);
getch();
}
void largest(int a[][100],int r,int c)
{
int i,j,max;
max=a[0][0];
for(i=0;i<r;i++)
{	for(j=0;j<c;j++)
	{
	if(i==0&&j==0)
	continue;
	if(max<a[i][j])
	max=a[i][j];
	}
}
printf("max=%d",max);
getch();
}


