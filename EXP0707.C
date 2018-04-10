//2-d array compile time linear search
#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3]={{1,2,3},{4,5,6},{7,8,9}},i,j,n,k=0;
clrscr();
printf("enter no. to search");
scanf("%d",&n);
for(i=0;i<3;i++)
{	for(j=0;j<3;j++)
	{
	if(n==a[i][j])
	k++;
	}
}
if(k==0)
printf("NO RESULT FOUND");
else
printf("number is present %d times",k);
getch();
}

