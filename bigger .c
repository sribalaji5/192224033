#include<stdio.h>
int main() 
{
	int a,b,c;
	printf ("enter the three values\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		printf("%d is bigger",a);
		else
		printf("%d is bigger",c);
	}	
	else
	{
		if(b>c)	
		printf("%d is bigger",b);
		else
		printf("%d is bigger",c);
	}
}
