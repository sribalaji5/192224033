#include<stdio.h>
int main()
{
	int a[3][3]={1,2,3,4,5,6,7,8,9};
	int r,c,i,j;
	int sum=0;
	scanf("%d%d",&r,&c);
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	scanf("%d",&a[i][j]);
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	sum=sum+a[i][j];
	printf("%d",sum);
	
}
