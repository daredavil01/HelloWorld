//structure student data compile time
#include<stdio.h>
#include<stdio.h>
#include<string.h>
struct student
{
long int roll_no;
char name[100];
char address[100];
long int contact;
};
struct student s1={1703096,"XYZ","xyz@ritindia.edu",1234567890};
void display(struct student s1);
void main()
{
clrscr();
display(s1);
getch();
}
void display(struct student s1)
{
printf("\nRoll no=%ld",s1.roll_no);
printf("\nName=%s",s1.name);
printf("\naddress=%s",s1.address);
printf("\nContact=%ld",s1.contact);
}