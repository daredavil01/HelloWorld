//printf elements in arrray with pointer divisible by 5
#include<stdio.h>
#include<conio.h>
void main()
{
int a[60],n,i,*p;
clrscr();
printf("enter total numbers");
scanf("%d",&n);
printf("enter %d elements in array",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
p=&a[0];
printf("numbers divisible by 5 are:");
for(i=0;i<n;i++)
{
if(*p%5==0)
printf("\nvalue %d is stored at %u",*p,p);
p++;
}
getch();
}
