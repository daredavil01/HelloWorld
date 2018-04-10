//2-d array maximum value
#include<stdio.h>
#include<conio.h>
void main()
{
int a[100][100],i,j,r,c,max;
clrscr();
printf("enter no. of rows and column resp");
scanf("%d%d",&r,&c);
printf("enter %d array elements",r*c);
for(i=0;i<r;i++)
{	for(j=0;j<c;j++)
	{
	scanf("%d",&a[i][j]);
	}
}
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
printf("maximum among all %d elements is %d",r*c,max);
getch();
}