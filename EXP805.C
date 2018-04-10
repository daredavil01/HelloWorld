//concentate 2 strings
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str1[60],str2[60];
clrscr();
printf("enter 1st string\n");
gets(str1);
printf("enter 2nd string\n");
gets(str2);
strcat(str1,str2);
puts(str1);
getch();
}