#include<stdio.h>
void find_Factorial(int,int*); 
int main()
{
 	int i,*factorial,n;
 	printf("Enter a number:");
 	scanf("%d",&n);
 	find_Factorial(n,&factorial);
 	printf("Factorial of %d is: %d",n,*factorial);
 	return 0;
}void find_Factorial(int ,int*)
{
 	int i;
 	*factorial=1;
	for(i=1;i<=n;i++)
 	*factorial=*factorial*i;
}
