/*Eligible for voting or not */
#include<stdio.h>
#include<stdlib.h>
void eligible (int a[],int n);
int main()
{
	int *a,i,n;
	printf("Enter no of people\n");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	printf("Enter the ages of people:");
	for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
	  eligible (a,n);	 
	  return 0; 
}
 void eligible (int a[],int n)
 {
 	int i;
 	for(i=0;i<n;i++)
 	{
 		if(a[i]>=18)
 		  printf("%d is eligible for voting\n",a[i]);
 		else
 		  printf("%d is not eligible for voting\n",a[i]);
	 }
 }
