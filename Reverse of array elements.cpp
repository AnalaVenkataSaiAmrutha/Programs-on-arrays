/*Reversing the elements in array */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,i,n,j,temp;
	printf("Enter no of array elements:\n");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
	j=i-1;
	i=0;
	while(i<j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		i++;
		j--;
	}
	for(i=0;i<n;i++)
	  printf("%d ",a[i]);
	  return 0;
}
