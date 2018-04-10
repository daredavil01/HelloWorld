//sum of even numbers in arrray with pointer
#include<stdio.h>
#include<conio.h>
void main()
{
int a[60],n,i,*p,sum=0;
clrscr();
printf("enter total numbers");
scanf("%d",&n);
printf("enter %d elements in array",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
p=&a[0];
for(i=0;i<n;i++)
{
if(*p%2==0)
sum=sum+*p;
p++;
}
printf("sum:%d",sum);
getch();
}
