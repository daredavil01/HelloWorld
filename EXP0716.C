//search element in given array
#include<stdio.h>
#include<conio.h>
void main()
{
int a[100][100],i,j,r,c,n,k=0;
clrscr();
printf("enter r&c");
scanf("%d%d",&r,&c);
printf("enter %d elements in array",r*c);
for(i=0;i<r;i++)
{	for(j=0;j<c;j++)
	{
	scanf("%d",&a[i][j]);
	}
}
printf("enter number to search");
scanf("%d",&n);
for(i=0;i<r;i++)
{	for(j=0;j<c;j++)
	{
	if(n==a[i][j])
	k++;
	}
}
if(k==0)
printf("NO RESULT FOUND!\ntry again!");
else
printf("number is present %d times",k);
getch();
}