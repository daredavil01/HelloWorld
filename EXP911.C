//increment arrray element by 1 with pointer and print
#include<stdio.h>
#include<conio.h>
int* inc(int *);
void main()
{
int a[60],n,i,*ptr,j,*str;
clrscr();
printf("enter total numbers");
scanf("%d",&n);
printf("enter %d elements in array",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
ptr=a;
for(i=0;i<n;i++)
{
str=inc(ptr);
printf("\na[%d]:%d",i,*str);
ptr++;
}
getch();
}
int* inc(int *ptr)
{
ptr++;
return ptr;
}

