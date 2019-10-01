#include<stdio.h>
#include<conio.h>
void main()
{
	int num,r,sum=0,temp;
	printf("\nenter integer number:-");
	scanf("%d",&num);
	temp=num;
		while(num>0)
		{
			r=num%10;
			sum=sum*10+r;
			num=num/10;
		}
	printf("\nrevrse number is %d",sum);
		if(temp==sum)
			{
				printf("\n given number %d is palindrome",temp);
			}
		else
			{
				printf("\n given number %d is not palindrome",temp);
			}
	getch();
}
