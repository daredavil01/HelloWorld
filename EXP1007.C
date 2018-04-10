//structure milk_dairy
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct milk_dairy
{
char customer_name[100];
int milk_per_day;
int no_of_days;
int bill;
};
struct milk_dairy read(int);
int Bill(int *,int *);
void display(struct milk_dairy b[5]);
void main()
{
struct milk_dairy b[5];
int i;
clrscr();
for(i=0;i<5;i++)
{
b[i]=read(i);
}
for(i=0;i<5;i++)
{
b[i].bill=Bill(&b[i].milk_per_day,&b[i].no_of_days);
}
display(b);
getch();
}
struct milk_dairy read(int i)
{
struct milk_dairy b;
printf("enter details of customer:%d\n",i+1);
printf("enter customer name:\n");
scanf("%s",&b.customer_name);
printf("enter milk consumed per day\n");
scanf("%d",&b.milk_per_day);
printf("enter no of days:\n");
scanf("%d",&b.no_of_days);
return b;
}
int Bill(int *ptr1,int *ptr2)
{
int a;
a=(*ptr1)*(*ptr2)*46;
return a;
}
void display(struct milk_dairy s[5])
{
int i;
for(i=0;i<5;i++)
{
printf("customer_name:%s\n",s[i].customer_name);
printf("%d\n",s[i].milk_per_day);
printf("%d\n",s[i].no_of_days);
printf("%d\n",s[i].bill);
}
}

