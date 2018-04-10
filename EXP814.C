//compare string manually
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[60];
char str1[60];
int i,l1,l2,l3;
clrscr();
printf("enter 1st string\n");
gets(str);
printf("enter 2nd string\n");
gets(str1);
l1=strlen(str);
l2=strlen(str1);
if(l1==l2)
l3=l1;
else if(l1>l2)
l3=l1;
else
l3=l2;
for(i=0;i<l3;i++)
{
if(str[i]!=str1[i])
break;
}
if(i<l3)
printf("\nnot equal");
else if(i==l3)
printf("equl strings");
getch();
}