#include<stdio.h>

int main()
{
    int array1[100];
    int key,i,index=-1,as;
    
    printf("Enter the size of the array: ");
    scanf("%d",&as);
    
    printf("Enter the elements of array: ");
    for(i=0;i<as;i++)
    {
    	scanf("%d",&array1[i]);
	}
    printf("Enter element to delete\n");
    scanf("%d",&key);

    for(i=0;i<size;i++)
    {
        if(array1[i]==key)
        {
            index=i;
            break;
        }
    }

    if(index!=-1)
    {
        for(i=index;i<size-1;i++)
            array1[i]=array1[i+1];

        printf("New Array : ");
        for(i = 0; i < size - 1; i++)
            printf("%d ",array1[i]);
    }
    else
        printf("Element not found\n");
        
    return 0;
}
