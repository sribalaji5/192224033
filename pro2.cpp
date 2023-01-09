#include<stdio.h>
int main()
{
	int i,j,k,a;
	printf("enter number of rows:");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	
{
	
	for(k=a;k>=i;k--)
	printf(" ");
	for(j=i;j>=1;j--)
	printf("%d ",j*j);
	printf("\n");
}
}
