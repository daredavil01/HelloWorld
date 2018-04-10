//max among 2 with RT with arguement using pointer
#include<stdio.h>
#include<conio.h>
int max(int *,int *);
void main()
{
int a,b,res;
clrscr();
printf("enter a and b");
scanf("%d%d",&a,&b);
res=max(&a,&b);
printf("max=%d",res);
getch();
}
int max(int *aa,int *bb)
{
int res;
if(*aa>*bb)
res=*aa;
else if(*bb>*aa)
res=*bb;
return res;
}

