//copy string
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[60],str1[60];
clrscr();
printf("enter 1st string\n");
gets(str1);
strcpy(str,str1);
puts(str);
getch();
}