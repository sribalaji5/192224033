#include<stdio.h>
int main()
{
	int a[]={70,40,30,11,57,41,25,25,14,52};
	int val,i,flag=0,p;
	int n=sizeof(a)/sizeof(a[0]);
	scanf("%d",&val);
	for(i=0;i<n;i++)
	if(a[i]==val)
	{
		flag=1; 
		p=i;
		
	}
	if(flag==1)
	printf("given number %d is found at %d",val,p+1);
	else
	printf("given number %d not found");
}
