/*Sorting the elements in the array */
#include<stdio.h>
int main()
{
    int a[50], i,j,n,temp;
	printf("Enter the no of elements in the array\n");
	scanf("%d", &n);
	printf("Enter the elements\n");
	for (i=0; i<n; i++)
	{
		scanf ("%d", &a[i]);
	}
	printf("Elements of the array are\n");
	for (i=0; i<n; i++)
	printf("%d ", a[i]);
	for (i=0; i<n-1; i++)
	{
		for (j=i+1; j<n; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf ("\nElements after  sorting the array are\n");
	for (i=0; i<n; i++)
	printf("%d ", a[i]);
	return 0;
}
	

