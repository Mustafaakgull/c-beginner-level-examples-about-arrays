#include<stdio.h>
int main()
{
	int pos,key,i;
	int as,array1[100];
	printf("How many values you will enter: ");
	scanf("%d",&as);
	for(i=0;i<as;i++)
	{
		printf("PLease enter the %d. value: ",i+1);
		scanf("%d",&array1[i]);
	}
	printf("Enter the element that you want to add to array: ");
	scanf("%d",&key);
	
	printf("Enter the position of element which is you want to add: ");
	scanf("%d",&pos);
	
	as=as+1;
	
	for(i=as-1;i>=pos;i--)
	{
		array1[i]=array1[i-1];
	}
	
	array1[pos-1]=key;
	
	printf("here is your new array: \n");
	for(i=0; i<as; i++)
	{
		printf("%d ",array1[i]);
	}
	
	
	
	
	return 0;
}
