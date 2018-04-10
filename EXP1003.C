//structure cricket team
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct cricket
{
char player_name[100];
int age;
int odi_score;
};
struct cricket read(int);
void display(struct cricket c[5]);
void main()
{
int i;
struct cricket c1,c2,c[5];
clrscr();
for(i=0;i<5;i++)
{
c[i]=read(i);
}
display(c);
getch();
}
struct cricket read(int i)
{
struct cricket c;
printf("enter details of %d cricketer\n",i+1);
printf("enter player name\n");
scanf("%s",&c.player_name);
printf("enter age\n");
scanf("%d",&c.age);
printf("enter odi_score");
scanf("%d",&c.odi_score);
return c;
}
void display(struct cricket c[5])
{
int i;
for(i=1;i<6;i++)
{
printf("details of %d player are as follows:\n",i);
printf("name=%s\n",c[i].player_name);
printf("age:%d\n",c[i].age);
printf("odi_score:%d\n",c[i].odi_score);
}
}


