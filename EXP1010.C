//nested structure concept
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct
student_college_detail
{
int college_id;
char college_name[10];
};
struct student_detail
{
int id;
char name[20];
int percentage;
struct
student_college_detail
clg_data;
}stu_data;
struct student_detail read(int);
void display(struct student_detail s[2]);
void main()
{
int i;
struct student_detail s[2];
struct student_college_detail c;
clrscr();
for(i=0;i<2;i++)
{
s[i]=read(i);
}
display(s);
getch();
}
struct student_detail read(int i)
{
struct student_detail s;
printf("enter details of student:%d\n",i+1);
printf("enter id:\n");
scanf("%d",&s.id);
printf("enter 	name:\n");
scanf("%s",&s.name);
printf("enter percentage:\n");
scanf("%d",&s.percentage);
printf("enter college id:\n");
scanf("%d",&s.clg_data.college_id);
printf("enter college name:\n");
scanf("%s",&s.clg_data.college_name);
return s;
}
void display(struct student_detail s[2])
{
int i;
for(i=0;i<2;i++)
{
printf("details of student:%d\n",i+1);
printf("id:%d\n",s[i].id);
printf("name:%s\n",s[i].name);
printf("percentage:%d\n",s[i].percentage);
printf("college_id:%d\n",s[i].clg_data.college_id);
printf("college_name:%s\n",s[i].clg_data.college_name);
}
}

