//array with address
#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],n,i,*b;
clrscr();
printf("enter array size");
scanf("%d",&n);
printf("enter %d elements of array",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
b=&a[0];
for(i=0;i<n;i++)
{
printf("\n%d:%u",*b,b);
b++;
}
getch();
}
