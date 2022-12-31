#include<stdio.h>
int main()
{
	int as,key,index,i;
	int array1[100];
	printf("Please enter the size of the array: ");
	scanf("%d",&as);
	
	printf("Enter the values of the array: ");
	for(i=1;i<=as;i++)
	{
		scanf("%d",&array1[i]);
	}
	
	printf("Which number you want to find the index in array: ");
	scanf("%d",&key);
	
	for(i=1;i<=as;i++)
	{
		if(array1[i]==key)
		{
			index=i;
		}
	}
	
	printf("Your number which is you wanted to learn in the %d. number of given array",index);
	
	
	return 0;
}
