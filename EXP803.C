//palindrome
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[60],str1[100];
int res;
clrscr();
printf("enter string\n");
gets(str);
strcpy(str1,strrev(str));
//puts(str1);
puts(strrev(str));
res=strcmp(str,str1);
printf("\nres=%d",res);
if(res==0)
{
printf("\nstring is palindrome");
}
else
{
printf("\nnot palindrome");
}
getch();
}