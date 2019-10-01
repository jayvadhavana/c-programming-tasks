#include<stdio.h>
#include<conio.h>
void main()
{
	int m1,m2,m3,sum;
	float avg;
	printf("\n enter marks of 3 subjects:-");
	scanf("%d%d%d",&m1,&m2,&m3);
	printf("\n your marks is %d %d %d",m1,m2,m3);
		sum=m1+m2+m3;
		avg=sum/3.0;
	printf("\nyour total marks is %d",sum);
	printf("\nyour average of marks is %f",avg);
	getch();
}
