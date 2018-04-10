//structure company
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct company
{
char company_name[100];
int est_year;
int no_of_employees;
};
struct company read(int);
int modify(int *);
void display(struct company c[2]);
void main()
{
struct company c[2];
int i;
clrscr();
for(i=0;i<2;i++)
{
c[i]=read(i);
}
display(c);
for(i=0;i<2;i++)
{
c[i].no_of_employees=modify(&c[i].no_of_employees);
}
printf("MODIFIED DETAILS OF COMPANY ARE AS FOLLOWS\n:");
for(i=0;i<2;i++)
{
printf("details of company:%d are:\n",i+1);
printf("company_name:%s\n",c[i].company_name);
printf("est_year:%d\n",c[i].est_year);
printf("no_of_employees:%d\n",c[i].no_of_employees);
}

getch();
}
struct company read(int i)
{
struct company c;
printf("enter  details of compnay:%d\n",i+1);
printf("enter company name:\n");
scanf("%s",&c.company_name);
printf("enter est_year\n");
scanf("%d",&c.est_year);
printf("enter no of employees\n");
scanf("%d",&c.no_of_employees);
return c;
}
int modify(int *a)
{
int res;
res=*a*2;
return res;
}
void display(struct company c[2])
{
int i;
for(i=0;i<2;i++)
{
printf("details of company:%d are:\n",i+1);
printf("company_name:%s\n",c[i].company_name);
printf("est_year:%d\n",c[i].est_year);
printf("no_of_employees:%d\n",c[i].no_of_employees);
}
}