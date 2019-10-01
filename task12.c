#include<stdio.h>
#include<conio.h>
void main()
{
	float fahr,cels;
	int n;
	printf("  =================================");
	printf("\n     1.celcius to fehrenheit     ");
	printf("\n     2.fehrenheit to celcius     ");
	printf("\n=================================");
	printf("\n enter your choice:-");
	scanf("%d",&n);
		switch(n)
		{
			case 1:
				printf("\nenter your temperature in celcius:-");
				scanf("%d",&cels);
				fahr=(9*cels/5)+32;
				printf("\nyour temperature in fehrenheit is %f",fahr);
			case 2:
				printf("\nenter your temperature in fehrenhiet:-");
				scanf("%d",&fahr);
			    cels=5*(fahr-32)/9;
				printf("\nyour temperature in celcius is %f",cels);
			default:
				{
				printf("\nyour input is invalid");
			    }
		}
		getch();
		}

