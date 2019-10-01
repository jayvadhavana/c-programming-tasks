#include<stdio.h>
#include<conio.h>
void main()
{
	int a[7],small,large,i;
	printf("enter 7 digits:-");
	scanf("%d",&a);
	for(i=1;i<5;i++)
	{
		scanf("%d",&a[i]);
	}	
	small=a[0];
	large=a[0];
	for(i=2;i<5;i++)
	{
		if(a[i]<small)
		{
			small=a[i];
		}
		if(a[i]>large)
		{
			large=a[i];
		}
	}
	printf("\nlarge=%d \nsmall=%d",large,small);
	getch();
}
