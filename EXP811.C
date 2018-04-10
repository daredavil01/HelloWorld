//lengh using manual fxn.
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[60];
int k=0,i;
clrscr();
printf("enter string\n");
gets(str);
for(i=0;i<60;i++)
{
k++;
if(str[i]=='\0')
break;
}
printf("\nlength=%d",k-1);
getch();
}
