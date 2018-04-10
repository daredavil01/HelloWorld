//sum of array elements
#include<stdio.h>
#include<conio.h>
void sum(int *,int);
void main()
{
int a[60],*p,m,i;
clrscr();
printf("ENTER ARRAY SIZE");
scanf("%d",&m);
printf("enter %d elements of array",m);
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}
p=&a[0];
sum(p,m);
getch();
}
void sum(int *p,int m)
{
int sum=0,i;
for(i=0;i<m;i++)
{
sum=sum+*p;
p++;
}
printf("sum=%d",sum);
}
