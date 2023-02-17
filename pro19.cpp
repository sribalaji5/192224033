
#include <stdio.h>
int main()
{
	int array1_size,array2_size, arr_resultsize,i, j;
	int a[i]={},b[j]={};
	printf("Enter the size of array 1:");
	scanf("%d",&array1_size);
	printf("Enter the elements of array 1:");
	scanf("%d",&a[i]);
	printf("Enter the size of array 2:");
	scanf("%d",&array2_size);
	printf("Enter the elements of array 2:");
	scanf("%d",&b[j]);
	arr_resultsize = array1_size + array2_size;
	int c[arr_resultsize];
	for (i = 0; i <array1_size; i++) 
	{
		c[i] = a[i];
	}
	
	for (i = 0, j = array1_size;
	j < arr_resultsize && i < array2_size; i++, j++) 
		{
			c[j] = b[i];
		}
		for (i = 0; i < arr_resultsize; i++)
		{
			printf("%d ", c[i]);
		}
	return 0;
}

