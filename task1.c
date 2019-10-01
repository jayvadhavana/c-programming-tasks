#include<stdio.h>
#include<conio.h>
void main()
{
	int age; 
	unsigned long int mnumber;
	char name[10];
	printf("\n Enter your name:-");
	scanf("%s",&name);
	printf("\n your name is %s",name);
	printf("\n enter your age:-");
	scanf("%d",&age);
	printf("\n your age is %d",age);
	printf("\n enter your mobile number:-");
	scanf("%ld",&mnumber);
    printf("\n your mobile number is %ld",mnumber);
	getch();
}
