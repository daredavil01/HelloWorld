//departmental structure
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct dept
{
char dept_name[100];
int dept_est_year;
int no_of_students;
};
void display(struct dept d[5]);
void main()
{
struct dept d[5];
int i,total=0;
clrscr();
for(i=0;i<5;i++)
{
printf("enter details of %dst dept",i+1);
printf("enter dept name\n");
scanf("%s",&d[i].dept_name);
printf("enter dept_est_year\n");
scanf("%d",&d[i].dept_est_year);
printf("enter no. of students\n");
scanf("%d",&d[i].no_of_students);
}
display(d);
for(i=0;i<5;i++)
{
total=total+d[i].no_of_students;
}
printf("\ntotal no. of students in all dept:%d\n",total);
getch();
}
void display(struct dept d[5])
{
int i;
for(i=0;i<5;i++)
{
printf("details of dept no. %d\n",i);
puts(d[i].dept_name);
printf("dept_est_year:%d",d[i].dept_est_year);
printf("number of student:%d",d[i].no_of_students);
}
}

