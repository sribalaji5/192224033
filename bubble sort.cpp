#include<stdio.h>
int main()
{
int array[100], n, i, j, temp; 
printf("Enter number of elements ");
scanf("%d", &n); 
printf("Enter %d Numbers:", n); 
for(i = 0; i < n; i++)
scanf("%d", &array[i]); 
for(i = 0 ; i < n - 1; i++)
{
for(j = 0 ; j < n-i-; j++)
{
if(array[j] > array[j+1]) 
{
temp=array[j];
array[j]=array[j+1];
array[j+1]=temp;
}
}
} 
printf("Sorted Array: "); 
for(i = 0; i < n; i++)
printf("%d ", array[i]);
return 0;
}
