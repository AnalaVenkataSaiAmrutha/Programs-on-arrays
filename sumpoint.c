/*Sum of array elements using pointers */
#include<stdio.h>
int main()
{
	int a[10],n,sum=0;
	int *ptr,i,j;
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	scanf("%d",(a+i));
	ptr=a;
	for(i=0;i<n;i++)
	{
		sum=sum+(*ptr);
		ptr++;
	}
	printf("Sum of elements:%d",sum);
	return 0;
}
