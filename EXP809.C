//c program to search string in string
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char *ch,str[60],str1[100];
clrscr();
printf("enter string:\n");
gets(str);
printf("enter string to search:\n");
gets(str1);
ch=strstr(str1,str);
if(ch==NULL)
printf("string is not present");
else
printf("string is present");
getch();
}