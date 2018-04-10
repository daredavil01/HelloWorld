//swap call by referance
#include<stdio.h>
#include<conio.h>
void swap(int *,int *);
void main()
{
int a,b;
clrscr();
printf("enter a and b");
scanf("%d%d",&a,&b);
printf("\nBefore swapping:\na:%d\nb:%d",a,b);
swap(&a,&b);
printf("\nAfter swapping:\na:%d\nb:%d",a,b);
getch();
}
void swap(int *a,int *b)
{
int c;
c=*a;
*a=*b;
*b=c;
}
