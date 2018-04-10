//2-d array minimum value
#include<stdio.h>
#include<conio.h>
void main()
{
int a[100][100],i,j,r,c,min;
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
min=a[0][0];
for(i=0;i<r;i++)
{	for(j=0;j<c;j++)
	{
	if(i==0&&j==0)
	continue;
	if(min>a[i][j])
	min=a[i][j];
	}
}
printf("minimum among all %d elements is %d",r*c,min);
getch();
}