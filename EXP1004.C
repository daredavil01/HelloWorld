//structure book store
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct store
{
char book_title[100];
char book_author[100];
int copies;
int price;
};
struct store read(int);
void display(struct store s[5]);
int main()
{
int i;
struct store s1,s2,s[5];
for(i=1;i<6;i++)
{
s[i]=read(i);
}
display(s);
getch();
return 0;
}
struct store read(int i)
{
struct store s;
printf("enter details of book:%d are:\n",i);
printf("enter book_title\n");
scanf("%s",&s.book_title);
printf("enter book_author\n");
scanf("%s",&s.book_author);
printf("enter copies\n");
scanf("%d",&s.copies);
printf("enter price\n");
scanf("%d",&s.price);
return s;
}
void display(struct store s[5])
{
int i;
for(i=1;i<6;i++)
{
printf("details of %d book are as follows:\n",i);
printf("book_title=%s\n",s[i].book_title);
printf("book_author=%s\n",s[i].book_author);
printf("copies:%d\n",s[i].copies);
printf("price:%d\n",s[i].price);
printf("cost of remaining books:%d\n",(s[i].copies*s[i].price));
}
}
