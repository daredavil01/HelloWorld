//book structure
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct book
{
int book_id;
char title[100];
char author[100];
int price;
};
struct book read();
void display(struct book b);
void main()
{
struct book b;
clrscr();
b=read();
display(b);
getch();
}
struct book read()
{
struct book b;
printf("enter book id\n");
scanf("%d",&b.book_id);
printf("enter title\n");
scanf("%s",&b.title);
printf("enter author\n");
scanf("%s",&b.author);
printf("enter price\n");
scanf("%d",&b.price);
return b;
}
void display(struct book b)
{
printf("book_id:%d\n",b.book_id);
printf("%s\n",b.title);
printf("%s\n",b.author);
printf("\nprice:%d",b.price);
}
