//string with address
#include<stdio.h>
#include<conio.h>
void main()
{
char str[60],*ptr;
int i,l;
clrscr();
printf("enter string\n");
gets(str);
l=strlen(str);
ptr=&str[0];
for(i=0;i<l;i++)
{
printf("\n%c:%u",*ptr,ptr);
ptr++;
}
getch();
}
