#include<stdio.h>
#include<conio.h>
void main()
{
	float fahr,cels;
	printf("Enter temperature in celsius-->");
	scanf("%f",&cels);
		fahr=(9*cels/5)+32;
	printf("fahrenhit temperature:-%f",fahr);
	printf("celsius   temperature:-%f",cels);
	getch();
}
