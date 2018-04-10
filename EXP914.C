//fibonacii series
#include<stdio.h>
#include<conio.h>
int* fib(int);
void main()
{
int n,*ptr,i;
clrscr();
printf("enter size\n");
scanf("%d",&n);
ptr=fib(n);
for(i=0;i<n;i++)
{
printf("a[%d]:%d\n",i,*ptr);
ptr++;
}
getch();
}
int* fib(int n)
{
int *ptr,a[50],i;
a[0]=0;
a[1]=1;
for(i=2;i<n;i++)
{
a[i]=a[i-1]+a[i-2];
}
ptr=&a[0];
return ptr;
}

