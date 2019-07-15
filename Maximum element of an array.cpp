/* Maximum element in given array */
#include<stdio.h>
int main()
{
	int a[50],i,n,max;
	printf("Ener the size of array :\n");
	scanf("%d",&n);
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
		
	}
	printf("Minimum number is %d ",max);
	return 0;
	
}
