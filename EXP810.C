//search in string
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[60],l,i,ch,k=0;
clrscr();
printf("enter string\n");
gets(str);
l=strlen(str);
printf("enter chararacter to search\n");
scanf("%c",&ch);
for(i=0;i<l;i++)
{
if(str[i]==ch)
k++;
}
if(k==0)
printf("NO RESULT FOUND");
else
printf("character is present %d times",k);
getch();
}
