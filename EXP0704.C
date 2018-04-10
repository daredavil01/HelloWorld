//transpose of 2-D ARRAY
#include<stdio.h>
#include<conio.h>
void main()
{
int a[100][100],b[100][100],i,j,r,c;
clrscr();
printf("enter row 'r':");
scanf("%d",&r);
printf("enter column 'c':");
scanf("%d",&c);
printf("enter %d elements of array",r*c);
for(i=0;i<r;i++)
{	for(j=0;j<c;j++)
	{
	scanf("%d",&a[i][j]);
	}
}
for(i=0;i<r;i++)
{	for(j=0;j<c;j++)
	{
	b[j][i]=a[i][j];
	}
}
for(i=0;i<r;i++)
{	for(j=0;j<c;j++)
	{
	printf("\t%d",b[i][j]);
	}
	printf("\n");
}
getch();
}
