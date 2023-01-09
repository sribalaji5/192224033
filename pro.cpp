#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("enter the number of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	for(k=n;k>=i;k--)
	
	printf(" ");

	for(j=i;j>=1;j--)
	
	printf("%d ",j);
	
	printf("\n");
	}
}
	

