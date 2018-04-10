//avg of all elements in array
#include<stdio.h>
#include<conio.h>
void main()
{
int a[100][100],i,j,sum=0,r,c,avg;
clrscr();
printf("enter r&c");
scanf("%d%d",&r,&c);
printf("enter %d elements in array",r*c);
for(i=0;i<r;i++)
{	for(j=0;j<c;j++)
	{
	scanf("%d",&a[i][j]);
	sum=sum+a[i][j];
	}
}
avg=sum/(r*c);
printf("avg of %d elements=%d",r*c,avg);
getch();
}



