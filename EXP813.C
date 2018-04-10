//copy string manully
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[60],str1[60];
int i,len;
clrscr();
printf("enter 1st string\n");
gets(str1);
len=strlen(str1);
for(i=0;i<len;i++)
{
str[i]=str1[i];
}
str[len]='\0';
puts(str);
getch();
}