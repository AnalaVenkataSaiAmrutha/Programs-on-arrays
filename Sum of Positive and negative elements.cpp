/*Sum of positive numbers and negative numbers */
#include<stdio.h>
int main()
{
	int a[50],n,i,sum1=0,sum2=0;
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>=0)
		sum1=sum1+a[i];
		if(a[i]<0)
		 sum2=sum2+a[i];
    }
	printf("Sum of positive elements:%d\n",sum1);
	printf("Sum of negative elements:%d\n",sum2);
	
	return 0;
}

