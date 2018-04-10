//largest number in array using pointer and with RT with arguement
#include<stdio.h>
#include<conio.h>
int largest(int *,int);
void main()
{
int a[60],*ptr,n,i,res;
clrscr();
printf("enter array size\n");
scanf("%d",&n);
printf("enter %d elements",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
ptr=&a[0];
res=largest(ptr,n);
printf("largest=%d",res);
getch();
}
int largest(int *ptr,int n)
{
int i,res;
res=*ptr;
for(i=1;i<n;i++)
{
if(*ptr>res)
res=*ptr;
ptr++;
}
return res;
}