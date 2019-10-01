#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	long int fact;
	printf("give positive number for which factorial is tobe found:-");
	scanf("%d",&n);
	if(n<0)
		printf("factorial of negative number is not define.\n");
	else
		{
			fact=1;
			for(i=1;i<=n;i++)
				fact=fact*i;
				printf("factorial of %d=%ld\n",n,fact);
		}
}
