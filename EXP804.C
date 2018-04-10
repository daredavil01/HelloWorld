//lenth of string
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char name[60];
int res;
clrscr();
printf("enter string\n");
gets(name);
res=strlen(name);
printf("\nlength=%d",res);
getch();
}

