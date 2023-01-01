#include<stdio.h>
int main()
{
	int as1,as2;
	int array1[100],array2[100],array3[100];
	int i,k;
	printf("Please write the size of the first array: ");
	scanf("%d",&as1);
	printf("Please write the size of the second array: ");
	scanf("%d",&as2);
	printf("PLease enter the values of first array \n");
	for(i=1;i<=as1;i++)
	{
		scanf("%d",&array1[i]);
	}
	printf("Please enter the values of second array: \n");
	for(k=1;k<=as2;k++)
	{
		scanf("%d",&array2[k]);
	}
	for(i=1;i<=as1;i++)
	{
		for(k=1;k<=as2;k++)
		{
			if(array1[i]==array2[k])
	        {
		     
		       printf("num %d with %d. index from list1 is same with %d with num %d. index from list2\n",array1[i],i,array2[k],k);
			}
			else
	        {
	        	printf("There is no common value between given arrays!!!!");
	        }
		}
    }
	
	        
	
	return 0;
}
