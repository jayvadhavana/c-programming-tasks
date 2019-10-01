#include<stdio.h>
#include<conio.h>
void main()
{
	int num,i,n;
	printf("\nenter your number:-");
	scanf("%d",&num);
		for(i=1;num!=0,i<=10;i++)
		{
			n=num*i;
			printf("\n%d*%d=%d",num,i,n);
		}
		getch();
}
