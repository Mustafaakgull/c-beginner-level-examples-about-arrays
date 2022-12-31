#include <stdio.h>
 
main()
{
	//as=array size
    int array[100],x,as;
    int i,j;
   
    printf("Please enter the size of the array: ");
    scanf("%d",&as);
    
    for(i=0;i<as;i++)
    {
        printf("Enter the %d. value of array: ",i+1);
        scanf("%d",&array[i]);
    }
    printf("here is the ordered array ");
     
    for(i=0; i<as;i++)
    {
        for(j=i+1;j<as+1;j++)
        {
            if(array[j] < array[i])
	    {	
                x=array[i];
                array[i] = array[j];
                array[j] = x;
            }
        }
    }
    for(i=1;i<as+1;i++)
    {
        printf("%5d",array[i]);
    }
     
}
