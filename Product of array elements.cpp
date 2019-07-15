/*Product of elements in an array*/
#include<stdio.h>
int main()
{
	int a[50],n,i,pro=1;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		pro=pro*a[i];
	}
	 printf("Product of elements:%d",pro);
	return 0;
}
