#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k,l,n;
	printf("Enter the number of rows :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=i;k++)
		{
			printf("%c",(k+65-1));
		}
		for(l=i-1;l>=1;l--)
		{
			printf("%c",(l+65-1));
		}
		printf("\n");
	}
   	return 0;
}

