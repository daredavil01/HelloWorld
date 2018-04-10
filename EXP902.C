//sizeof pointer
#include<stdio.h>
#include<conio.h>
void main()
{
int a,*ptr;
char c,*ptr1;
float f,*ptr2;
clrscr();
printf("enter integer\n");
scanf("%d",&a);
printf("enter character\n");
fflush(stdin);
scanf("%c",&c);
printf("enter float\n");
fflush(stdin);
scanf("%f",&f);
ptr=&a;
ptr1=&c;
ptr2=&f;
printf("size of %u is %d,\nsize of %u is %d.\nsize of %u is %d",ptr,sizeof(ptr),ptr1,sizeof(ptr1),ptr2,sizeof(ptr2));
getch();
}
