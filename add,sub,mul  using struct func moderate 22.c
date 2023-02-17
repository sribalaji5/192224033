#include<stdio.h>
#include<stdlib.h>
struct complex
{
	int real,imaginary;
};
int main()
{
	int choice,x,y,z;
	struct complex a,b,c;
	printf("Enter the value of a and b:");
	scanf("%d",&a.real,&a.imaginary);
	printf("Enter the value of c and d:");
	scanf("%d",&b.real,&b.imaginary);
	printf(" enter your choice:");
	scanf("%d",&choice);
	switch(choice)
};
if(choice==1)
{
	c.real=a.real+b.real;
	c.imaginary=a.imaginary+b.imaginary;
	if(c.imaginary>=0)
	printf("The addition of complex numbers=% +%di",c.real,c.imaginary);
	else
	printf("The addition of complex numbers=%d %di",c.real,c.imaginary);
}
else if(choice==2)
{
	c.real=a.real-b.real;
	c.imaginary=a.imaginary-b.imaginary;
	if(c.imaginary>=0)
	printf("The subtraction of given complex numbers =%d + %di",c.real,c.imaginary);
	else
	printf("The subtraction of given complex numbers =%d %di",c.real,c.imaginary);
}
else if(choice==3)
{
	c.real=a.real*b.real - a.imaginary*b.imaginary;
	c.imaginary=a.imaginary*b.real + a.real*b.imaginary;
	if(c.imaginary>=0)
	printf("The multiplication of complex numbers =%d + %di",c.real,c.imaginary);
	else
	printf("The multiplication of complex numbers =%d %di",c.real,c.imaginary);
}
else if(choice==4)
{
	if(b.real==0&&b.imaginary==0)
	printf("The division of complex numbers 0+0i isn't allowed");
	else
	x=a.real*b.real+a.imaginary*b.imaginary;
	y=a.imaginary*b.real-a.real*b.imaginary;
	z=b.real*b.real+b.imaginary*b.imaginary;
	if(x%z==0 && y%z==0)
	{
		if(y/z >=0)
		printf("The division of two compplex numbers =%d +%d%di",x/z,y,z);
		else
		printf("The division of two complex numbers =%d %d/%di",x/z,y,z);
	}
	else if(x%z !=0 && y%z==0)
	{
		if(y/z>=0)
		printf("The division of two complex numbers =%d%d + %di",x,z,y,z);
		else
		printf("The division of two complex numbers =%d / %d%d / %di",x,z,y,z);
		}
	}
	else
	printf("Invalid choice");
}
