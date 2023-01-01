#include<stdio.h>
int main()
{
	int as,revarray1[100],array1[100];
	int i,j;
	
	printf("Please enter the size of the array: ");
	scanf("%d",&as);
	
	printf("Enter the values of the array: ");
	for(i=1;i<=as;i++)
	{
		scanf("%d",&array1[i]);
	}
	
	for(j=0;j<as;j++)
	{
		revarray1[j]=array1[as-j];
	}
	
	printf("That is the reverse form of the given array: \n");
	for(j=0;j<as;j++)
	{
		printf("%5d",revarray1[j]);
	}
	
	return 0;
}
