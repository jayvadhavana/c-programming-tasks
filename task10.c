#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	printf("\nhow many lines?");
	scanf("%d",&n);
		for(i=n;n>=i,i>=0;i--)
            {		
				for(j=1;j<=i;j++)
				printf("%d",j);
			printf("\n");
		  }
		
	   
	getch();
}
