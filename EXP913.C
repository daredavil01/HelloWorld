//length manually using pointer
#include<stdio.h>
#include<conio.h>
#include<string.h>
void length(char *);
void main()
{
char str[60],*ptr;
clrscr();
printf("enter string\n");
gets(str);
printf("\n add:\t %u",&str[0]);
ptr=&str[0];
length(ptr);
getch();
}
void length(char *ptr)
{
int i;
printf("\n add1:\t %u\t%c",ptr,*ptr);
for(i=0;i<60;i++)
{
printf("\n c:%c\t",*ptr);
if(*ptr=='\0')
{
break;
}
ptr++;
}
printf("length:%d",i);
}