//concentate manually
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,j,l1,l2;
char str[60],str1[60],str2[60];
clrscr();
printf("enter 1st string\n");
gets(str1);
printf("enter 2nd string\n");
gets(str2);
l1=strlen(str1);
l2=strlen(str2);
for(i=0;i<l1;i++)
{
str[i]=str1[i];
}
for(i=0,j=l1;i<l2;i++,j++)
{
str[j]=str2[i];
}
//str[l1+l2]='\0';
puts(str);
getch();
}
