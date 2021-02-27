#include<stdio.h>
int main()
{
	int array[5];
	int i , sum=0;
	int *ptr;
	
	printf("\nEnterarray elements (5 integer values):");
	for(i=0;i<5;i++)
	   scanf("%d" ,&array[i]);
	   
	   /* array is equal to base address
	   *array = &array[0] */
	   ptr = array;
	   
	   for(i=0;i<5;i++)
	   {
	   	
	   	//*ptr refers to the vlue of address
	   	sum = sum + *ptr;
	   	ptr++;
	   }
	   
	   
	   printf("\nThe sum is: %d", sum);
}
