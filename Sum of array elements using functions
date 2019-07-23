/*Sum of elements in an array using functions*/
#include<stdio.h>
#include<stdlib.h>
int sumf(int a[],int n);
int main()
{
	int *a,i,n,sum;
	printf("Enter size of array:\n");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
	sum=sumf(a,n);
	printf("Sum of array elements:%d",sum);
	return 0;
}
int sumf(int a[],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	return sum;
}
