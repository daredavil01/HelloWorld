//compare string
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[60];
char str1[60];
int res;
clrscr();
printf("enter 1st string\n");
gets(str);
printf("enter 2nd array\n");
gets(str1);
res=strcmp(str,str1);
if(res==0)
printf("\nboth strings are equal");
else
printf("\nstrings are not equal");
getch();
}