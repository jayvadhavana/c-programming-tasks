#include<stdio.h>
struct book
{
	int bgen;
	char bname[10],aname[10];
};
int main()
{
	struct book b;
	printf("\nEnter Book gneration:-");
	scanf("%d",&b.bgen);
	printf("\nEnter Book Name:-");
	scanf("%s",&b.bname);
	printf("\nEnter name of author:-");
	scanf("%s",&b.aname);
	
	printf("\nBook structure");
	printf("\nBook Generation:-%d",b.bgen);
	printf("\nBook Name:-%s",b.bname);
	printf("\nBook author:-%s",b.aname);
}
