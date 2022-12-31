#include<stdio.h>
int main()
{
	int n,x[100],test,result;
	int i;
	printf("How many values you will enter: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("PLease enter the %d. value: ",i);
		scanf("%d",&x[i]);
	}
	printf("Which number you want to test: ");
	scanf("%d",&test);
    
    for(i=1;i<=n;i++)
    {
    	if(x[i]==test)
    	{
    		result=1;
		}
	}
	if(result==1)
	{
	printf("The test value is in the array");
    }
    else
    {
    	printf("The test value is not in the array");
	}
	return 0;
}
