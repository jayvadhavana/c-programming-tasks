#include<stdio.h>
#include<conio.h>
void main()
{
	int num,r,sum=0;
	printf("\nenter integer number:-");
	scanf("%d",&num);
	while(num>0)
	{
		r=num%10;
		sum=sum*10+r;
		num=num/10;
	}
	printf("\nrevrse number is %d",sum);
	getch();
}
