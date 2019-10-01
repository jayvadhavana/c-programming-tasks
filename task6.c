#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0;
	int i,num;
	printf("\nenter your number:-");
	scanf("%d",&n);
	num=n;
		while(n!=0)
		{
			i=n%10;
			sum=sum+i*i*i;
			n=n/10;
		}
		if(num==sum)
			printf("\ngiven number %d is armstrong",num);
		else
			printf("given number %d is npot armstrong");
	getch();
}
