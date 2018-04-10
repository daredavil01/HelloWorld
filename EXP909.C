//lenth of string using pointer
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char name[60],*ptr;
int res;
clrscr();
printf("enter string");
gets(name);
strcpy(ptr,name);
res=strlen(ptr);
printf("length=%d",res);
getch();
}

