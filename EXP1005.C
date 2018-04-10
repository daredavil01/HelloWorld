//structure pass database
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
long int roll;
char name[100];
char address[100];
int marks;
};
struct student read(int i);
void display(struct student s[5]);
void main()
{
int i;
struct student s1,s2,s[5];
clrscr();
for(i=1;i<6;i++)
{
s[i]=read(i);
}
display(s);
getch();
}
struct student read(int i)
{
struct student s;
printf("enter details of %d student\n",i);
printf("enter name\n");
scanf("%s",&s.name);
printf("enter address\n");
scanf("%s",&s.address);
printf("enter roll no\n");
scanf("%d",&s.roll);
printf("enter marks\n");
scanf("%d",&s.marks);
return s;
}
void display(struct student s[5])
{
int i;
for(i=1;i<6;i++)
{
printf("details of %d student are as follows:\n",i);
printf("name=%s\n",s[i].name);
printf("address=%s\n",s[i].address);
printf("roll no:%d\n",s[i].roll);
printf("marks:%d\n",s[i].marks);
if(s[i].marks>40)
printf("PASS\n");
else
printf("FAIL\n");
}
}