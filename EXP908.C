//print number of vowel and consonant in string
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[60],*ptr;
int i,m,c=0,v=0;
clrscr();
printf("enter string");
gets(str);
m=strlen(str);
printf("\nlength:%d",m);
ptr=&str[0];
for(i=0;i<m;i++)
{
if(*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u'||*ptr=='A'||*ptr=='E'||*ptr=='I'||*ptr=='O'||*ptr=='U')
v++;
else if((*ptr>64&&*ptr<91)||(*ptr>96&&*ptr<123))
c++;
ptr++;
}
printf("\nvowels:%d\nconsonant:%d",v,c);
getch();
}

