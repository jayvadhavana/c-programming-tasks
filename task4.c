#include<stdio.h>
#include<conio.h>
void main()
{
	char first_name[10];
	char last_name[10];
	printf("\nenter your first name :-");
	scanf("%s",&first_name);
	printf("\nenter your last name:-");
	scanf("%s",&last_name);
	printf("\nyour full name is %s %s",first_name,last_name);
	getch();
}
