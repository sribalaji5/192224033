#include<stdio.h>
int main()
{
	int a,b,c,squ;
	printf("enter the three number\n");
	scanf("%d%d%d",&a,&b,&c);
	squ=(a*a+b*b);
	if(squ==c*c)
	printf("the given number is pythogorial triplet");
	else
	printf("the given number is not pythogorial triplet");
}
