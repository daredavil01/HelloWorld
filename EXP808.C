//swap 2 strings
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[60],str1[60],str2[60];
clrscr();
printf("enter 1st string\n");
gets(str1);
printf("enter 2nd string\n");
gets(str2);
strcpy(str,str1);
strcpy(str1,str2);
strcpy(str2,str);
puts(str1);
printf("\n");
puts(str2);
getch();
}