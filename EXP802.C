//compare string and print alphabetically
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[60];
char str1[60];
int res;
clrscr();
printf("enter 1st string");
gets(str);
printf("enter 2nd array");
gets(str1);
res=strcmp(str,str1);
if(res==0)
printf("%s\n%s",str,str1);
else if(res>0)
printf("%s\n%s",str1,str);
else
printf("%s\n%s",str,str1);
getch();
}